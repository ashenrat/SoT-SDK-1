// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_wpn_flintlock_pistol_elb_01_a_v02_ItemInfo_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_wpn_flintlock_pistol_elb_01_a_v02_ItemInfo.BP_wpn_flintlock_pistol_elb_01_a_v02_ItemInfo_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_wpn_flintlock_pistol_elb_01_a_v02_ItemInfo_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_wpn_flintlock_pistol_elb_01_a_v02_ItemInfo.BP_wpn_flintlock_pistol_elb_01_a_v02_ItemInfo_C.UserConstructionScript");

	ABP_wpn_flintlock_pistol_elb_01_a_v02_ItemInfo_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif