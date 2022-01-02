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

// Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.GetInteractViewLocation
struct APRE_PartyDoor_Long_InteractOpen_C_GetInteractViewLocation_Params
{
	bool                                               Valid;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     WorldLocation;                                             // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.GetInteractViewAngles
struct APRE_PartyDoor_Long_InteractOpen_C_GetInteractViewAngles_Params
{
	fnaf9_ECameraAngleFlags                            AnglesToCheck;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.GetHUDInstruction
struct APRE_PartyDoor_Long_InteractOpen_C_GetHUDInstruction_Params
{
	struct FText                                       Instruction;                                               // 0x0000(0x0018)  (Parm, OutParm)
};

// Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.InteractIgnoresTrace
struct APRE_PartyDoor_Long_InteractOpen_C_InteractIgnoresTrace_Params
{
	bool                                               IgnoreTrace;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.GetInteractibleType
struct APRE_PartyDoor_Long_InteractOpen_C_GetInteractibleType_Params
{
	TEnumAsByte<InteractibleType_EInteractibleType>    Type;                                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<InteractiblePressType_EInteractiblePressType> PressType;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.CanPlayerInteract
struct APRE_PartyDoor_Long_InteractOpen_C_CanPlayerInteract_Params
{
	bool                                               CanInteract;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	fnaf9_EConditionFailReason                         CantReason;                                                // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.UpdateUIOnTick
struct APRE_PartyDoor_Long_InteractOpen_C_UpdateUIOnTick_Params
{
	bool                                               Output;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.GetInstructionOverride
struct APRE_PartyDoor_Long_InteractOpen_C_GetInstructionOverride_Params
{
	struct FText                                       Instruction;                                               // 0x0000(0x0018)  (Parm, OutParm)
};

// Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.OnPlayerInteractCancel
struct APRE_PartyDoor_Long_InteractOpen_C_OnPlayerInteractCancel_Params
{
};

// Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.OnPlayerHoverEnter
struct APRE_PartyDoor_Long_InteractOpen_C_OnPlayerHoverEnter_Params
{
	class APawn*                                       PlayerPawn;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.OnPlayerHoverExit
struct APRE_PartyDoor_Long_InteractOpen_C_OnPlayerHoverExit_Params
{
	class APawn*                                       PlayerPawn;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.ReceiveBeginPlay
struct APRE_PartyDoor_Long_InteractOpen_C_ReceiveBeginPlay_Params
{
};

// Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.OnPlayerInteract
struct APRE_PartyDoor_Long_InteractOpen_C_OnPlayerInteract_Params
{
	class APawn*                                       PlayerPawn;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                           PlayerController;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.ExecuteUbergraph_PRE_PartyDoor_Long_InteractOpen
struct APRE_PartyDoor_Long_InteractOpen_C_ExecuteUbergraph_PRE_PartyDoor_Long_InteractOpen_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
