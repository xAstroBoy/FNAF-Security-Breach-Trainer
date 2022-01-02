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
//		Name   -> Function MoonManDistortionActor1.MoonManDistortionActor1_C.Timeline_0__FinishedFunc
//		Flags  -> (BlueprintEvent)
void AMoonManDistortionActor1_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MoonManDistortionActor1.MoonManDistortionActor1_C.Timeline_0__FinishedFunc");

	AMoonManDistortionActor1_C_Timeline_0__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MoonManDistortionActor1.MoonManDistortionActor1_C.Timeline_0__UpdateFunc
//		Flags  -> (BlueprintEvent)
void AMoonManDistortionActor1_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MoonManDistortionActor1.MoonManDistortionActor1_C.Timeline_0__UpdateFunc");

	AMoonManDistortionActor1_C_Timeline_0__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MoonManDistortionActor1.MoonManDistortionActor1_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AMoonManDistortionActor1_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MoonManDistortionActor1.MoonManDistortionActor1_C.ReceiveBeginPlay");

	AMoonManDistortionActor1_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MoonManDistortionActor1.MoonManDistortionActor1_C.Set Level
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMoonManDistortionActor1_C::Set_Level(float Level)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MoonManDistortionActor1.MoonManDistortionActor1_C.Set Level");

	AMoonManDistortionActor1_C_Set_Level_Params params {};
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MoonManDistortionActor1.MoonManDistortionActor1_C.ExecuteUbergraph_MoonManDistortionActor1
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMoonManDistortionActor1_C::ExecuteUbergraph_MoonManDistortionActor1(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MoonManDistortionActor1.MoonManDistortionActor1_C.ExecuteUbergraph_MoonManDistortionActor1");

	AMoonManDistortionActor1_C_ExecuteUbergraph_MoonManDistortionActor1_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
