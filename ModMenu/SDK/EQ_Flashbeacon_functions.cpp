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
//		Name   -> Function EQ_Flashbeacon.EQ_Flashbeacon_C.PutAway
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void AEQ_Flashbeacon_C::PutAway()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EQ_Flashbeacon.EQ_Flashbeacon_C.PutAway");

	AEQ_Flashbeacon_C_PutAway_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function EQ_Flashbeacon.EQ_Flashbeacon_C.PullOut
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AEQ_Flashbeacon_C::PullOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EQ_Flashbeacon.EQ_Flashbeacon_C.PullOut");

	AEQ_Flashbeacon_C_PullOut_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function EQ_Flashbeacon.EQ_Flashbeacon_C.PrimaryAction
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AEQ_Flashbeacon_C::PrimaryAction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EQ_Flashbeacon.EQ_Flashbeacon_C.PrimaryAction");

	AEQ_Flashbeacon_C_PrimaryAction_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function EQ_Flashbeacon.EQ_Flashbeacon_C.ResetCamUse
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AEQ_Flashbeacon_C::ResetCamUse()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EQ_Flashbeacon.EQ_Flashbeacon_C.ResetCamUse");

	AEQ_Flashbeacon_C_ResetCamUse_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function EQ_Flashbeacon.EQ_Flashbeacon_C.Recharging
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AEQ_Flashbeacon_C::Recharging()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EQ_Flashbeacon.EQ_Flashbeacon_C.Recharging");

	AEQ_Flashbeacon_C_Recharging_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function EQ_Flashbeacon.EQ_Flashbeacon_C.RechargeDone
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AEQ_Flashbeacon_C::RechargeDone()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EQ_Flashbeacon.EQ_Flashbeacon_C.RechargeDone");

	AEQ_Flashbeacon_C_RechargeDone_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function EQ_Flashbeacon.EQ_Flashbeacon_C.ExecuteUbergraph_EQ_Flashbeacon
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AEQ_Flashbeacon_C::ExecuteUbergraph_EQ_Flashbeacon(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EQ_Flashbeacon.EQ_Flashbeacon_C.ExecuteUbergraph_EQ_Flashbeacon");

	AEQ_Flashbeacon_C_ExecuteUbergraph_EQ_Flashbeacon_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
