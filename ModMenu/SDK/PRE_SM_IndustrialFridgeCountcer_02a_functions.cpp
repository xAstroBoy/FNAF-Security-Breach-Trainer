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
//		Name   -> Function PRE_SM_IndustrialFridgeCountcer_02a.PRE_SM_IndustrialFridgeCountcer_02a_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APRE_SM_IndustrialFridgeCountcer_02a_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PRE_SM_IndustrialFridgeCountcer_02a.PRE_SM_IndustrialFridgeCountcer_02a_C.ReceiveTick");

	APRE_SM_IndustrialFridgeCountcer_02a_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PRE_SM_IndustrialFridgeCountcer_02a.PRE_SM_IndustrialFridgeCountcer_02a_C.PlayEmitter
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void APRE_SM_IndustrialFridgeCountcer_02a_C::PlayEmitter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PRE_SM_IndustrialFridgeCountcer_02a.PRE_SM_IndustrialFridgeCountcer_02a_C.PlayEmitter");

	APRE_SM_IndustrialFridgeCountcer_02a_C_PlayEmitter_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PRE_SM_IndustrialFridgeCountcer_02a.PRE_SM_IndustrialFridgeCountcer_02a_C.StopEmitter
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void APRE_SM_IndustrialFridgeCountcer_02a_C::StopEmitter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PRE_SM_IndustrialFridgeCountcer_02a.PRE_SM_IndustrialFridgeCountcer_02a_C.StopEmitter");

	APRE_SM_IndustrialFridgeCountcer_02a_C_StopEmitter_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PRE_SM_IndustrialFridgeCountcer_02a.PRE_SM_IndustrialFridgeCountcer_02a_C.ToggleInRange
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               InRange                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APRE_SM_IndustrialFridgeCountcer_02a_C::ToggleInRange(bool InRange)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PRE_SM_IndustrialFridgeCountcer_02a.PRE_SM_IndustrialFridgeCountcer_02a_C.ToggleInRange");

	APRE_SM_IndustrialFridgeCountcer_02a_C_ToggleInRange_Params params {};
	params.InRange = InRange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PRE_SM_IndustrialFridgeCountcer_02a.PRE_SM_IndustrialFridgeCountcer_02a_C.ExecuteUbergraph_PRE_SM_IndustrialFridgeCountcer_02a
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APRE_SM_IndustrialFridgeCountcer_02a_C::ExecuteUbergraph_PRE_SM_IndustrialFridgeCountcer_02a(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PRE_SM_IndustrialFridgeCountcer_02a.PRE_SM_IndustrialFridgeCountcer_02a_C.ExecuteUbergraph_PRE_SM_IndustrialFridgeCountcer_02a");

	APRE_SM_IndustrialFridgeCountcer_02a_C_ExecuteUbergraph_PRE_SM_IndustrialFridgeCountcer_02a_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
