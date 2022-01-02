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

// Function SecurityOffice_WestArcade.SecurityOffice_WestArcade_C.CanDeactivate
struct ASecurityOffice_WestArcade_C_CanDeactivate_Params
{
	bool                                               CanDeactivate;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SecurityOffice_WestArcade.SecurityOffice_WestArcade_C.GetActivatableState
struct ASecurityOffice_WestArcade_C_GetActivatableState_Params
{
	class AActor*                                      Activator;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ActivatableState_EActivatableState>    CurrentState;                                              // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecurityOffice_WestArcade.SecurityOffice_WestArcade_C.CanActivate
struct ASecurityOffice_WestArcade_C_CanActivate_Params
{
	class AActor*                                      Activator;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanActivate;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	fnaf9_EConditionFailReason                         CantReason;                                                // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecurityOffice_WestArcade.SecurityOffice_WestArcade_C.OnEnd
struct ASecurityOffice_WestArcade_C_OnEnd_Params
{
	TEnumAsByte<E_EndMiniGameType_E_EndMiniGameType>   EndType;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecurityOffice_WestArcade.SecurityOffice_WestArcade_C.CheckIfPlayer
struct ASecurityOffice_WestArcade_C_CheckIfPlayer_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecurityOffice_WestArcade.SecurityOffice_WestArcade_C.LightInteractionsHelper
struct ASecurityOffice_WestArcade_C_LightInteractionsHelper_Params
{
	struct FString                                     Key;                                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function SecurityOffice_WestArcade.SecurityOffice_WestArcade_C.Can Spawn AI
struct ASecurityOffice_WestArcade_C_Can_Spawn_AI_Params
{
	bool                                               Can_Spawn;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SecurityOffice_WestArcade.SecurityOffice_WestArcade_C.Button Logic
struct ASecurityOffice_WestArcade_C_Button_Logic_Params
{
	class AButtonBase_C*                               Current_Button;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecurityOffice_WestArcade.SecurityOffice_WestArcade_C.On Start
struct ASecurityOffice_WestArcade_C_On_Start_Params
{
};

// Function SecurityOffice_WestArcade.SecurityOffice_WestArcade_C.UpdateMission
struct ASecurityOffice_WestArcade_C_UpdateMission_Params
{
	int                                                InfoState;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecurityOffice_WestArcade.SecurityOffice_WestArcade_C.OnActivatorDone
struct ASecurityOffice_WestArcade_C_OnActivatorDone_Params
{
	class AActor*                                      Activator;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecurityOffice_WestArcade.SecurityOffice_WestArcade_C.SetActivated
struct ASecurityOffice_WestArcade_C_SetActivated_Params
{
};

// Function SecurityOffice_WestArcade.SecurityOffice_WestArcade_C.DeactivateObject
struct ASecurityOffice_WestArcade_C_DeactivateObject_Params
{
	class AActor*                                      Deactivator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecurityOffice_WestArcade.SecurityOffice_WestArcade_C.SetDeactivated
struct ASecurityOffice_WestArcade_C_SetDeactivated_Params
{
};

// Function SecurityOffice_WestArcade.SecurityOffice_WestArcade_C.ActivateObject
struct ASecurityOffice_WestArcade_C_ActivateObject_Params
{
	class AActor*                                      Activator;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecurityOffice_WestArcade.SecurityOffice_WestArcade_C.Button 1 Activated
struct ASecurityOffice_WestArcade_C_Button_1_Activated_Params
{
};

// Function SecurityOffice_WestArcade.SecurityOffice_WestArcade_C.Button 2 Activated
struct ASecurityOffice_WestArcade_C_Button_2_Activated_Params
{
};

// Function SecurityOffice_WestArcade.SecurityOffice_WestArcade_C.Other Button Activated
struct ASecurityOffice_WestArcade_C_Other_Button_Activated_Params
{
	class AButtonBase_C*                               Sender;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecurityOffice_WestArcade.SecurityOffice_WestArcade_C.ReceiveBeginPlay
struct ASecurityOffice_WestArcade_C_ReceiveBeginPlay_Params
{
};

// Function SecurityOffice_WestArcade.SecurityOffice_WestArcade_C.On End Chase Sequence
struct ASecurityOffice_WestArcade_C_On_End_Chase_Sequence_Params
{
};

// Function SecurityOffice_WestArcade.SecurityOffice_WestArcade_C.BndEvt__GameBounds_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ASecurityOffice_WestArcade_C_BndEvt__GameBounds_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function SecurityOffice_WestArcade.SecurityOffice_WestArcade_C.UpdateMusic
struct ASecurityOffice_WestArcade_C_UpdateMusic_Params
{
};

// Function SecurityOffice_WestArcade.SecurityOffice_WestArcade_C.Monty Post Game Spawn_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct ASecurityOffice_WestArcade_C_Monty_Post_Game_Spawn_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function SecurityOffice_WestArcade.SecurityOffice_WestArcade_C.ExecuteUbergraph_SecurityOffice_WestArcade
struct ASecurityOffice_WestArcade_C_ExecuteUbergraph_SecurityOffice_WestArcade_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
