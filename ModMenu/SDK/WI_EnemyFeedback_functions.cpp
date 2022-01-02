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
//		Name   -> Function WI_EnemyFeedback.WI_EnemyFeedback_C.PlayFeedback
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWI_EnemyFeedback_C::PlayFeedback(float Damage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_EnemyFeedback.WI_EnemyFeedback_C.PlayFeedback");

	UWI_EnemyFeedback_C_PlayFeedback_Params params {};
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_EnemyFeedback.WI_EnemyFeedback_C.EndFeedback
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWI_EnemyFeedback_C::EndFeedback()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_EnemyFeedback.WI_EnemyFeedback_C.EndFeedback");

	UWI_EnemyFeedback_C_EndFeedback_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_EnemyFeedback.WI_EnemyFeedback_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWI_EnemyFeedback_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_EnemyFeedback.WI_EnemyFeedback_C.Construct");

	UWI_EnemyFeedback_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_EnemyFeedback.WI_EnemyFeedback_C.ExecuteUbergraph_WI_EnemyFeedback
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWI_EnemyFeedback_C::ExecuteUbergraph_WI_EnemyFeedback(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_EnemyFeedback.WI_EnemyFeedback_C.ExecuteUbergraph_WI_EnemyFeedback");

	UWI_EnemyFeedback_C_ExecuteUbergraph_WI_EnemyFeedback_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
