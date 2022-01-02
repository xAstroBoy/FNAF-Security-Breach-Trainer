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
//		Name   -> Function AlwaysFaceCameraComponent_Kitchen.AlwaysFaceCameraComponent_Kitchen_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAlwaysFaceCameraComponent_Kitchen_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlwaysFaceCameraComponent_Kitchen.AlwaysFaceCameraComponent_Kitchen_C.ReceiveTick");

	UAlwaysFaceCameraComponent_Kitchen_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function AlwaysFaceCameraComponent_Kitchen.AlwaysFaceCameraComponent_Kitchen_C.ExecuteUbergraph_AlwaysFaceCameraComponent_Kitchen
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAlwaysFaceCameraComponent_Kitchen_C::ExecuteUbergraph_AlwaysFaceCameraComponent_Kitchen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlwaysFaceCameraComponent_Kitchen.AlwaysFaceCameraComponent_Kitchen_C.ExecuteUbergraph_AlwaysFaceCameraComponent_Kitchen");

	UAlwaysFaceCameraComponent_Kitchen_C_ExecuteUbergraph_AlwaysFaceCameraComponent_Kitchen_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
