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
//		Name   -> Function GregoryOverlay.GregoryOverlay_C.LoadHud
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UGregoryOverlay_C::LoadHud()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GregoryOverlay.GregoryOverlay_C.LoadHud");

	UGregoryOverlay_C_LoadHud_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function GregoryOverlay.GregoryOverlay_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UGregoryOverlay_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GregoryOverlay.GregoryOverlay_C.Construct");

	UGregoryOverlay_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function GregoryOverlay.GregoryOverlay_C.ChangeBackgroundImage
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UImage*                                      New_Image                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGregoryOverlay_C::ChangeBackgroundImage(class UImage* New_Image)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GregoryOverlay.GregoryOverlay_C.ChangeBackgroundImage");

	UGregoryOverlay_C_ChangeBackgroundImage_Params params {};
	params.New_Image = New_Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function GregoryOverlay.GregoryOverlay_C.DestroyThisHUD
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGregoryOverlay_C::DestroyThisHUD(class AActor* DestroyedActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GregoryOverlay.GregoryOverlay_C.DestroyThisHUD");

	UGregoryOverlay_C_DestroyThisHUD_Params params {};
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function GregoryOverlay.GregoryOverlay_C.ToggleReticle
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               HoldingFazerBlaster                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGregoryOverlay_C::ToggleReticle(bool HoldingFazerBlaster)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GregoryOverlay.GregoryOverlay_C.ToggleReticle");

	UGregoryOverlay_C_ToggleReticle_Params params {};
	params.HoldingFazerBlaster = HoldingFazerBlaster;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function GregoryOverlay.GregoryOverlay_C.ShowHeldItemWidget
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UGregoryOverlay_C::ShowHeldItemWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GregoryOverlay.GregoryOverlay_C.ShowHeldItemWidget");

	UGregoryOverlay_C_ShowHeldItemWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function GregoryOverlay.GregoryOverlay_C.ExecuteUbergraph_GregoryOverlay
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGregoryOverlay_C::ExecuteUbergraph_GregoryOverlay(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GregoryOverlay.GregoryOverlay_C.ExecuteUbergraph_GregoryOverlay");

	UGregoryOverlay_C_ExecuteUbergraph_GregoryOverlay_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
