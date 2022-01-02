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

// Function BallCannonPawn.BallCannonPawn_C.UpdateBalls
struct ABallCannonPawn_C_UpdateBalls_Params
{
};

// Function BallCannonPawn.BallCannonPawn_C.InpActEvt_PrimaryAction_K2Node_InputActionEvent_2
struct ABallCannonPawn_C_InpActEvt_PrimaryAction_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BallCannonPawn.BallCannonPawn_C.InpActEvt_Interact_K2Node_InputActionEvent_1
struct ABallCannonPawn_C_InpActEvt_Interact_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BallCannonPawn.BallCannonPawn_C.ReceivePossessed
struct ABallCannonPawn_C_ReceivePossessed_Params
{
	class AController*                                 NewController;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BallCannonPawn.BallCannonPawn_C.ReceiveUnpossessed
struct ABallCannonPawn_C_ReceiveUnpossessed_Params
{
	class AController*                                 OldController;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BallCannonPawn.BallCannonPawn_C.Leave Cannon
struct ABallCannonPawn_C_Leave_Cannon_Params
{
};

// Function BallCannonPawn.BallCannonPawn_C.ReceiveTick
struct ABallCannonPawn_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BallCannonPawn.BallCannonPawn_C.Fire
struct ABallCannonPawn_C_Fire_Params
{
};

// Function BallCannonPawn.BallCannonPawn_C.ExecuteUbergraph_BallCannonPawn
struct ABallCannonPawn_C_ExecuteUbergraph_BallCannonPawn_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
