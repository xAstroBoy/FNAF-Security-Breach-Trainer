#pragma once

// Name: FNAF Security Breach, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BallCannonLimitedShots.BallCannonLimitedShots_C.TickLimitAngle
struct ABallCannonLimitedShots_C_TickLimitAngle_Params
{
};

// Function BallCannonLimitedShots.BallCannonLimitedShots_C.CanPlayerInteract
struct ABallCannonLimitedShots_C_CanPlayerInteract_Params
{
	bool                                               CanInteract;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	fnaf9_EConditionFailReason                         CantReason;                                                // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BallCannonLimitedShots.BallCannonLimitedShots_C.BreakGun
struct ABallCannonLimitedShots_C_BreakGun_Params
{
};

// Function BallCannonLimitedShots.BallCannonLimitedShots_C.CanFire
struct ABallCannonLimitedShots_C_CanFire_Params
{
	bool                                               CanFire;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BallCannonLimitedShots.BallCannonLimitedShots_C.UserConstructionScript
struct ABallCannonLimitedShots_C_UserConstructionScript_Params
{
};

// Function BallCannonLimitedShots.BallCannonLimitedShots_C.OnNotifyEnd_FD1FE29642B1371D91AF25B1E0FFD2B1
struct ABallCannonLimitedShots_C_OnNotifyEnd_FD1FE29642B1371D91AF25B1E0FFD2B1_Params
{
	struct FName                                       NotifyName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BallCannonLimitedShots.BallCannonLimitedShots_C.OnNotifyBegin_FD1FE29642B1371D91AF25B1E0FFD2B1
struct ABallCannonLimitedShots_C_OnNotifyBegin_FD1FE29642B1371D91AF25B1E0FFD2B1_Params
{
	struct FName                                       NotifyName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BallCannonLimitedShots.BallCannonLimitedShots_C.OnInterrupted_FD1FE29642B1371D91AF25B1E0FFD2B1
struct ABallCannonLimitedShots_C_OnInterrupted_FD1FE29642B1371D91AF25B1E0FFD2B1_Params
{
	struct FName                                       NotifyName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BallCannonLimitedShots.BallCannonLimitedShots_C.OnBlendOut_FD1FE29642B1371D91AF25B1E0FFD2B1
struct ABallCannonLimitedShots_C_OnBlendOut_FD1FE29642B1371D91AF25B1E0FFD2B1_Params
{
	struct FName                                       NotifyName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BallCannonLimitedShots.BallCannonLimitedShots_C.OnCompleted_FD1FE29642B1371D91AF25B1E0FFD2B1
struct ABallCannonLimitedShots_C_OnCompleted_FD1FE29642B1371D91AF25B1E0FFD2B1_Params
{
	struct FName                                       NotifyName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BallCannonLimitedShots.BallCannonLimitedShots_C.Shot Fired
struct ABallCannonLimitedShots_C_Shot_Fired_Params
{
};

// Function BallCannonLimitedShots.BallCannonLimitedShots_C.Refresh Balls
struct ABallCannonLimitedShots_C_Refresh_Balls_Params
{
};

// Function BallCannonLimitedShots.BallCannonLimitedShots_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABallCannonLimitedShots_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BallCannonLimitedShots.BallCannonLimitedShots_C.OnBreakGun
struct ABallCannonLimitedShots_C_OnBreakGun_Params
{
};

// Function BallCannonLimitedShots.BallCannonLimitedShots_C.On Target Hit
struct ABallCannonLimitedShots_C_On_Target_Hit_Params
{
};

// Function BallCannonLimitedShots.BallCannonLimitedShots_C.Fire
struct ABallCannonLimitedShots_C_Fire_Params
{
	bool                                               Perform_Cant_Fire_Logic;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BallCannonLimitedShots.BallCannonLimitedShots_C.ReceiveBeginPlay
struct ABallCannonLimitedShots_C_ReceiveBeginPlay_Params
{
};

// Function BallCannonLimitedShots.BallCannonLimitedShots_C.Sparks Delay Loop
struct ABallCannonLimitedShots_C_Sparks_Delay_Loop_Params
{
};

// Function BallCannonLimitedShots.BallCannonLimitedShots_C.ReceiveTick
struct ABallCannonLimitedShots_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BallCannonLimitedShots.BallCannonLimitedShots_C.Take Control
struct ABallCannonLimitedShots_C_Take_Control_Params
{
	class ABallCannonPawn_C*                           ControllingPawn;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BallCannonLimitedShots.BallCannonLimitedShots_C.OnExit
struct ABallCannonLimitedShots_C_OnExit_Params
{
};

// Function BallCannonLimitedShots.BallCannonLimitedShots_C.ExecuteUbergraph_BallCannonLimitedShots
struct ABallCannonLimitedShots_C_ExecuteUbergraph_BallCannonLimitedShots_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
