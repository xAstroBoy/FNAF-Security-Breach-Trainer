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
	 * Function HideInActor.HideInActor_C.IsEnterExitPlaying
	 */
	struct AHideInActor_C_IsEnterExitPlaying_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function HideInActor.HideInActor_C.GetHiddenPlayer
	 */
	struct AHideInActor_C_GetHiddenPlayer_Params
	{
	public:
		class ACharacter*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HideInActor.HideInActor_C.GetHideLocation
	 */
	struct AHideInActor_C_GetHideLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HideInActor.HideInActor_C.GetHideType
	 */
	struct AHideInActor_C_GetHideType_Params
	{
	public:
		fnaf9_EHideObjectType                                      ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HideInActor.HideInActor_C.GetSearchLocation
	 */
	struct AHideInActor_C_GetSearchLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function HideInActor.HideInActor_C.GetInteractViewLocation
	 */
	struct AHideInActor_C_GetInteractViewLocation_Params
	{
	public:
		bool                                                       Valid;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             WorldLocation;                                           // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HideInActor.HideInActor_C.GetInteractViewAngles
	 */
	struct AHideInActor_C_GetInteractViewAngles_Params
	{
	public:
		fnaf9_ECameraAngleFlags                                    AnglesToCheck;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HideInActor.HideInActor_C.GetHUDInstruction
	 */
	struct AHideInActor_C_GetHUDInstruction_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)

	};

	/**
	 * Function HideInActor.HideInActor_C.InteractIgnoresTrace
	 */
	struct AHideInActor_C_InteractIgnoresTrace_Params
	{
	public:
		bool                                                       IgnoreTrace;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function HideInActor.HideInActor_C.GetInstructionOverride
	 */
	struct AHideInActor_C_GetInstructionOverride_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)

	};

	/**
	 * Function HideInActor.HideInActor_C.UpdateUIOnTick
	 */
	struct AHideInActor_C_UpdateUIOnTick_Params
	{
	public:
		bool                                                       Output;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function HideInActor.HideInActor_C.CanPlayerInteract
	 */
	struct AHideInActor_C_CanPlayerInteract_Params
	{
	public:
		bool                                                       CanInteract;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		fnaf9_EConditionFailReason                                 CantReason;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HideInActor.HideInActor_C.GetInteractibleType
	 */
	struct AHideInActor_C_GetInteractibleType_Params
	{
	public:
		InteractibleType_EInteractibleType                         Type;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		InteractiblePressType_EInteractiblePressType               PressType;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HideInActor.HideInActor_C.GetSkeletalMesh
	 */
	struct AHideInActor_C_GetSkeletalMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HideInActor.HideInActor_C.OnNotifyEnd_ADFE39804EDBFCEEFCA111AF8614924D
	 */
	struct AHideInActor_C_OnNotifyEnd_ADFE39804EDBFCEEFCA111AF8614924D_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HideInActor.HideInActor_C.OnNotifyBegin_ADFE39804EDBFCEEFCA111AF8614924D
	 */
	struct AHideInActor_C_OnNotifyBegin_ADFE39804EDBFCEEFCA111AF8614924D_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HideInActor.HideInActor_C.OnInterrupted_ADFE39804EDBFCEEFCA111AF8614924D
	 */
	struct AHideInActor_C_OnInterrupted_ADFE39804EDBFCEEFCA111AF8614924D_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HideInActor.HideInActor_C.OnBlendOut_ADFE39804EDBFCEEFCA111AF8614924D
	 */
	struct AHideInActor_C_OnBlendOut_ADFE39804EDBFCEEFCA111AF8614924D_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HideInActor.HideInActor_C.OnCompleted_ADFE39804EDBFCEEFCA111AF8614924D
	 */
	struct AHideInActor_C_OnCompleted_ADFE39804EDBFCEEFCA111AF8614924D_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HideInActor.HideInActor_C.OnPlayerInteractCancel
	 */
	struct AHideInActor_C_OnPlayerInteractCancel_Params
	{
	};

	/**
	 * Function HideInActor.HideInActor_C.OnPlayerHoverEnter
	 */
	struct AHideInActor_C_OnPlayerHoverEnter_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HideInActor.HideInActor_C.OnPlayerHoverExit
	 */
	struct AHideInActor_C_OnPlayerHoverExit_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HideInActor.HideInActor_C.OnPlayerInteract
	 */
	struct AHideInActor_C_OnPlayerInteract_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HideInActor.HideInActor_C.OnPlayerLeave
	 */
	struct AHideInActor_C_OnPlayerLeave_Params
	{
	};

	/**
	 * Function HideInActor.HideInActor_C.OnPlayerHide
	 */
	struct AHideInActor_C_OnPlayerHide_Params
	{
	public:
		class ACharacter*                                          PlayerCharacter;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HideInActor.HideInActor_C.StartSearch
	 */
	struct AHideInActor_C_StartSearch_Params
	{
	public:
		class APawn*                                               SearcherPawn;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HideInActor.HideInActor_C.EndSearch
	 */
	struct AHideInActor_C_EndSearch_Params
	{
	};

	/**
	 * Function HideInActor.HideInActor_C.PlayerHideAnim
	 */
	struct AHideInActor_C_PlayerHideAnim_Params
	{
	public:
		class AActor*                                              PlayerCharacter;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       MatchCam;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AdjustEnterRotation;                                     // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USceneComponent*                                     CameraTargetComponent;                                   // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Entering;                                                // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      FrontRadius;                                             // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      BackRadius;                                              // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      LeftRadius;                                              // 0x002C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RightRadius;                                             // 0x0030(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HideInActor.HideInActor_C.PlayBotSearchSound
	 */
	struct AHideInActor_C_PlayBotSearchSound_Params
	{
	public:
		class AActor*                                              SearcherActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HideInActor.HideInActor_C.ExecuteUbergraph_HideInActor
	 */
	struct AHideInActor_C_ExecuteUbergraph_HideInActor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HideInActor.HideInActor_C.OnPlayerExitedHide__DelegateSignature
	 */
	struct AHideInActor_C_OnPlayerExitedHide__DelegateSignature_Params
	{
	};

	/**
	 * Function HideInActor.HideInActor_C.OnPlayerEnteredHide__DelegateSignature
	 */
	struct AHideInActor_C_OnPlayerEnteredHide__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
