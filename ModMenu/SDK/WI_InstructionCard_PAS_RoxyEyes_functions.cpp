﻿// Name: FNAF Security Breach, Version: 1

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
//		Name   -> Function WI_InstructionCard_PAS_RoxyEyes.WI_InstructionCard_PAS_RoxyEyes_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWI_InstructionCard_PAS_RoxyEyes_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_InstructionCard_PAS_RoxyEyes.WI_InstructionCard_PAS_RoxyEyes_C.Tick");

	UWI_InstructionCard_PAS_RoxyEyes_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_InstructionCard_PAS_RoxyEyes.WI_InstructionCard_PAS_RoxyEyes_C.ExecuteUbergraph_WI_InstructionCard_PAS_RoxyEyes
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWI_InstructionCard_PAS_RoxyEyes_C::ExecuteUbergraph_WI_InstructionCard_PAS_RoxyEyes(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_InstructionCard_PAS_RoxyEyes.WI_InstructionCard_PAS_RoxyEyes_C.ExecuteUbergraph_WI_InstructionCard_PAS_RoxyEyes");

	UWI_InstructionCard_PAS_RoxyEyes_C_ExecuteUbergraph_WI_InstructionCard_PAS_RoxyEyes_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
