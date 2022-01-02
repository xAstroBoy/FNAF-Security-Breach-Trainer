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
//		Name   -> Function Equippable.Equippable_C.PullOut
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void AEquippable_C::PullOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Equippable.Equippable_C.PullOut");

	AEquippable_C_PullOut_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Equippable.Equippable_C.PutAway
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void AEquippable_C::PutAway()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Equippable.Equippable_C.PutAway");

	AEquippable_C_PutAway_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Equippable.Equippable_C.PrimaryAction
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AEquippable_C::PrimaryAction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Equippable.Equippable_C.PrimaryAction");

	AEquippable_C_PrimaryAction_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Equippable.Equippable_C.SecondaryAction
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AEquippable_C::SecondaryAction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Equippable.Equippable_C.SecondaryAction");

	AEquippable_C_SecondaryAction_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Equippable.Equippable_C.ExecuteUbergraph_Equippable
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AEquippable_C::ExecuteUbergraph_Equippable(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Equippable.Equippable_C.ExecuteUbergraph_Equippable");

	AEquippable_C_ExecuteUbergraph_Equippable_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
