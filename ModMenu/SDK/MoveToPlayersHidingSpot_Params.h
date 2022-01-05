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
	 * Function MoveToPlayersHidingSpot.MoveToPlayersHidingSpot_C.FindClosestHideLocation
	 */
	struct UMoveToPlayersHidingSpot_C_FindClosestHideLocation_Params
	{
	public:
		class UObject*                                             HideActor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               Pawn;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       FoundLocation;                                           // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Location;                                                // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MoveToPlayersHidingSpot.MoveToPlayersHidingSpot_C.OnMoveFinished_0E1FC4584AE08718647C04A951D545C1
	 */
	struct UMoveToPlayersHidingSpot_C_OnMoveFinished_0E1FC4584AE08718647C04A951D545C1_Params
	{
	public:
		TEnumAsByte<AIModule_EPathFollowingResult>                 Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AAIController*                                       AIController;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MoveToPlayersHidingSpot.MoveToPlayersHidingSpot_C.OnRequestFailed_0E1FC4584AE08718647C04A951D545C1
	 */
	struct UMoveToPlayersHidingSpot_C_OnRequestFailed_0E1FC4584AE08718647C04A951D545C1_Params
	{
	};

	/**
	 * Function MoveToPlayersHidingSpot.MoveToPlayersHidingSpot_C.ReceiveExecuteAI
	 */
	struct UMoveToPlayersHidingSpot_C_ReceiveExecuteAI_Params
	{
	public:
		class AAIController*                                       OwnerController;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               ControlledPawn;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MoveToPlayersHidingSpot.MoveToPlayersHidingSpot_C.ReceiveTickAI
	 */
	struct UMoveToPlayersHidingSpot_C_ReceiveTickAI_Params
	{
	public:
		class AAIController*                                       OwnerController;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               ControlledPawn;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DeltaSeconds;                                            // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MoveToPlayersHidingSpot.MoveToPlayersHidingSpot_C.ExecuteUbergraph_MoveToPlayersHidingSpot
	 */
	struct UMoveToPlayersHidingSpot_C_ExecuteUbergraph_MoveToPlayersHidingSpot_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
