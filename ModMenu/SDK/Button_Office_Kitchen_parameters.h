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

// Function Button_Office_Kitchen.Button_Office_Kitchen_C.UpdateUIOnTick
struct AButton_Office_Kitchen_C_UpdateUIOnTick_Params
{
	bool                                               Output;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Button_Office_Kitchen.Button_Office_Kitchen_C.GetInstructionOverride
struct AButton_Office_Kitchen_C_GetInstructionOverride_Params
{
	struct FText                                       Instruction;                                               // 0x0000(0x0018)  (Parm, OutParm)
};

// Function Button_Office_Kitchen.Button_Office_Kitchen_C.ButtonPressed
struct AButton_Office_Kitchen_C_ButtonPressed_Params
{
	class APawn*                                       PlayerPawn;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                           PlayerController;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Button_Office_Kitchen.Button_Office_Kitchen_C.ReceiveActorBeginOverlap
struct AButton_Office_Kitchen_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Button_Office_Kitchen.Button_Office_Kitchen_C.ReceiveTick
struct AButton_Office_Kitchen_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Button_Office_Kitchen.Button_Office_Kitchen_C.OnPlayerInteract
struct AButton_Office_Kitchen_C_OnPlayerInteract_Params
{
	class APawn*                                       PlayerPawn;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                           PlayerController;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Button_Office_Kitchen.Button_Office_Kitchen_C.ReceiveBeginPlay
struct AButton_Office_Kitchen_C_ReceiveBeginPlay_Params
{
};

// Function Button_Office_Kitchen.Button_Office_Kitchen_C.ExecuteUbergraph_Button_Office_Kitchen
struct AButton_Office_Kitchen_C_ExecuteUbergraph_Button_Office_Kitchen_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
