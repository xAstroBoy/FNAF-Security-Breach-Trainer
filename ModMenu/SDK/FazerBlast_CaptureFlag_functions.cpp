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
//		Name   -> Function FazerBlast_CaptureFlag.FazerBlast_CaptureFlag_C.Set
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFazerBlast_CaptureFlag_C::Set(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FazerBlast_CaptureFlag.FazerBlast_CaptureFlag_C.Set");

	UFazerBlast_CaptureFlag_C_Set_Params params {};
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FazerBlast_CaptureFlag.FazerBlast_CaptureFlag_C.OnNotifyEnd_A5776C054CA2FE15A95E72ACB4658B88
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFazerBlast_CaptureFlag_C::OnNotifyEnd_A5776C054CA2FE15A95E72ACB4658B88(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FazerBlast_CaptureFlag.FazerBlast_CaptureFlag_C.OnNotifyEnd_A5776C054CA2FE15A95E72ACB4658B88");

	UFazerBlast_CaptureFlag_C_OnNotifyEnd_A5776C054CA2FE15A95E72ACB4658B88_Params params {};
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FazerBlast_CaptureFlag.FazerBlast_CaptureFlag_C.OnNotifyBegin_A5776C054CA2FE15A95E72ACB4658B88
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFazerBlast_CaptureFlag_C::OnNotifyBegin_A5776C054CA2FE15A95E72ACB4658B88(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FazerBlast_CaptureFlag.FazerBlast_CaptureFlag_C.OnNotifyBegin_A5776C054CA2FE15A95E72ACB4658B88");

	UFazerBlast_CaptureFlag_C_OnNotifyBegin_A5776C054CA2FE15A95E72ACB4658B88_Params params {};
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FazerBlast_CaptureFlag.FazerBlast_CaptureFlag_C.OnInterrupted_A5776C054CA2FE15A95E72ACB4658B88
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFazerBlast_CaptureFlag_C::OnInterrupted_A5776C054CA2FE15A95E72ACB4658B88(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FazerBlast_CaptureFlag.FazerBlast_CaptureFlag_C.OnInterrupted_A5776C054CA2FE15A95E72ACB4658B88");

	UFazerBlast_CaptureFlag_C_OnInterrupted_A5776C054CA2FE15A95E72ACB4658B88_Params params {};
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FazerBlast_CaptureFlag.FazerBlast_CaptureFlag_C.OnBlendOut_A5776C054CA2FE15A95E72ACB4658B88
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFazerBlast_CaptureFlag_C::OnBlendOut_A5776C054CA2FE15A95E72ACB4658B88(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FazerBlast_CaptureFlag.FazerBlast_CaptureFlag_C.OnBlendOut_A5776C054CA2FE15A95E72ACB4658B88");

	UFazerBlast_CaptureFlag_C_OnBlendOut_A5776C054CA2FE15A95E72ACB4658B88_Params params {};
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FazerBlast_CaptureFlag.FazerBlast_CaptureFlag_C.OnCompleted_A5776C054CA2FE15A95E72ACB4658B88
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFazerBlast_CaptureFlag_C::OnCompleted_A5776C054CA2FE15A95E72ACB4658B88(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FazerBlast_CaptureFlag.FazerBlast_CaptureFlag_C.OnCompleted_A5776C054CA2FE15A95E72ACB4658B88");

	UFazerBlast_CaptureFlag_C_OnCompleted_A5776C054CA2FE15A95E72ACB4658B88_Params params {};
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FazerBlast_CaptureFlag.FazerBlast_CaptureFlag_C.ReceiveExecuteAI
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFazerBlast_CaptureFlag_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FazerBlast_CaptureFlag.FazerBlast_CaptureFlag_C.ReceiveExecuteAI");

	UFazerBlast_CaptureFlag_C_ReceiveExecuteAI_Params params {};
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FazerBlast_CaptureFlag.FazerBlast_CaptureFlag_C.ExecuteUbergraph_FazerBlast_CaptureFlag
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFazerBlast_CaptureFlag_C::ExecuteUbergraph_FazerBlast_CaptureFlag(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FazerBlast_CaptureFlag.FazerBlast_CaptureFlag_C.ExecuteUbergraph_FazerBlast_CaptureFlag");

	UFazerBlast_CaptureFlag_C_ExecuteUbergraph_FazerBlast_CaptureFlag_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
