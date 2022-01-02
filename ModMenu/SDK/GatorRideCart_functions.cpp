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
//		Name   -> Function GatorRideCart.GatorRideCart_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AGatorRideCart_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GatorRideCart.GatorRideCart_C.ReceiveBeginPlay");

	AGatorRideCart_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function GatorRideCart.GatorRideCart_C.Loop
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AGatorRideCart_C::Loop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GatorRideCart.GatorRideCart_C.Loop");

	AGatorRideCart_C_Loop_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function GatorRideCart.GatorRideCart_C.PlayMovementLoop
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AGatorRideCart_C::PlayMovementLoop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GatorRideCart.GatorRideCart_C.PlayMovementLoop");

	AGatorRideCart_C_PlayMovementLoop_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function GatorRideCart.GatorRideCart_C.StopMovementLoop
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AGatorRideCart_C::StopMovementLoop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GatorRideCart.GatorRideCart_C.StopMovementLoop");

	AGatorRideCart_C_StopMovementLoop_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function GatorRideCart.GatorRideCart_C.BndEvt__MOD_FreddyCart_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void AGatorRideCart_C::BndEvt__MOD_FreddyCart_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GatorRideCart.GatorRideCart_C.BndEvt__MOD_FreddyCart_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature");

	AGatorRideCart_C_BndEvt__MOD_FreddyCart_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params params {};
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function GatorRideCart.GatorRideCart_C.ExecuteUbergraph_GatorRideCart
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGatorRideCart_C::ExecuteUbergraph_GatorRideCart(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GatorRideCart.GatorRideCart_C.ExecuteUbergraph_GatorRideCart");

	AGatorRideCart_C_ExecuteUbergraph_GatorRideCart_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
