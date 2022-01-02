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
//		Name   -> Function WI_InstructionCard.WI_InstructionCard_C.UpdateCard
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWI_InstructionCard_C::UpdateCard()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_InstructionCard.WI_InstructionCard_C.UpdateCard");

	UWI_InstructionCard_C_UpdateCard_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_InstructionCard.WI_InstructionCard_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWI_InstructionCard_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_InstructionCard.WI_InstructionCard_C.PreConstruct");

	UWI_InstructionCard_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_InstructionCard.WI_InstructionCard_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWI_InstructionCard_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_InstructionCard.WI_InstructionCard_C.Construct");

	UWI_InstructionCard_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_InstructionCard.WI_InstructionCard_C.ExecuteUbergraph_WI_InstructionCard
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWI_InstructionCard_C::ExecuteUbergraph_WI_InstructionCard(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_InstructionCard.WI_InstructionCard_C.ExecuteUbergraph_WI_InstructionCard");

	UWI_InstructionCard_C_ExecuteUbergraph_WI_InstructionCard_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
