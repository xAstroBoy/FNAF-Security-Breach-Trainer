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
	 * Function SurvivalStartupSequence.SurvivalStartupSequence_C.SetAllScreensToInstructionCard
	 */
	struct ASurvivalStartupSequence_C_SetAllScreensToInstructionCard_Params
	{
	public:
		TEnumAsByte<E_InstructionCard_Type_E_InstructionCard_Type> Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SurvivalStartupSequence.SurvivalStartupSequence_C.OnSecondAudioFinished
	 */
	struct ASurvivalStartupSequence_C_OnSecondAudioFinished_Params
	{
	public:
		AkAudio_EAkCallbackType                                    CallbackType;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAkCallbackInfo*                                     CallbackInfo;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SurvivalStartupSequence.SurvivalStartupSequence_C.SetScreenToInstructionCard
	 */
	struct ASurvivalStartupSequence_C_SetScreenToInstructionCard_Params
	{
	public:
		int                                                        Screen_Index;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TEnumAsByte<E_InstructionCard_Type_E_InstructionCard_Type> Type;                                                    // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SurvivalStartupSequence.SurvivalStartupSequence_C.SetAllScreensToWidget
	 */
	struct ASurvivalStartupSequence_C_SetAllScreensToWidget_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SurvivalStartupSequence.SurvivalStartupSequence_C.SetScreenToWidget
	 */
	struct ASurvivalStartupSequence_C_SetScreenToWidget_Params
	{
	public:
		int                                                        Screen_Index;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              Class;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SurvivalStartupSequence.SurvivalStartupSequence_C.SetAllScreensToStatic
	 */
	struct ASurvivalStartupSequence_C_SetAllScreensToStatic_Params
	{
	};

	/**
	 * Function SurvivalStartupSequence.SurvivalStartupSequence_C.SetAllScreensToTexture
	 */
	struct ASurvivalStartupSequence_C_SetAllScreensToTexture_Params
	{
	public:
		int                                                        TextureIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SurvivalStartupSequence.SurvivalStartupSequence_C.SetScreenToTexture
	 */
	struct ASurvivalStartupSequence_C_SetScreenToTexture_Params
	{
	public:
		int                                                        Screen_Index;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        Card_Index;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TEnumAsByte<E_InstructionCard_Type_E_InstructionCard_Type> Type;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SurvivalStartupSequence.SurvivalStartupSequence_C.GetScreenTexture
	 */
	struct ASurvivalStartupSequence_C_GetScreenTexture_Params
	{
	public:
		int                                                        Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture*                                            ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SurvivalStartupSequence.SurvivalStartupSequence_C.SetScreenToStatic
	 */
	struct ASurvivalStartupSequence_C_SetScreenToStatic_Params
	{
	public:
		int                                                        ScreenIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SurvivalStartupSequence.SurvivalStartupSequence_C.Setup2
	 */
	struct ASurvivalStartupSequence_C_Setup2_Params
	{
	public:
		AkAudio_EAkCallbackType                                    CallbackType;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAkCallbackInfo*                                     CallbackInfo;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SurvivalStartupSequence.SurvivalStartupSequence_C.FinishInstructions
	 */
	struct ASurvivalStartupSequence_C_FinishInstructions_Params
	{
	};

	/**
	 * Function SurvivalStartupSequence.SurvivalStartupSequence_C.Setup
	 */
	struct ASurvivalStartupSequence_C_Setup_Params
	{
	public:
		bool                                                       Skip;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function SurvivalStartupSequence.SurvivalStartupSequence_C.SkipIntro
	 */
	struct ASurvivalStartupSequence_C_SkipIntro_Params
	{
	};

	/**
	 * Function SurvivalStartupSequence.SurvivalStartupSequence_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_1
	 */
	struct ASurvivalStartupSequence_C_InpActEvt_AnyKey_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function SurvivalStartupSequence.SurvivalStartupSequence_C.OnCheckpointLoad
	 */
	struct ASurvivalStartupSequence_C_OnCheckpointLoad_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SurvivalStartupSequence.SurvivalStartupSequence_C.OnCheckpointSave
	 */
	struct ASurvivalStartupSequence_C_OnCheckpointSave_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SurvivalStartupSequence.SurvivalStartupSequence_C.OnGameDataLoaded
	 */
	struct ASurvivalStartupSequence_C_OnGameDataLoaded_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SurvivalStartupSequence.SurvivalStartupSequence_C.OnStoreGameData
	 */
	struct ASurvivalStartupSequence_C_OnStoreGameData_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SurvivalStartupSequence.SurvivalStartupSequence_C.PostGameLoad
	 */
	struct ASurvivalStartupSequence_C_PostGameLoad_Params
	{
	};

	/**
	 * Function SurvivalStartupSequence.SurvivalStartupSequence_C.PostSaveGame
	 */
	struct ASurvivalStartupSequence_C_PostSaveGame_Params
	{
	};

	/**
	 * Function SurvivalStartupSequence.SurvivalStartupSequence_C.BndEvt__PlayerCompleteTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ASurvivalStartupSequence_C_BndEvt__PlayerCompleteTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function SurvivalStartupSequence.SurvivalStartupSequence_C.Finish Instructions Part 1
	 */
	struct ASurvivalStartupSequence_C_Finish_Instructions_Part_1_Params
	{
	};

	/**
	 * Function SurvivalStartupSequence.SurvivalStartupSequence_C.ReceiveBeginPlay
	 */
	struct ASurvivalStartupSequence_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function SurvivalStartupSequence.SurvivalStartupSequence_C.DelaySpawnChica
	 */
	struct ASurvivalStartupSequence_C_DelaySpawnChica_Params
	{
	};

	/**
	 * Function SurvivalStartupSequence.SurvivalStartupSequence_C.LockAndWait
	 */
	struct ASurvivalStartupSequence_C_LockAndWait_Params
	{
	};

	/**
	 * Function SurvivalStartupSequence.SurvivalStartupSequence_C.Run Dialog Instruction Cards
	 */
	struct ASurvivalStartupSequence_C_Run_Dialog_Instruction_Cards_Params
	{
	};

	/**
	 * Function SurvivalStartupSequence.SurvivalStartupSequence_C.SpawnChica
	 */
	struct ASurvivalStartupSequence_C_SpawnChica_Params
	{
	};

	/**
	 * Function SurvivalStartupSequence.SurvivalStartupSequence_C.BndEvt__SpawnChicaTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ASurvivalStartupSequence_C_BndEvt__SpawnChicaTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function SurvivalStartupSequence.SurvivalStartupSequence_C.ReceiveTick
	 */
	struct ASurvivalStartupSequence_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SurvivalStartupSequence.SurvivalStartupSequence_C.ExecuteUbergraph_SurvivalStartupSequence
	 */
	struct ASurvivalStartupSequence_C_ExecuteUbergraph_SurvivalStartupSequence_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
