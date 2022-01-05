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
	 * Function AISeekerController.AISeekerController_C.GetHearingStimulus
	 */
	struct AAISeekerController_C_GetHearingStimulus_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FAIStimulus                                         Output;                                                  // 0x0008(0x003C)  (Parm, OutParm, NoDestructor)

	};

	/**
	 * Function AISeekerController.AISeekerController_C.HandleNoiseMaker
	 */
	struct AAISeekerController_C_HandleNoiseMaker_Params
	{
	public:
		struct FAIStimulus                                         Stimulus;                                                // 0x0000(0x003C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class AActor*                                              NoisyActor;                                              // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AISeekerController.AISeekerController_C.HandleHearing
	 */
	struct AAISeekerController_C_HandleHearing_Params
	{
	public:
		struct FAIStimulus                                         AIStimulus;                                              // 0x0000(0x003C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		class AActor*                                              ActorProducingSound;                                     // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AISeekerController.AISeekerController_C.HandleSight
	 */
	struct AAISeekerController_C_HandleSight_Params
	{
	public:
		class AActor*                                              UpdatedActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Visible;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function AISeekerController.AISeekerController_C.OnCheckpointSave
	 */
	struct AAISeekerController_C_OnCheckpointSave_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AISeekerController.AISeekerController_C.OnGameDataLoaded
	 */
	struct AAISeekerController_C_OnGameDataLoaded_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AISeekerController.AISeekerController_C.OnStoreGameData
	 */
	struct AAISeekerController_C_OnStoreGameData_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AISeekerController.AISeekerController_C.PostGameLoad
	 */
	struct AAISeekerController_C_PostGameLoad_Params
	{
	};

	/**
	 * Function AISeekerController.AISeekerController_C.PostSaveGame
	 */
	struct AAISeekerController_C_PostSaveGame_Params
	{
	};

	/**
	 * Function AISeekerController.AISeekerController_C.ReceiveBeginPlay
	 */
	struct AAISeekerController_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function AISeekerController.AISeekerController_C.ReceiveTick
	 */
	struct AAISeekerController_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AISeekerController.AISeekerController_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_PerceptionUpdatedDelegate__DelegateSignature
	 */
	struct AAISeekerController_C_BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_PerceptionUpdatedDelegate__DelegateSignature_Params
	{
	public:
		TArray<class AActor*>                                      UpdatedActors;                                           // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

	};

	/**
	 * Function AISeekerController.AISeekerController_C.OnRoomChanged
	 */
	struct AAISeekerController_C_OnRoomChanged_Params
	{
	public:
		class ARoomAreaBase*                                       Room;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AISeekerController.AISeekerController_C.On Camera Alert
	 */
	struct AAISeekerController_C_On_Camera_Alert_Params
	{
	public:
		class ASecurityCamera*                                     SecurityCamera;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AISeekerController.AISeekerController_C.Jump Scare
	 */
	struct AAISeekerController_C_Jump_Scare_Params
	{
	};

	/**
	 * Function AISeekerController.AISeekerController_C.OnCheckpointLoad
	 */
	struct AAISeekerController_C_OnCheckpointLoad_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AISeekerController.AISeekerController_C.On Sound Heard
	 */
	struct AAISeekerController_C_On_Sound_Heard_Params
	{
	public:
		struct FVector                                             SoundLocation;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AISeekerController.AISeekerController_C.Reset AI
	 */
	struct AAISeekerController_C_Reset_AI_Params
	{
	};

	/**
	 * Function AISeekerController.AISeekerController_C.HandleOnDestroyed
	 */
	struct AAISeekerController_C_HandleOnDestroyed_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AISeekerController.AISeekerController_C.ExecuteUbergraph_AISeekerController
	 */
	struct AAISeekerController_C_ExecuteUbergraph_AISeekerController_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
