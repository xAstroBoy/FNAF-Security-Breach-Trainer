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
//		Name   -> Function BallCannonLimitedShots.BallCannonLimitedShots_C.TickLimitAngle
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABallCannonLimitedShots_C::TickLimitAngle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BallCannonLimitedShots.BallCannonLimitedShots_C.TickLimitAngle");

	ABallCannonLimitedShots_C_TickLimitAngle_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BallCannonLimitedShots.BallCannonLimitedShots_C.CanPlayerInteract
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               CanInteract                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		fnaf9_EConditionFailReason                         CantReason                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABallCannonLimitedShots_C::CanPlayerInteract(bool* CanInteract, fnaf9_EConditionFailReason* CantReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BallCannonLimitedShots.BallCannonLimitedShots_C.CanPlayerInteract");

	ABallCannonLimitedShots_C_CanPlayerInteract_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanInteract != nullptr)
		*CanInteract = params.CanInteract;
	if (CantReason != nullptr)
		*CantReason = params.CantReason;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BallCannonLimitedShots.BallCannonLimitedShots_C.BreakGun
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABallCannonLimitedShots_C::BreakGun()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BallCannonLimitedShots.BallCannonLimitedShots_C.BreakGun");

	ABallCannonLimitedShots_C_BreakGun_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BallCannonLimitedShots.BallCannonLimitedShots_C.CanFire
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               CanFire                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABallCannonLimitedShots_C::CanFire(bool* CanFire)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BallCannonLimitedShots.BallCannonLimitedShots_C.CanFire");

	ABallCannonLimitedShots_C_CanFire_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanFire != nullptr)
		*CanFire = params.CanFire;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BallCannonLimitedShots.BallCannonLimitedShots_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABallCannonLimitedShots_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BallCannonLimitedShots.BallCannonLimitedShots_C.UserConstructionScript");

	ABallCannonLimitedShots_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BallCannonLimitedShots.BallCannonLimitedShots_C.OnNotifyEnd_FD1FE29642B1371D91AF25B1E0FFD2B1
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABallCannonLimitedShots_C::OnNotifyEnd_FD1FE29642B1371D91AF25B1E0FFD2B1(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BallCannonLimitedShots.BallCannonLimitedShots_C.OnNotifyEnd_FD1FE29642B1371D91AF25B1E0FFD2B1");

	ABallCannonLimitedShots_C_OnNotifyEnd_FD1FE29642B1371D91AF25B1E0FFD2B1_Params params {};
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BallCannonLimitedShots.BallCannonLimitedShots_C.OnNotifyBegin_FD1FE29642B1371D91AF25B1E0FFD2B1
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABallCannonLimitedShots_C::OnNotifyBegin_FD1FE29642B1371D91AF25B1E0FFD2B1(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BallCannonLimitedShots.BallCannonLimitedShots_C.OnNotifyBegin_FD1FE29642B1371D91AF25B1E0FFD2B1");

	ABallCannonLimitedShots_C_OnNotifyBegin_FD1FE29642B1371D91AF25B1E0FFD2B1_Params params {};
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BallCannonLimitedShots.BallCannonLimitedShots_C.OnInterrupted_FD1FE29642B1371D91AF25B1E0FFD2B1
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABallCannonLimitedShots_C::OnInterrupted_FD1FE29642B1371D91AF25B1E0FFD2B1(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BallCannonLimitedShots.BallCannonLimitedShots_C.OnInterrupted_FD1FE29642B1371D91AF25B1E0FFD2B1");

	ABallCannonLimitedShots_C_OnInterrupted_FD1FE29642B1371D91AF25B1E0FFD2B1_Params params {};
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BallCannonLimitedShots.BallCannonLimitedShots_C.OnBlendOut_FD1FE29642B1371D91AF25B1E0FFD2B1
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABallCannonLimitedShots_C::OnBlendOut_FD1FE29642B1371D91AF25B1E0FFD2B1(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BallCannonLimitedShots.BallCannonLimitedShots_C.OnBlendOut_FD1FE29642B1371D91AF25B1E0FFD2B1");

	ABallCannonLimitedShots_C_OnBlendOut_FD1FE29642B1371D91AF25B1E0FFD2B1_Params params {};
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BallCannonLimitedShots.BallCannonLimitedShots_C.OnCompleted_FD1FE29642B1371D91AF25B1E0FFD2B1
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABallCannonLimitedShots_C::OnCompleted_FD1FE29642B1371D91AF25B1E0FFD2B1(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BallCannonLimitedShots.BallCannonLimitedShots_C.OnCompleted_FD1FE29642B1371D91AF25B1E0FFD2B1");

	ABallCannonLimitedShots_C_OnCompleted_FD1FE29642B1371D91AF25B1E0FFD2B1_Params params {};
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BallCannonLimitedShots.BallCannonLimitedShots_C.Shot Fired
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABallCannonLimitedShots_C::Shot_Fired()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BallCannonLimitedShots.BallCannonLimitedShots_C.Shot Fired");

	ABallCannonLimitedShots_C_Shot_Fired_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BallCannonLimitedShots.BallCannonLimitedShots_C.Refresh Balls
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABallCannonLimitedShots_C::Refresh_Balls()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BallCannonLimitedShots.BallCannonLimitedShots_C.Refresh Balls");

	ABallCannonLimitedShots_C_Refresh_Balls_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BallCannonLimitedShots.BallCannonLimitedShots_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABallCannonLimitedShots_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BallCannonLimitedShots.BallCannonLimitedShots_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABallCannonLimitedShots_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BallCannonLimitedShots.BallCannonLimitedShots_C.OnBreakGun
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABallCannonLimitedShots_C::OnBreakGun()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BallCannonLimitedShots.BallCannonLimitedShots_C.OnBreakGun");

	ABallCannonLimitedShots_C_OnBreakGun_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BallCannonLimitedShots.BallCannonLimitedShots_C.On Target Hit
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABallCannonLimitedShots_C::On_Target_Hit()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BallCannonLimitedShots.BallCannonLimitedShots_C.On Target Hit");

	ABallCannonLimitedShots_C_On_Target_Hit_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BallCannonLimitedShots.BallCannonLimitedShots_C.Fire
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Perform_Cant_Fire_Logic                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABallCannonLimitedShots_C::Fire(bool Perform_Cant_Fire_Logic)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BallCannonLimitedShots.BallCannonLimitedShots_C.Fire");

	ABallCannonLimitedShots_C_Fire_Params params {};
	params.Perform_Cant_Fire_Logic = Perform_Cant_Fire_Logic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BallCannonLimitedShots.BallCannonLimitedShots_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABallCannonLimitedShots_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BallCannonLimitedShots.BallCannonLimitedShots_C.ReceiveBeginPlay");

	ABallCannonLimitedShots_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BallCannonLimitedShots.BallCannonLimitedShots_C.Sparks Delay Loop
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABallCannonLimitedShots_C::Sparks_Delay_Loop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BallCannonLimitedShots.BallCannonLimitedShots_C.Sparks Delay Loop");

	ABallCannonLimitedShots_C_Sparks_Delay_Loop_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BallCannonLimitedShots.BallCannonLimitedShots_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABallCannonLimitedShots_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BallCannonLimitedShots.BallCannonLimitedShots_C.ReceiveTick");

	ABallCannonLimitedShots_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BallCannonLimitedShots.BallCannonLimitedShots_C.Take Control
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ABallCannonPawn_C*                           ControllingPawn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABallCannonLimitedShots_C::Take_Control(class ABallCannonPawn_C* ControllingPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BallCannonLimitedShots.BallCannonLimitedShots_C.Take Control");

	ABallCannonLimitedShots_C_Take_Control_Params params {};
	params.ControllingPawn = ControllingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BallCannonLimitedShots.BallCannonLimitedShots_C.OnExit
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABallCannonLimitedShots_C::OnExit()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BallCannonLimitedShots.BallCannonLimitedShots_C.OnExit");

	ABallCannonLimitedShots_C_OnExit_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BallCannonLimitedShots.BallCannonLimitedShots_C.ExecuteUbergraph_BallCannonLimitedShots
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABallCannonLimitedShots_C::ExecuteUbergraph_BallCannonLimitedShots(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BallCannonLimitedShots.BallCannonLimitedShots_C.ExecuteUbergraph_BallCannonLimitedShots");

	ABallCannonLimitedShots_C_ExecuteUbergraph_BallCannonLimitedShots_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
