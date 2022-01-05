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
	 * Function BP_DoorMaster.BP_DoorMaster_C.GetInteractViewLocation
	 */
	struct ABP_DoorMaster_C_GetInteractViewLocation_Params
	{
	public:
		bool                                                       Valid;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             WorldLocation;                                           // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_DoorMaster.BP_DoorMaster_C.GetInteractViewAngles
	 */
	struct ABP_DoorMaster_C_GetInteractViewAngles_Params
	{
	public:
		fnaf9_ECameraAngleFlags                                    AnglesToCheck;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_DoorMaster.BP_DoorMaster_C.GetHUDInstruction
	 */
	struct ABP_DoorMaster_C_GetHUDInstruction_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)

	};

	/**
	 * Function BP_DoorMaster.BP_DoorMaster_C.InteractIgnoresTrace
	 */
	struct ABP_DoorMaster_C_InteractIgnoresTrace_Params
	{
	public:
		bool                                                       IgnoreTrace;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_DoorMaster.BP_DoorMaster_C.GetInstructionOverride
	 */
	struct ABP_DoorMaster_C_GetInstructionOverride_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)

	};

	/**
	 * Function BP_DoorMaster.BP_DoorMaster_C.UpdateUIOnTick
	 */
	struct ABP_DoorMaster_C_UpdateUIOnTick_Params
	{
	public:
		bool                                                       Output;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_DoorMaster.BP_DoorMaster_C.GetInteractibleType
	 */
	struct ABP_DoorMaster_C_GetInteractibleType_Params
	{
	public:
		TEnumAsByte<InteractibleType_EInteractibleType>            Type;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TEnumAsByte<InteractiblePressType_EInteractiblePressType>  PressType;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_DoorMaster.BP_DoorMaster_C.CanPlayerInteract
	 */
	struct ABP_DoorMaster_C_CanPlayerInteract_Params
	{
	public:
		bool                                                       CanInteract;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		fnaf9_EConditionFailReason                                 CantReason;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_DoorMaster.BP_DoorMaster_C.HasDoorInitialized
	 */
	struct ABP_DoorMaster_C_HasDoorInitialized_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_DoorMaster.BP_DoorMaster_C.IsDoorLockedForPlayer
	 */
	struct ABP_DoorMaster_C_IsDoorLockedForPlayer_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_DoorMaster.BP_DoorMaster_C.IsDoorOpen
	 */
	struct ABP_DoorMaster_C_IsDoorOpen_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_DoorMaster.BP_DoorMaster_C.IsDoorLockedForAI
	 */
	struct ABP_DoorMaster_C_IsDoorLockedForAI_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_DoorMaster.BP_DoorMaster_C.SetPawnDetectEnable
	 */
	struct ABP_DoorMaster_C_SetPawnDetectEnable_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_DoorMaster.BP_DoorMaster_C.SetupMaterial
	 */
	struct ABP_DoorMaster_C_SetupMaterial_Params
	{
	public:
		class UMaterialInterface*                                  DefaultMaterial;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_DoorMaster.BP_DoorMaster_C.LogCharactersInDoor
	 */
	struct ABP_DoorMaster_C_LogCharactersInDoor_Params
	{
	public:
		class FString                                              Prefix;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_DoorMaster.BP_DoorMaster_C.ClearPlayerBlocker
	 */
	struct ABP_DoorMaster_C_ClearPlayerBlocker_Params
	{
	};

	/**
	 * Function BP_DoorMaster.BP_DoorMaster_C.SetupPlayerBlocker
	 */
	struct ABP_DoorMaster_C_SetupPlayerBlocker_Params
	{
	};

	/**
	 * Function BP_DoorMaster.BP_DoorMaster_C.SetupDoor
	 */
	struct ABP_DoorMaster_C_SetupDoor_Params
	{
	};

	/**
	 * Function BP_DoorMaster.BP_DoorMaster_C.CanActivate
	 */
	struct ABP_DoorMaster_C_CanActivate_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanActivate;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		fnaf9_EConditionFailReason                                 CantReason;                                              // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_DoorMaster.BP_DoorMaster_C.UserConstructionScript
	 */
	struct ABP_DoorMaster_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function BP_DoorMaster.BP_DoorMaster_C. Close Door__FinishedFunc
	 */
	struct ABP_DoorMaster_C__Close_Door__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_DoorMaster.BP_DoorMaster_C. Close Door__UpdateFunc
	 */
	struct ABP_DoorMaster_C__Close_Door__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_DoorMaster.BP_DoorMaster_C.ReceiveBeginPlay
	 */
	struct ABP_DoorMaster_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function BP_DoorMaster.BP_DoorMaster_C.On Deactivate
	 */
	struct ABP_DoorMaster_C_On_Deactivate_Params
	{
	};

	/**
	 * Function BP_DoorMaster.BP_DoorMaster_C.Set State
	 */
	struct ABP_DoorMaster_C_Set_State_Params
	{
	public:
		TEnumAsByte<ActivatableState_EActivatableState>            NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_DoorMaster.BP_DoorMaster_C.Set Door Timeline Time
	 */
	struct ABP_DoorMaster_C_Set_Door_Timeline_Time_Params
	{
	public:
		float                                                      NewTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_DoorMaster.BP_DoorMaster_C.Close
	 */
	struct ABP_DoorMaster_C_Close_Params
	{
	public:
		bool                                                       Close;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_DoorMaster.BP_DoorMaster_C.ForceDoorOpen
	 */
	struct ABP_DoorMaster_C_ForceDoorOpen_Params
	{
	};

	/**
	 * Function BP_DoorMaster.BP_DoorMaster_C.ForceDoorClose
	 */
	struct ABP_DoorMaster_C_ForceDoorClose_Params
	{
	};

	/**
	 * Function BP_DoorMaster.BP_DoorMaster_C.OnActivatorDone
	 */
	struct ABP_DoorMaster_C_OnActivatorDone_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_DoorMaster.BP_DoorMaster_C.OnPlayerInteract
	 */
	struct ABP_DoorMaster_C_OnPlayerInteract_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_DoorMaster.BP_DoorMaster_C.UpdateSecurityDisplay
	 */
	struct ABP_DoorMaster_C_UpdateSecurityDisplay_Params
	{
	};

	/**
	 * Function BP_DoorMaster.BP_DoorMaster_C.SetDoorLockPlayer
	 */
	struct ABP_DoorMaster_C_SetDoorLockPlayer_Params
	{
	public:
		bool                                                       Lock;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_DoorMaster.BP_DoorMaster_C.SetDoorLockAI
	 */
	struct ABP_DoorMaster_C_SetDoorLockAI_Params
	{
	public:
		bool                                                       Lock;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_DoorMaster.BP_DoorMaster_C.BndEvt__Door_Collision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_DoorMaster_C_BndEvt__Door_Collision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_DoorMaster.BP_DoorMaster_C.BndEvt__Door_K2Node_ComponentBoundEvent_2_OnOpenCloseDoor__DelegateSignature
	 */
	struct ABP_DoorMaster_C_BndEvt__Door_K2Node_ComponentBoundEvent_2_OnOpenCloseDoor__DelegateSignature_Params
	{
	public:
		bool                                                       bIsPlayer;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_DoorMaster.BP_DoorMaster_C.BndEvt__Door_K2Node_ComponentBoundEvent_3_OnOpenCloseDoor__DelegateSignature
	 */
	struct ABP_DoorMaster_C_BndEvt__Door_K2Node_ComponentBoundEvent_3_OnOpenCloseDoor__DelegateSignature_Params
	{
	public:
		bool                                                       bIsPlayer;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_DoorMaster.BP_DoorMaster_C.BndEvt__Door_Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_DoorMaster_C_BndEvt__Door_Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function BP_DoorMaster.BP_DoorMaster_C.SetDoorRequiredItem
	 */
	struct ABP_DoorMaster_C_SetDoorRequiredItem_Params
	{
	public:
		class FName                                                ItemName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_DoorMaster.BP_DoorMaster_C.Setup Survival Door
	 */
	struct ABP_DoorMaster_C_Setup_Survival_Door_Params
	{
	};

	/**
	 * Function BP_DoorMaster.BP_DoorMaster_C.BndEvt__Door_K2Node_ComponentBoundEvent_4_OnInitialOpen__DelegateSignature
	 */
	struct ABP_DoorMaster_C_BndEvt__Door_K2Node_ComponentBoundEvent_4_OnInitialOpen__DelegateSignature_Params
	{
	};

	/**
	 * Function BP_DoorMaster.BP_DoorMaster_C.SwitchColorForScenario
	 */
	struct ABP_DoorMaster_C_SwitchColorForScenario_Params
	{
	};

	/**
	 * Function BP_DoorMaster.BP_DoorMaster_C.OnPlayerHoverExit
	 */
	struct ABP_DoorMaster_C_OnPlayerHoverExit_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_DoorMaster.BP_DoorMaster_C.SetActivated
	 */
	struct ABP_DoorMaster_C_SetActivated_Params
	{
	};

	/**
	 * Function BP_DoorMaster.BP_DoorMaster_C.On Activate
	 */
	struct ABP_DoorMaster_C_On_Activate_Params
	{
	};

	/**
	 * Function BP_DoorMaster.BP_DoorMaster_C.OnPlayerHoverEnter
	 */
	struct ABP_DoorMaster_C_OnPlayerHoverEnter_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_DoorMaster.BP_DoorMaster_C.SetSecurityLevel
	 */
	struct ABP_DoorMaster_C_SetSecurityLevel_Params
	{
	public:
		int                                                        NewSecurityLevel;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_DoorMaster.BP_DoorMaster_C.OnPlayerInteractCancel
	 */
	struct ABP_DoorMaster_C_OnPlayerInteractCancel_Params
	{
	};

	/**
	 * Function BP_DoorMaster.BP_DoorMaster_C.ExecuteUbergraph_BP_DoorMaster
	 */
	struct ABP_DoorMaster_C_ExecuteUbergraph_BP_DoorMaster_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_DoorMaster.BP_DoorMaster_C.OnDoorLockStateChanged__DelegateSignature
	 */
	struct ABP_DoorMaster_C_OnDoorLockStateChanged__DelegateSignature_Params
	{
	public:
		class ABP_DoorMaster_C*                                    Door;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Locked;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_DoorMaster.BP_DoorMaster_C.OnFailedSecurityCheck__DelegateSignature
	 */
	struct ABP_DoorMaster_C_OnFailedSecurityCheck__DelegateSignature_Params
	{
	public:
		class ABP_DoorMaster_C*                                    Door;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
