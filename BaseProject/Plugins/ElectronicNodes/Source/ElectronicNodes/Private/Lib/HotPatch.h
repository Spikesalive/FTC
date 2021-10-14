/* Copyright (C) 2021 Hugo ATTAL - All Rights Reserved
* This plugin is downloadable from the UE4 Marketplace
*/

#pragma once

#if PLATFORM_WINDOWS && !UE_BUILD_SHIPPING
#include "Windows/AllowWindowsPlatformTypes.h"

struct FHotPatch
{
	template <typename FunctionType>
	static bool Hook(FunctionType* From, FunctionType* To)
	{
		uint8* FromAddress = reinterpret_cast<uint8*>(From);
		uint8* ToAddress = reinterpret_cast<uint8*>(To);

		const uint32 HookSize = 5;
		const uint32 JumpOffset = ToAddress - FromAddress - HookSize;

		TArray<uint8> Patch;
		Patch.Add(0xe9);
		Patch.Append(reinterpret_cast<const uint8*>(&JumpOffset), sizeof(JumpOffset));

		DWORD BaseProtection;
		const DWORD NewProtection = PAGE_EXECUTE_READWRITE;
		if (!VirtualProtect(FromAddress, Patch.Num(), NewProtection, &BaseProtection))
		{
			return false;
		}

		FMemory::Memcpy(FromAddress, Patch.GetData(), Patch.Num());
		VirtualProtect(FromAddress, Patch.Num(), BaseProtection, &BaseProtection);
		FlushInstructionCache(GetCurrentProcess(), nullptr, 0);

		return true;
	}
};

#include "Windows/HideWindowsPlatformTypes.h"
#endif
