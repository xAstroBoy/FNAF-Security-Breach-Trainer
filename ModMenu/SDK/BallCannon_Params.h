#pragma once

/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BallCannon.BallCannon_C.GetInteractViewLocation
	 */
	struct ABallCannon_C_GetInteractViewLocation_Params
	{
	public:
		bool                                                       Valid;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             WorldLocation;                                           // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BallCannon.BallCannon_C.GetInteractViewAngles
	 */
	struct ABallCannon_C_GetInteractViewAngles_Params
	{
	public:
		fnaf9_ECameraAngleFlags                                    AnglesToCheck;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BallCannon.BallCannon_C.GetHUDInstruction
	 */
	struct ABallCannon_C_GetHUDInstruction_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)

	};

	/**
	 * Function BallCannon.BallCannon_C.InteractIgnoresTrace
	 */
	struct ABallCannon_C_InteractIgnoresTrace_Params
	{
	public:
		bool                                                       IgnoreTrace;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BallCannon.BallCannon_C.GetInstructionOverride
	 */
	struct ABallCannon_C_GetInstructionOverride_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)

	};

	/**
	 * Function BallCannon.BallCannon_C.UpdateUIOnTick
	 */
	struct ABallCannon_C_UpdateUIOnTick_Params
	{
	public:
		bool                                                       Output;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BallCannon.BallCannon_C.GetInteractibleType
	 */
	struct ABallCannon_C_GetInteractibleType_Params
	{
	public:
		TEnumAsByte<InteractibleType_EInteractibleType>            Type;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TEnumAsByte<InteractiblePressType_EInteractiblePressType>  PressType;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BallCannon.BallCannon_C.CanPlayerInteract
	 */
	struct ABallCannon_C_CanPlayerInteract_Params
	{
	public:
		bool                                                       CanInteract;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		fnaf9_EConditionFailReason                                 CantReason;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BallCannon.BallCannon_C.CanFire
	 */
	struct ABallCannon_C_CanFire_Params
	{
	public:
		bool                                                       CanFire;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BallCannon.BallCannon_C.InpActEvt_PrimaryAction_K2Node_InputActionEvent_1
	 */
	struct ABallCannon_C_InpActEvt_PrimaryAction_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function BallCannon.BallCannon_C.OnPlayerInteractCancel
	 */
	struct ABallCannon_C_OnPlayerInteractCancel_Params
	{
	};

	/**
	 * Function BallCannon.BallCannon_C.OnPlayerHoverEnter
	 */
	struct ABallCannon_C_OnPlayerHoverEnter_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BallCannon.BallCannon_C.OnPlayerHoverExit
	 */
	struct ABallCannon_C_OnPlayerHoverExit_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BallCannon.BallCannon_C.OnPlayerInteract
	 */
	struct ABallCannon_C_OnPlayerInteract_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BallCannon.BallCannon_C.Fire
	 */
	struct ABallCannon_C_Fire_Params
	{
	public:
		bool                                                       Perform_Cant_Fire_Logic;                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BallCannon.BallCannon_C.Take Control
	 */
	struct ABallCannon_C_Take_Control_Params
	{
	public:
		class ABallCannonPawn_C*                                   ControllingPawn;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BallCannon.BallCannon_C.Shot Fired
	 */
	struct ABallCannon_C_Shot_Fired_Params
	{
	};

	/**
	 * Function BallCannon.BallCannon_C.Shot Failed
	 */
	struct ABallCannon_C_Shot_Failed_Params
	{
	};

	/**
	 * Function BallCannon.BallCannon_C.ReceivePossessed
	 */
	struct ABallCannon_C_ReceivePossessed_Params
	{
	public:
		class AController*                                         NewController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BallCannon.BallCannon_C.ReceiveUnpossessed
	 */
	struct ABallCannon_C_ReceiveUnpossessed_Params
	{
	public:
		class AController*                                         OldController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BallCannon.BallCannon_C.OnExit
	 */
	struct ABallCannon_C_OnExit_Params
	{
	};

	/**
	 * Function BallCannon.BallCannon_C.On Target Hit
	 */
	struct ABallCannon_C_On_Target_Hit_Params
	{
	};

	/**
	 * Function BallCannon.BallCannon_C.ExecuteUbergraph_BallCannon
	 */
	struct ABallCannon_C_ExecuteUbergraph_BallCannon_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BallCannon.BallCannon_C.OnShotFired__DelegateSignature
	 */
	struct ABallCannon_C_OnShotFired__DelegateSignature_Params
	{
	public:
		class ABallCannon_C*                                       BallCannon;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
