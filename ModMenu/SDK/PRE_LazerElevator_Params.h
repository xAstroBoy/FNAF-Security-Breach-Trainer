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
	 * Function PRE_LazerElevator.PRE_LazerElevator_C.Elevator Light Sequence Worker
	 */
	struct APRE_LazerElevator_C_Elevator_Light_Sequence_Worker_Params
	{
	};

	/**
	 * Function PRE_LazerElevator.PRE_LazerElevator_C.UserConstructionScript
	 */
	struct APRE_LazerElevator_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function PRE_LazerElevator.PRE_LazerElevator_C.LaserTag Elevator Position__FinishedFunc
	 */
	struct APRE_LazerElevator_C_LaserTag_Elevator_Position__FinishedFunc_Params
	{
	};

	/**
	 * Function PRE_LazerElevator.PRE_LazerElevator_C.LaserTag Elevator Position__UpdateFunc
	 */
	struct APRE_LazerElevator_C_LaserTag_Elevator_Position__UpdateFunc_Params
	{
	};

	/**
	 * Function PRE_LazerElevator.PRE_LazerElevator_C.Intensity__FinishedFunc
	 */
	struct APRE_LazerElevator_C_Intensity__FinishedFunc_Params
	{
	};

	/**
	 * Function PRE_LazerElevator.PRE_LazerElevator_C.Intensity__UpdateFunc
	 */
	struct APRE_LazerElevator_C_Intensity__UpdateFunc_Params
	{
	};

	/**
	 * Function PRE_LazerElevator.PRE_LazerElevator_C.OnCheckpointSave
	 */
	struct APRE_LazerElevator_C_OnCheckpointSave_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PRE_LazerElevator.PRE_LazerElevator_C.OnGameDataLoaded
	 */
	struct APRE_LazerElevator_C_OnGameDataLoaded_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PRE_LazerElevator.PRE_LazerElevator_C.OnStoreGameData
	 */
	struct APRE_LazerElevator_C_OnStoreGameData_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PRE_LazerElevator.PRE_LazerElevator_C.PostGameLoad
	 */
	struct APRE_LazerElevator_C_PostGameLoad_Params
	{
	};

	/**
	 * Function PRE_LazerElevator.PRE_LazerElevator_C.PostSaveGame
	 */
	struct APRE_LazerElevator_C_PostSaveGame_Params
	{
	};

	/**
	 * Function PRE_LazerElevator.PRE_LazerElevator_C.OpenLaserTagDoor
	 */
	struct APRE_LazerElevator_C_OpenLaserTagDoor_Params
	{
	};

	/**
	 * Function PRE_LazerElevator.PRE_LazerElevator_C.BndEvt__StartGame_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct APRE_LazerElevator_C_BndEvt__StartGame_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PRE_LazerElevator.PRE_LazerElevator_C.Start Elevator Drop
	 */
	struct APRE_LazerElevator_C_Start_Elevator_Drop_Params
	{
	};

	/**
	 * Function PRE_LazerElevator.PRE_LazerElevator_C.ReceiveBeginPlay
	 */
	struct APRE_LazerElevator_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function PRE_LazerElevator.PRE_LazerElevator_C.ForceDIsableAllDoors
	 */
	struct APRE_LazerElevator_C_ForceDIsableAllDoors_Params
	{
	};

	/**
	 * Function PRE_LazerElevator.PRE_LazerElevator_C.ResetElevatorToTop
	 */
	struct APRE_LazerElevator_C_ResetElevatorToTop_Params
	{
	};

	/**
	 * Function PRE_LazerElevator.PRE_LazerElevator_C.Flash Lights to Red
	 */
	struct APRE_LazerElevator_C_Flash_Lights_to_Red_Params
	{
	};

	/**
	 * Function PRE_LazerElevator.PRE_LazerElevator_C.Start
	 */
	struct APRE_LazerElevator_C_Start_Params
	{
	};

	/**
	 * Function PRE_LazerElevator.PRE_LazerElevator_C.Reset
	 */
	struct APRE_LazerElevator_C_Reset_Params
	{
	};

	/**
	 * Function PRE_LazerElevator.PRE_LazerElevator_C.OnCheckpointLoad
	 */
	struct APRE_LazerElevator_C_OnCheckpointLoad_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PRE_LazerElevator.PRE_LazerElevator_C.PreStartLevatorDrop
	 */
	struct APRE_LazerElevator_C_PreStartLevatorDrop_Params
	{
	};

	/**
	 * Function PRE_LazerElevator.PRE_LazerElevator_C.Construct Reset
	 */
	struct APRE_LazerElevator_C_Construct_Reset_Params
	{
	};

	/**
	 * Function PRE_LazerElevator.PRE_LazerElevator_C.ExecuteUbergraph_PRE_LazerElevator
	 */
	struct APRE_LazerElevator_C_ExecuteUbergraph_PRE_LazerElevator_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PRE_LazerElevator.PRE_LazerElevator_C.Event game Mode__DelegateSignature
	 */
	struct APRE_LazerElevator_C_Event_game_Mode__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
