// Name: FNAF Security Breach, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PowerStationEventHandler.PowerStationEventHandler_C.StartPowerStationEvent
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APowerStation_Actor_C*                       PowerStation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APowerStationPlayerInteractible_C*           PowerStationInteract                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPowerStationEventHandler_C::StartPowerStationEvent(class APowerStation_Actor_C* PowerStation, class APowerStationPlayerInteractible_C* PowerStationInteract)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PowerStationEventHandler.PowerStationEventHandler_C.StartPowerStationEvent");

	UPowerStationEventHandler_C_StartPowerStationEvent_Params params {};
	params.PowerStation = PowerStation;
	params.PowerStationInteract = PowerStationInteract;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
