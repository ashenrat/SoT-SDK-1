#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AIShips_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AIShips.AIShipServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UAIShipServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIShips.AIShipServiceInterface");
		return ptr;
	}

};


// Class AIShips.AIShipService
// 0x0008 (0x0478 - 0x0470)
class AAIShipService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0470(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIShips.AIShipService");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif