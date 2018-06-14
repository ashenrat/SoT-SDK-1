#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Entry_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Entry.Entry_C
// 0x0008 (0x0480 - 0x0478)
class AEntry_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Entry.Entry_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_Entry(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif