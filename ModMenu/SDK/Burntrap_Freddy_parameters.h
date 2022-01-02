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

// Function Burntrap_Freddy.Burntrap_Freddy_C.CanPlayerInteract
struct ABurntrap_Freddy_C_CanPlayerInteract_Params
{
	bool                                               CanInteract;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	fnaf9_EConditionFailReason                         CantReason;                                                // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Burntrap_Freddy.Burntrap_Freddy_C.IsFreddyHacked
struct ABurntrap_Freddy_C_IsFreddyHacked_Params
{
	bool                                               NewParam;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Burntrap_Freddy.Burntrap_Freddy_C.ReceiveBeginPlay
struct ABurntrap_Freddy_C_ReceiveBeginPlay_Params
{
};

// Function Burntrap_Freddy.Burntrap_Freddy_C.ReceiveTick
struct ABurntrap_Freddy_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Burntrap_Freddy.Burntrap_Freddy_C.HackFreddy
struct ABurntrap_Freddy_C_HackFreddy_Params
{
};

// Function Burntrap_Freddy.Burntrap_Freddy_C.UnhackFreddy
struct ABurntrap_Freddy_C_UnhackFreddy_Params
{
};

// Function Burntrap_Freddy.Burntrap_Freddy_C.BndEvt__PlayerCaptureTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABurntrap_Freddy_C_BndEvt__PlayerCaptureTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function Burntrap_Freddy.Burntrap_Freddy_C.On Capture Overlap
struct ABurntrap_Freddy_C_On_Capture_Overlap_Params
{
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Burntrap_Freddy.Burntrap_Freddy_C.Jump Scare
struct ABurntrap_Freddy_C_Jump_Scare_Params
{
	class AGregory_C*                                  Gregory;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Burntrap_Freddy.Burntrap_Freddy_C.Hide Gregory
struct ABurntrap_Freddy_C_Hide_Gregory_Params
{
	class AGregory_C*                                  Gregory;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                           PlayerController;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseAnim;                                                   // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               PlaySound;                                                 // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Burntrap_Freddy.Burntrap_Freddy_C.Eject Gregory
struct ABurntrap_Freddy_C_Eject_Gregory_Params
{
	bool                                               BypassAnim;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Burntrap_Freddy.Burntrap_Freddy_C.ResetChargeTimer
struct ABurntrap_Freddy_C_ResetChargeTimer_Params
{
};

// Function Burntrap_Freddy.Burntrap_Freddy_C.FirstHack
struct ABurntrap_Freddy_C_FirstHack_Params
{
};

// Function Burntrap_Freddy.Burntrap_Freddy_C.Use Chica Beak
struct ABurntrap_Freddy_C_Use_Chica_Beak_Params
{
};

// Function Burntrap_Freddy.Burntrap_Freddy_C.ExecuteUbergraph_Burntrap_Freddy
struct ABurntrap_Freddy_C_ExecuteUbergraph_Burntrap_Freddy_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
