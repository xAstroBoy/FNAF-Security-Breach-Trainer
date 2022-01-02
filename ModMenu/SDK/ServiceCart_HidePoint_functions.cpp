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
//		Name   -> Function ServiceCart_HidePoint.ServiceCart_HidePoint_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AServiceCart_HidePoint_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServiceCart_HidePoint.ServiceCart_HidePoint_C.ReceiveTick");

	AServiceCart_HidePoint_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function ServiceCart_HidePoint.ServiceCart_HidePoint_C.OnPlayerInteract
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AServiceCart_HidePoint_C::OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServiceCart_HidePoint.ServiceCart_HidePoint_C.OnPlayerInteract");

	AServiceCart_HidePoint_C_OnPlayerInteract_Params params {};
	params.PlayerPawn = PlayerPawn;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function ServiceCart_HidePoint.ServiceCart_HidePoint_C.OnPlayerLeave
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void AServiceCart_HidePoint_C::OnPlayerLeave()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServiceCart_HidePoint.ServiceCart_HidePoint_C.OnPlayerLeave");

	AServiceCart_HidePoint_C_OnPlayerLeave_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function ServiceCart_HidePoint.ServiceCart_HidePoint_C.ExecuteUbergraph_ServiceCart_HidePoint
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AServiceCart_HidePoint_C::ExecuteUbergraph_ServiceCart_HidePoint(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServiceCart_HidePoint.ServiceCart_HidePoint_C.ExecuteUbergraph_ServiceCart_HidePoint");

	AServiceCart_HidePoint_C_ExecuteUbergraph_ServiceCart_HidePoint_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
