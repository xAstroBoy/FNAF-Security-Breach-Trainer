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

// Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.GetInteractViewLocation
struct APowerStationPlayerInteractible_C_GetInteractViewLocation_Params
{
	bool                                               Valid;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     WorldLocation;                                             // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.GetInteractViewAngles
struct APowerStationPlayerInteractible_C_GetInteractViewAngles_Params
{
	fnaf9_ECameraAngleFlags                            AnglesToCheck;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.GetHUDInstruction
struct APowerStationPlayerInteractible_C_GetHUDInstruction_Params
{
	struct FText                                       Instruction;                                               // 0x0000(0x0018)  (Parm, OutParm)
};

// Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.InteractIgnoresTrace
struct APowerStationPlayerInteractible_C_InteractIgnoresTrace_Params
{
	bool                                               IgnoreTrace;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.GetInstructionOverride
struct APowerStationPlayerInteractible_C_GetInstructionOverride_Params
{
	struct FText                                       Instruction;                                               // 0x0000(0x0018)  (Parm, OutParm)
};

// Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.UpdateUIOnTick
struct APowerStationPlayerInteractible_C_UpdateUIOnTick_Params
{
	bool                                               Output;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.GetInteractibleType
struct APowerStationPlayerInteractible_C_GetInteractibleType_Params
{
	TEnumAsByte<InteractibleType_EInteractibleType>    Type;                                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<InteractiblePressType_EInteractiblePressType> PressType;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.CanPlayerInteract
struct APowerStationPlayerInteractible_C_CanPlayerInteract_Params
{
	bool                                               CanInteract;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	fnaf9_EConditionFailReason                         CantReason;                                                // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.OnPlayerInteractCancel
struct APowerStationPlayerInteractible_C_OnPlayerInteractCancel_Params
{
};

// Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.OnPlayerHoverEnter
struct APowerStationPlayerInteractible_C_OnPlayerHoverEnter_Params
{
	class APawn*                                       PlayerPawn;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.OnPlayerHoverExit
struct APowerStationPlayerInteractible_C_OnPlayerHoverExit_Params
{
	class APawn*                                       PlayerPawn;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.OnPlayerInteract
struct APowerStationPlayerInteractible_C_OnPlayerInteract_Params
{
	class APawn*                                       PlayerPawn;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                           PlayerController;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.Setup From Load
struct APowerStationPlayerInteractible_C_Setup_From_Load_Params
{
};

// Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.On Power Station Event Finished
struct APowerStationPlayerInteractible_C_On_Power_Station_Event_Finished_Params
{
};

// Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.StartHour5VO
struct APowerStationPlayerInteractible_C_StartHour5VO_Params
{
};

// Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.StartHour6VO
struct APowerStationPlayerInteractible_C_StartHour6VO_Params
{
};

// Function PowerStationPlayerInteractible.PowerStationPlayerInteractible_C.ExecuteUbergraph_PowerStationPlayerInteractible
struct APowerStationPlayerInteractible_C_ExecuteUbergraph_PowerStationPlayerInteractible_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
