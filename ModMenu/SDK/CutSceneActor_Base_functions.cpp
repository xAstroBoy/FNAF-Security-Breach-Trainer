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
//		Name   -> Function CutSceneActor_Base.CutSceneActor_Base_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ACutSceneActor_Base_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CutSceneActor_Base.CutSceneActor_Base_C.ReceiveBeginPlay");

	ACutSceneActor_Base_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CutSceneActor_Base.CutSceneActor_Base_C.ExecuteUbergraph_CutSceneActor_Base
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACutSceneActor_Base_C::ExecuteUbergraph_CutSceneActor_Base(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CutSceneActor_Base.CutSceneActor_Base_C.ExecuteUbergraph_CutSceneActor_Base");

	ACutSceneActor_Base_C_ExecuteUbergraph_CutSceneActor_Base_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
