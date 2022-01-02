﻿#pragma once

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

// Function TurnstileBarPlayerInteract.TurnstileBarPlayerInteract_C.GetInteractViewLocation
struct ATurnstileBarPlayerInteract_C_GetInteractViewLocation_Params
{
	bool                                               Valid;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     WorldLocation;                                             // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TurnstileBarPlayerInteract.TurnstileBarPlayerInteract_C.GetInteractViewAngles
struct ATurnstileBarPlayerInteract_C_GetInteractViewAngles_Params
{
	fnaf9_ECameraAngleFlags                            AnglesToCheck;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TurnstileBarPlayerInteract.TurnstileBarPlayerInteract_C.GetHUDInstruction
struct ATurnstileBarPlayerInteract_C_GetHUDInstruction_Params
{
	struct FText                                       Instruction;                                               // 0x0000(0x0018)  (Parm, OutParm)
};

// Function TurnstileBarPlayerInteract.TurnstileBarPlayerInteract_C.InteractIgnoresTrace
struct ATurnstileBarPlayerInteract_C_InteractIgnoresTrace_Params
{
	bool                                               IgnoreTrace;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TurnstileBarPlayerInteract.TurnstileBarPlayerInteract_C.GetInstructionOverride
struct ATurnstileBarPlayerInteract_C_GetInstructionOverride_Params
{
	struct FText                                       Instruction;                                               // 0x0000(0x0018)  (Parm, OutParm)
};

// Function TurnstileBarPlayerInteract.TurnstileBarPlayerInteract_C.UpdateUIOnTick
struct ATurnstileBarPlayerInteract_C_UpdateUIOnTick_Params
{
	bool                                               Output;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TurnstileBarPlayerInteract.TurnstileBarPlayerInteract_C.GetInteractibleType
struct ATurnstileBarPlayerInteract_C_GetInteractibleType_Params
{
	TEnumAsByte<InteractibleType_EInteractibleType>    Type;                                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<InteractiblePressType_EInteractiblePressType> PressType;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TurnstileBarPlayerInteract.TurnstileBarPlayerInteract_C.CanPlayerInteract
struct ATurnstileBarPlayerInteract_C_CanPlayerInteract_Params
{
	bool                                               CanInteract;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	fnaf9_EConditionFailReason                         CantReason;                                                // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TurnstileBarPlayerInteract.TurnstileBarPlayerInteract_C.OnPlayerInteractCancel
struct ATurnstileBarPlayerInteract_C_OnPlayerInteractCancel_Params
{
};

// Function TurnstileBarPlayerInteract.TurnstileBarPlayerInteract_C.OnPlayerHoverEnter
struct ATurnstileBarPlayerInteract_C_OnPlayerHoverEnter_Params
{
	class APawn*                                       PlayerPawn;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TurnstileBarPlayerInteract.TurnstileBarPlayerInteract_C.OnPlayerHoverExit
struct ATurnstileBarPlayerInteract_C_OnPlayerHoverExit_Params
{
	class APawn*                                       PlayerPawn;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TurnstileBarPlayerInteract.TurnstileBarPlayerInteract_C.OnPlayerInteract
struct ATurnstileBarPlayerInteract_C_OnPlayerInteract_Params
{
	class APawn*                                       PlayerPawn;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                           PlayerController;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TurnstileBarPlayerInteract.TurnstileBarPlayerInteract_C.ExecuteUbergraph_TurnstileBarPlayerInteract
struct ATurnstileBarPlayerInteract_C_ExecuteUbergraph_TurnstileBarPlayerInteract_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
