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
//		Name   -> Function BasicButton.BasicButton_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABasicButton_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BasicButton.BasicButton_C.UserConstructionScript");

	ABasicButton_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BasicButton.BasicButton_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABasicButton_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BasicButton.BasicButton_C.ReceiveBeginPlay");

	ABasicButton_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BasicButton.BasicButton_C.ChangeColor
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ChangeColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABasicButton_C::ChangeColor(int ChangeColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BasicButton.BasicButton_C.ChangeColor");

	ABasicButton_C_ChangeColor_Params params {};
	params.ChangeColor = ChangeColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BasicButton.BasicButton_C.OnPlayerInteract
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABasicButton_C::OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BasicButton.BasicButton_C.OnPlayerInteract");

	ABasicButton_C_OnPlayerInteract_Params params {};
	params.PlayerPawn = PlayerPawn;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BasicButton.BasicButton_C.Set Can Use
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               CanUse                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABasicButton_C::Set_Can_Use(bool CanUse)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BasicButton.BasicButton_C.Set Can Use");

	ABasicButton_C_Set_Can_Use_Params params {};
	params.CanUse = CanUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BasicButton.BasicButton_C.ActivateObject
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABasicButton_C::ActivateObject(class AActor* Activator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BasicButton.BasicButton_C.ActivateObject");

	ABasicButton_C_ActivateObject_Params params {};
	params.Activator = Activator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BasicButton.BasicButton_C.SetActivated
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABasicButton_C::SetActivated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BasicButton.BasicButton_C.SetActivated");

	ABasicButton_C_SetActivated_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BasicButton.BasicButton_C.ExecuteUbergraph_BasicButton
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABasicButton_C::ExecuteUbergraph_BasicButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BasicButton.BasicButton_C.ExecuteUbergraph_BasicButton");

	ABasicButton_C_ExecuteUbergraph_BasicButton_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
