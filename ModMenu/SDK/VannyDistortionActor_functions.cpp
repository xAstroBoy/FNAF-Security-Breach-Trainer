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
//		Name   -> Function VannyDistortionActor.VannyDistortionActor_C.Timeline_0__FinishedFunc
//		Flags  -> (BlueprintEvent)
void AVannyDistortionActor_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VannyDistortionActor.VannyDistortionActor_C.Timeline_0__FinishedFunc");

	AVannyDistortionActor_C_Timeline_0__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function VannyDistortionActor.VannyDistortionActor_C.Timeline_0__UpdateFunc
//		Flags  -> (BlueprintEvent)
void AVannyDistortionActor_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VannyDistortionActor.VannyDistortionActor_C.Timeline_0__UpdateFunc");

	AVannyDistortionActor_C_Timeline_0__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function VannyDistortionActor.VannyDistortionActor_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AVannyDistortionActor_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VannyDistortionActor.VannyDistortionActor_C.ReceiveBeginPlay");

	AVannyDistortionActor_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function VannyDistortionActor.VannyDistortionActor_C.Set Level
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AVannyDistortionActor_C::Set_Level(float Level)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VannyDistortionActor.VannyDistortionActor_C.Set Level");

	AVannyDistortionActor_C_Set_Level_Params params {};
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function VannyDistortionActor.VannyDistortionActor_C.ExecuteUbergraph_VannyDistortionActor
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AVannyDistortionActor_C::ExecuteUbergraph_VannyDistortionActor(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VannyDistortionActor.VannyDistortionActor_C.ExecuteUbergraph_VannyDistortionActor");

	AVannyDistortionActor_C_ExecuteUbergraph_VannyDistortionActor_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
