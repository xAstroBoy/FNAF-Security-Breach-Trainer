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
//		Name   -> Function PlayerTeleportHandler.PlayerTeleportHandler_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void APlayerTeleportHandler_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerTeleportHandler.PlayerTeleportHandler_C.ReceiveBeginPlay");

	APlayerTeleportHandler_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerTeleportHandler.PlayerTeleportHandler_C.On Destination Loaded
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void APlayerTeleportHandler_C::On_Destination_Loaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerTeleportHandler.PlayerTeleportHandler_C.On Destination Loaded");

	APlayerTeleportHandler_C_On_Destination_Loaded_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerTeleportHandler.PlayerTeleportHandler_C.ExecuteUbergraph_PlayerTeleportHandler
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APlayerTeleportHandler_C::ExecuteUbergraph_PlayerTeleportHandler(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerTeleportHandler.PlayerTeleportHandler_C.ExecuteUbergraph_PlayerTeleportHandler");

	APlayerTeleportHandler_C_ExecuteUbergraph_PlayerTeleportHandler_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerTeleportHandler.PlayerTeleportHandler_C.OnTeleportFinished__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void APlayerTeleportHandler_C::OnTeleportFinished__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerTeleportHandler.PlayerTeleportHandler_C.OnTeleportFinished__DelegateSignature");

	APlayerTeleportHandler_C_OnTeleportFinished__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
