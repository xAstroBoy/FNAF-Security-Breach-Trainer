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

// Function ElevatorButton.ElevatorButton_C.CanPlayerInteract
struct AElevatorButton_C_CanPlayerInteract_Params
{
	bool                                               CanInteract;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	fnaf9_EConditionFailReason                         CantReason;                                                // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ElevatorButton.ElevatorButton_C.UserConstructionScript
struct AElevatorButton_C_UserConstructionScript_Params
{
};

// Function ElevatorButton.ElevatorButton_C.ReceiveBeginPlay
struct AElevatorButton_C_ReceiveBeginPlay_Params
{
};

// Function ElevatorButton.ElevatorButton_C.ChangeColor
struct AElevatorButton_C_ChangeColor_Params
{
	int                                                ChangeColor;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ElevatorButton.ElevatorButton_C.OnPlayerInteract
struct AElevatorButton_C_OnPlayerInteract_Params
{
	class APawn*                                       PlayerPawn;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                           PlayerController;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ElevatorButton.ElevatorButton_C.Set Can Use
struct AElevatorButton_C_Set_Can_Use_Params
{
	bool                                               CanUse;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ElevatorButton.ElevatorButton_C.ExecuteUbergraph_ElevatorButton
struct AElevatorButton_C_ExecuteUbergraph_ElevatorButton_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
