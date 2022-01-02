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
//		Name   -> Function DebuggableAICharacter.DebuggableAICharacter_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ADebuggableAICharacter_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebuggableAICharacter.DebuggableAICharacter_C.ReceiveBeginPlay");

	ADebuggableAICharacter_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebuggableAICharacter.DebuggableAICharacter_C.OnDebugVis
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ADebuggableAICharacter_C::OnDebugVis(bool enable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebuggableAICharacter.DebuggableAICharacter_C.OnDebugVis");

	ADebuggableAICharacter_C_OnDebugVis_Params params {};
	params.enable = enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebuggableAICharacter.DebuggableAICharacter_C.ExecuteUbergraph_DebuggableAICharacter
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADebuggableAICharacter_C::ExecuteUbergraph_DebuggableAICharacter(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebuggableAICharacter.DebuggableAICharacter_C.ExecuteUbergraph_DebuggableAICharacter");

	ADebuggableAICharacter_C_ExecuteUbergraph_DebuggableAICharacter_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
