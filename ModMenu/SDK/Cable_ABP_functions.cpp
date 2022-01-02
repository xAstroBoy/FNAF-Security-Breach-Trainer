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
//		Name   -> Function Cable_ABP.Cable_ABP_C.AnimGraph
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
void UCable_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Cable_ABP.Cable_ABP_C.AnimGraph");

	UCable_ABP_C_AnimGraph_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Cable_ABP.Cable_ABP_C.Off
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCable_ABP_C::Off(bool Off)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Cable_ABP.Cable_ABP_C.Off");

	UCable_ABP_C_Off_Params params {};
	params.Off = Off;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Cable_ABP.Cable_ABP_C.Close
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               close                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCable_ABP_C::Close(bool close)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Cable_ABP.Cable_ABP_C.Close");

	UCable_ABP_C_Close_Params params {};
	params.close = close;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Cable_ABP.Cable_ABP_C.TestButton_G
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UCable_ABP_C::TestButton_G()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Cable_ABP.Cable_ABP_C.TestButton_G");

	UCable_ABP_C_TestButton_G_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Cable_ABP.Cable_ABP_C.TestButton_Y
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UCable_ABP_C::TestButton_Y()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Cable_ABP.Cable_ABP_C.TestButton_Y");

	UCable_ABP_C_TestButton_Y_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Cable_ABP.Cable_ABP_C.TestButton_B
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UCable_ABP_C::TestButton_B()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Cable_ABP.Cable_ABP_C.TestButton_B");

	UCable_ABP_C_TestButton_B_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Cable_ABP.Cable_ABP_C.VoiceBoxSwap
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCable_ABP_C::VoiceBoxSwap(bool Off)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Cable_ABP.Cable_ABP_C.VoiceBoxSwap");

	UCable_ABP_C_VoiceBoxSwap_Params params {};
	params.Off = Off;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Cable_ABP.Cable_ABP_C.TestButton_R
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UCable_ABP_C::TestButton_R()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Cable_ABP.Cable_ABP_C.TestButton_R");

	UCable_ABP_C_TestButton_R_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Cable_ABP.Cable_ABP_C.PartsAndServiceGame
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PartsAndServiceAnimEnum_EPartsAndServiceAnimEnum> GameEnum                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCable_ABP_C::PartsAndServiceGame(TEnumAsByte<PartsAndServiceAnimEnum_EPartsAndServiceAnimEnum> GameEnum)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Cable_ABP.Cable_ABP_C.PartsAndServiceGame");

	UCable_ABP_C_PartsAndServiceGame_Params params {};
	params.GameEnum = GameEnum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Cable_ABP.Cable_ABP_C.ResetFreddy
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UCable_ABP_C::ResetFreddy()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Cable_ABP.Cable_ABP_C.ResetFreddy");

	UCable_ABP_C_ResetFreddy_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Cable_ABP.Cable_ABP_C.BlueprintUpdateAnimation
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCable_ABP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Cable_ABP.Cable_ABP_C.BlueprintUpdateAnimation");

	UCable_ABP_C_BlueprintUpdateAnimation_Params params {};
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Cable_ABP.Cable_ABP_C.BlueprintBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void UCable_ABP_C::BlueprintBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Cable_ABP.Cable_ABP_C.BlueprintBeginPlay");

	UCable_ABP_C_BlueprintBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Cable_ABP.Cable_ABP_C.Out
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               In                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCable_ABP_C::Out(bool In)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Cable_ABP.Cable_ABP_C.Out");

	UCable_ABP_C_Out_Params params {};
	params.In = In;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Cable_ABP.Cable_ABP_C.ExecuteUbergraph_Cable_ABP
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCable_ABP_C::ExecuteUbergraph_Cable_ABP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Cable_ABP.Cable_ABP_C.ExecuteUbergraph_Cable_ABP");

	UCable_ABP_C_ExecuteUbergraph_Cable_ABP_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
