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
	 * Function BasicButton.BasicButton_C.UserConstructionScript
	 */
	struct ABasicButton_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function BasicButton.BasicButton_C.ReceiveBeginPlay
	 */
	struct ABasicButton_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function BasicButton.BasicButton_C.ChangeColor
	 */
	struct ABasicButton_C_ChangeColor_Params
	{
	public:
		int                                                        ChangeColor;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BasicButton.BasicButton_C.OnPlayerInteract
	 */
	struct ABasicButton_C_OnPlayerInteract_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BasicButton.BasicButton_C.Set Can Use
	 */
	struct ABasicButton_C_Set_Can_Use_Params
	{
	public:
		bool                                                       CanUse;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BasicButton.BasicButton_C.ActivateObject
	 */
	struct ABasicButton_C_ActivateObject_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BasicButton.BasicButton_C.SetActivated
	 */
	struct ABasicButton_C_SetActivated_Params
	{
	};

	/**
	 * Function BasicButton.BasicButton_C.ExecuteUbergraph_BasicButton
	 */
	struct ABasicButton_C_ExecuteUbergraph_BasicButton_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
