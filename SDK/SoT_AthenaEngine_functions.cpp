// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaEngine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AthenaEngine.BoxCollisionExtentAdjustOverTimeComponent.SetBoxCollisionToAdjust
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBoxComponent*           InBoxComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBoxCollisionExtentAdjustOverTimeComponent::SetBoxCollisionToAdjust(class UBoxComponent* InBoxComponent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaEngine.BoxCollisionExtentAdjustOverTimeComponent.SetBoxCollisionToAdjust"));

	struct
	{
		class UBoxComponent*           InBoxComponent;
	} params;

	params.InBoxComponent = InBoxComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaEngine.ForceFeedbackCondition.CanPlayForceFeedback
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class AActor*                  InOwner                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UForceFeedbackCondition::CanPlayForceFeedback(class AActor* InOwner)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaEngine.ForceFeedbackCondition.CanPlayForceFeedback"));

	struct
	{
		class AActor*                  InOwner;
		bool                           ReturnValue;
	} params;

	params.InOwner = InOwner;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
