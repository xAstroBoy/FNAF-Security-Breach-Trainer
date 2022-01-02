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

// Function ButtonBase.ButtonBase_C.GetInteractViewLocation
struct AButtonBase_C_GetInteractViewLocation_Params
{
	bool                                               Valid;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     WorldLocation;                                             // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ButtonBase.ButtonBase_C.GetInteractViewAngles
struct AButtonBase_C_GetInteractViewAngles_Params
{
	fnaf9_ECameraAngleFlags                            AnglesToCheck;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ButtonBase.ButtonBase_C.GetHUDInstruction
struct AButtonBase_C_GetHUDInstruction_Params
{
	struct FText                                       Instruction;                                               // 0x0000(0x0018)  (Parm, OutParm)
};

// Function ButtonBase.ButtonBase_C.InteractIgnoresTrace
struct AButtonBase_C_InteractIgnoresTrace_Params
{
	bool                                               IgnoreTrace;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ButtonBase.ButtonBase_C.GetInstructionOverride
struct AButtonBase_C_GetInstructionOverride_Params
{
	struct FText                                       Instruction;                                               // 0x0000(0x0018)  (Parm, OutParm)
};

// Function ButtonBase.ButtonBase_C.UpdateUIOnTick
struct AButtonBase_C_UpdateUIOnTick_Params
{
	bool                                               Output;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ButtonBase.ButtonBase_C.CanPlayerInteract
struct AButtonBase_C_CanPlayerInteract_Params
{
	bool                                               CanInteract;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	fnaf9_EConditionFailReason                         CantReason;                                                // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ButtonBase.ButtonBase_C.GetInteractibleType
struct AButtonBase_C_GetInteractibleType_Params
{
	TEnumAsByte<InteractibleType_EInteractibleType>    Type;                                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<InteractiblePressType_EInteractiblePressType> PressType;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ButtonBase.ButtonBase_C.HandleOneShotState
struct AButtonBase_C_HandleOneShotState_Params
{
};

// Function ButtonBase.ButtonBase_C.OnPlayerInteractCancel
struct AButtonBase_C_OnPlayerInteractCancel_Params
{
};

// Function ButtonBase.ButtonBase_C.OnPlayerHoverEnter
struct AButtonBase_C_OnPlayerHoverEnter_Params
{
	class APawn*                                       PlayerPawn;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ButtonBase.ButtonBase_C.OnPlayerHoverExit
struct AButtonBase_C_OnPlayerHoverExit_Params
{
	class APawn*                                       PlayerPawn;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ButtonBase.ButtonBase_C.OnPlayerInteract
struct AButtonBase_C_OnPlayerInteract_Params
{
	class APawn*                                       PlayerPawn;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                           PlayerController;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ButtonBase.ButtonBase_C.BndEvt__GameTypeCheck_K2Node_ComponentBoundEvent_0_OnGameTypeAllowEvent__DelegateSignature
struct AButtonBase_C_BndEvt__GameTypeCheck_K2Node_ComponentBoundEvent_0_OnGameTypeAllowEvent__DelegateSignature_Params
{
};

// Function ButtonBase.ButtonBase_C.SetActivated
struct AButtonBase_C_SetActivated_Params
{
};

// Function ButtonBase.ButtonBase_C.ExecuteUbergraph_ButtonBase
struct AButtonBase_C_ExecuteUbergraph_ButtonBase_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ButtonBase.ButtonBase_C.On Player Interact__DelegateSignature
struct AButtonBase_C_On_Player_Interact__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
