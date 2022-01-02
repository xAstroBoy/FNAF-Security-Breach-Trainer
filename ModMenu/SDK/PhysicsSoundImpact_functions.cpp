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
//		Name   -> Function PhysicsSoundImpact.PhysicsSoundImpact_C.Initialize
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UPhysicsSoundImpact_C::Initialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PhysicsSoundImpact.PhysicsSoundImpact_C.Initialize");

	UPhysicsSoundImpact_C_Initialize_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PhysicsSoundImpact.PhysicsSoundImpact_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPhysicsSoundImpact_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PhysicsSoundImpact.PhysicsSoundImpact_C.ReceiveTick");

	UPhysicsSoundImpact_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PhysicsSoundImpact.PhysicsSoundImpact_C.ExecuteUbergraph_PhysicsSoundImpact
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPhysicsSoundImpact_C::ExecuteUbergraph_PhysicsSoundImpact(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PhysicsSoundImpact.PhysicsSoundImpact_C.ExecuteUbergraph_PhysicsSoundImpact");

	UPhysicsSoundImpact_C_ExecuteUbergraph_PhysicsSoundImpact_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
