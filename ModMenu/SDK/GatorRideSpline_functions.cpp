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
//		Name   -> Function GatorRideSpline.GatorRideSpline_C.SetCartMovementSpeed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Speed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGatorRideSpline_C::SetCartMovementSpeed(float Speed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GatorRideSpline.GatorRideSpline_C.SetCartMovementSpeed");

	AGatorRideSpline_C_SetCartMovementSpeed_Params params {};
	params.Speed = Speed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function GatorRideSpline.GatorRideSpline_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void AGatorRideSpline_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GatorRideSpline.GatorRideSpline_C.UserConstructionScript");

	AGatorRideSpline_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function GatorRideSpline.GatorRideSpline_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AGatorRideSpline_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GatorRideSpline.GatorRideSpline_C.ReceiveBeginPlay");

	AGatorRideSpline_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function GatorRideSpline.GatorRideSpline_C.StartMovingCarts
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AGatorRideSpline_C::StartMovingCarts()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GatorRideSpline.GatorRideSpline_C.StartMovingCarts");

	AGatorRideSpline_C_StartMovingCarts_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function GatorRideSpline.GatorRideSpline_C.SetupCarts
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AGatorRideSpline_C::SetupCarts()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GatorRideSpline.GatorRideSpline_C.SetupCarts");

	AGatorRideSpline_C_SetupCarts_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function GatorRideSpline.GatorRideSpline_C.ExecuteUbergraph_GatorRideSpline
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGatorRideSpline_C::ExecuteUbergraph_GatorRideSpline(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GatorRideSpline.GatorRideSpline_C.ExecuteUbergraph_GatorRideSpline");

	AGatorRideSpline_C_ExecuteUbergraph_GatorRideSpline_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
