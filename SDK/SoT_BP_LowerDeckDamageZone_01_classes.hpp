#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_LowerDeckDamageZone_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LowerDeckDamageZone_01.BP_LowerDeckDamageZone_01_C
// 0x0000 (0x0890 - 0x0890)
class ABP_LowerDeckDamageZone_01_C : public ABP_BaseInternalDamageZone_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_LowerDeckDamageZone_01.BP_LowerDeckDamageZone_01_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
