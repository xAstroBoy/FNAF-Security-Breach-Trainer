#pragma once

/**
 * Name: FNAFSB
 * Version: 1
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
	 * Function RockstarRowHour5Manager.RockstarRowHour5Manager_C.SetupTriggerEnables
	 */
	struct ARockstarRowHour5Manager_C_SetupTriggerEnables_Params
	{	};

	/**
	 * Function RockstarRowHour5Manager.RockstarRowHour5Manager_C.OnCheckpointSave
	 */
	struct ARockstarRowHour5Manager_C_OnCheckpointSave_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RockstarRowHour5Manager.RockstarRowHour5Manager_C.OnGameDataLoaded
	 */
	struct ARockstarRowHour5Manager_C_OnGameDataLoaded_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RockstarRowHour5Manager.RockstarRowHour5Manager_C.OnStoreGameData
	 */
	struct ARockstarRowHour5Manager_C_OnStoreGameData_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RockstarRowHour5Manager.RockstarRowHour5Manager_C.PostGameLoad
	 */
	struct ARockstarRowHour5Manager_C_PostGameLoad_Params
	{	};

	/**
	 * Function RockstarRowHour5Manager.RockstarRowHour5Manager_C.PostSaveGame
	 */
	struct ARockstarRowHour5Manager_C_PostSaveGame_Params
	{	};

	/**
	 * Function RockstarRowHour5Manager.RockstarRowHour5Manager_C.ReceiveBeginPlay
	 */
	struct ARockstarRowHour5Manager_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function RockstarRowHour5Manager.RockstarRowHour5Manager_C.BndEvt__RoxySpawnInTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ARockstarRowHour5Manager_C_BndEvt__RoxySpawnInTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PEZ8[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function RockstarRowHour5Manager.RockstarRowHour5Manager_C.BndEvt__RoxyAlertTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ARockstarRowHour5Manager_C_BndEvt__RoxyAlertTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JVMQ[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function RockstarRowHour5Manager.RockstarRowHour5Manager_C.On Roxy Left
	 */
	struct ARockstarRowHour5Manager_C_OnRoxyLeft_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RockstarRowHour5Manager.RockstarRowHour5Manager_C.On Package Collected
	 */
	struct ARockstarRowHour5Manager_C_OnPackageCollected_Params
	{	};

	/**
	 * Function RockstarRowHour5Manager.RockstarRowHour5Manager_C.OnCheckpointLoad
	 */
	struct ARockstarRowHour5Manager_C_OnCheckpointLoad_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RockstarRowHour5Manager.RockstarRowHour5Manager_C.BndEvt__TimeCheckComponent_K2Node_ComponentBoundEvent_3_OnTimeStart__DelegateSignature
	 */
	struct ARockstarRowHour5Manager_C_BndEvt__TimeCheckComponent_K2Node_ComponentBoundEvent_3_OnTimeStart__DelegateSignature_Params
	{	};

	/**
	 * Function RockstarRowHour5Manager.RockstarRowHour5Manager_C.BndEvt__TimeCheckComponent_K2Node_ComponentBoundEvent_4_OnTimeEnd__DelegateSignature
	 */
	struct ARockstarRowHour5Manager_C_BndEvt__TimeCheckComponent_K2Node_ComponentBoundEvent_4_OnTimeEnd__DelegateSignature_Params
	{	};

	/**
	 * Function RockstarRowHour5Manager.RockstarRowHour5Manager_C.BndEvt__EnteredAsFreddyRoxyAltert_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ARockstarRowHour5Manager_C_BndEvt__EnteredAsFreddyRoxyAltert_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BD9Z[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function RockstarRowHour5Manager.RockstarRowHour5Manager_C.GregoryReset
	 */
	struct ARockstarRowHour5Manager_C_GregoryReset_Params
	{	};

	/**
	 * Function RockstarRowHour5Manager.RockstarRowHour5Manager_C.FreddyReset
	 */
	struct ARockstarRowHour5Manager_C_FreddyReset_Params
	{	};

	/**
	 * Function RockstarRowHour5Manager.RockstarRowHour5Manager_C.ExecuteUbergraph_RockstarRowHour5Manager
	 */
	struct ARockstarRowHour5Manager_C_ExecuteUbergraph_RockstarRowHour5Manager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
