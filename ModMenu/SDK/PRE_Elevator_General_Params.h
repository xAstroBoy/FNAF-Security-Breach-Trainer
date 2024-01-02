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
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.HasDoorInitialized
	 */
	struct APRE_Elevator_General_C_HasDoorInitialized_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2O2P[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.IsDoorLockedForAI
	 */
	struct APRE_Elevator_General_C_IsDoorLockedForAI_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.IsDoorLockedForPlayer
	 */
	struct APRE_Elevator_General_C_IsDoorLockedForPlayer_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.IsDoorOpen
	 */
	struct APRE_Elevator_General_C_IsDoorOpen_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.TeleportFreddy
	 */
	struct APRE_Elevator_General_C_TeleportFreddy_Params
	{	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.UpdateCanUseState
	 */
	struct APRE_Elevator_General_C_UpdateCanUseState_Params
	{	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.CloseOrOpenDoors
	 */
	struct APRE_Elevator_General_C_CloseOrOpenDoors_Params
	{
	public:
		E_Elevator_Side                                            Side;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Open;                                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AFPO[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.PrintDebugVariable
	 */
	struct APRE_Elevator_General_C_PrintDebugVariable_Params
	{
	public:
		class FString                                              Description;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Variable;                                                // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		E_Elevator_Side                                            Side;                                                    // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Remote;                                                  // 0x0021(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ShowSide;                                                // 0x0022(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ShowRemote;                                              // 0x0023(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R100[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.GetTarget_StreamViewpoint
	 */
	struct APRE_Elevator_General_C_GetTarget_StreamViewpoint_Params
	{
	public:
		E_Elevator_Side                                            Side;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Remote;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C9MC[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AA_Elevator_StreamViewpoint_C*                       StreamViewpoint;                                         // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.GetTarget_Levels
	 */
	struct APRE_Elevator_General_C_GetTarget_Levels_Params
	{
	public:
		E_Elevator_Side                                            Side;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Remote;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TGC3[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FS_Elevator_Levels                                  Levels;                                                  // 0x0008(0x0020)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.GetTarget_ArrowIndicators
	 */
	struct APRE_Elevator_General_C_GetTarget_ArrowIndicators_Params
	{
	public:
		bool                                                       Remote;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BMCD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class ABP_ArrowIndicator_C*>                        ArrowIndicators;                                         // 0x0008(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.GetTarget_Doors
	 */
	struct APRE_Elevator_General_C_GetTarget_Doors_Params
	{
	public:
		E_Elevator_Side                                            Side;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Remote;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JRCU[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class APRE_ElevatorDoor_Master_C*>                  Doors;                                                   // 0x0008(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.GetTarget_Buttons
	 */
	struct APRE_Elevator_General_C_GetTarget_Buttons_Params
	{
	public:
		bool                                                       Remote;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5HFS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AButtonBase_C*>                               Buttons;                                                 // 0x0008(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.PrintDebug
	 */
	struct APRE_Elevator_General_C_PrintDebug_Params
	{
	public:
		class FString                                              inString;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		E_Elevator_Side                                            Side;                                                    // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ShowSide;                                                // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.SetStreamViewpoint
	 */
	struct APRE_Elevator_General_C_SetStreamViewpoint_Params
	{
	public:
		E_Elevator_Side                                            Side;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Remote;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bEnable;                                                 // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R49C[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.GetArrowIndicators
	 */
	struct APRE_Elevator_General_C_GetArrowIndicators_Params
	{
	public:
		TArray<class ABP_ArrowIndicator_C*>                        Array;                                                   // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.GetDoors
	 */
	struct APRE_Elevator_General_C_GetDoors_Params
	{
	public:
		struct FS_Elevator_Doors                                   Doors;                                                   // 0x0000(0x0020)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.GetButtons
	 */
	struct APRE_Elevator_General_C_GetButtons_Params
	{
	public:
		TArray<class AButtonBase_C*>                               Array;                                                   // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.SetArrowIndicators
	 */
	struct APRE_Elevator_General_C_SetArrowIndicators_Params
	{
	public:
		bool                                                       Remote;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		E_Elevator_ArrowIndicator_Type                             Type;                                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IVSM[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.TeleportPlayer
	 */
	struct APRE_Elevator_General_C_TeleportPlayer_Params
	{	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.ToggleLockButtons
	 */
	struct APRE_Elevator_General_C_ToggleLockButtons_Params
	{
	public:
		bool                                                       Remote;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Lock;                                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.ToggleLockDoors
	 */
	struct APRE_Elevator_General_C_ToggleLockDoors_Params
	{
	public:
		E_Elevator_Side                                            Side;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Remote;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Lock;                                                    // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Force;                                                   // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HVEP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.ToggleLockDoor
	 */
	struct APRE_Elevator_General_C_ToggleLockDoor_Params
	{
	public:
		class UObject*                                             Door;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Lock;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Force;                                                   // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J2KR[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.TickShake
	 */
	struct APRE_Elevator_General_C_TickShake_Params
	{	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.Setup
	 */
	struct APRE_Elevator_General_C_Setup_Params
	{	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.UpdateVariables
	 */
	struct APRE_Elevator_General_C_UpdateVariables_Params
	{	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.ForceDoorClose
	 */
	struct APRE_Elevator_General_C_ForceDoorClose_Params
	{	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.ForceDoorOpen
	 */
	struct APRE_Elevator_General_C_ForceDoorOpen_Params
	{	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.SetDoorLockAI
	 */
	struct APRE_Elevator_General_C_SetDoorLockAI_Params
	{
	public:
		bool                                                       Lock;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.SetDoorRequiredItem
	 */
	struct APRE_Elevator_General_C_SetDoorRequiredItem_Params
	{
	public:
		class FName                                                ItemName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.SetSecurityLevel
	 */
	struct APRE_Elevator_General_C_SetSecurityLevel_Params
	{
	public:
		int32_t                                                    NewSecurityLevel;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.ReceiveBeginPlay
	 */
	struct APRE_Elevator_General_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.ReceiveTick
	 */
	struct APRE_Elevator_General_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.ElevatorSequenceBegin
	 */
	struct APRE_Elevator_General_C_ElevatorSequenceBegin_Params
	{	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.WakeupOverlapBegin
	 */
	struct APRE_Elevator_General_C_WakeupOverlapBegin_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C0NU[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.SetLocked
	 */
	struct APRE_Elevator_General_C_SetLocked_Params
	{
	public:
		E_Elevator_Side                                            Side;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Remote;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Lock;                                                    // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.SetLockedAll
	 */
	struct APRE_Elevator_General_C_SetLockedAll_Params
	{
	public:
		bool                                                       Remote;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Lock;                                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.ToggleMovement
	 */
	struct APRE_Elevator_General_C_ToggleMovement_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.WakeupOverlapEnd
	 */
	struct APRE_Elevator_General_C_WakeupOverlapEnd_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.OnPawnEntered
	 */
	struct APRE_Elevator_General_C_OnPawnEntered_Params
	{
	public:
		E_Elevator_Side                                            Side;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GQXY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APawn*                                               Pawn;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.OnButtonInteract
	 */
	struct APRE_Elevator_General_C_OnButtonInteract_Params
	{	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.OnPawnExited
	 */
	struct APRE_Elevator_General_C_OnPawnExited_Params
	{
	public:
		E_Elevator_Side                                            Side;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KMKM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APawn*                                               Pawn;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.ElevatorSequenceEnd
	 */
	struct APRE_Elevator_General_C_ElevatorSequenceEnd_Params
	{
	public:
		bool                                                       CanUse;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.SwapLevels
	 */
	struct APRE_Elevator_General_C_SwapLevels_Params
	{	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.OnMovementReachedTargetValue
	 */
	struct APRE_Elevator_General_C_OnMovementReachedTargetValue_Params
	{
	public:
		E_Elevator_MovementMode                                    Selection;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.OnLevelsSwapped
	 */
	struct APRE_Elevator_General_C_OnLevelsSwapped_Params
	{	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.OverlapWake
	 */
	struct APRE_Elevator_General_C_OverlapWake_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SEO6[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.OverlapSleep
	 */
	struct APRE_Elevator_General_C_OverlapSleep_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.OnPawnEnteredDoorA
	 */
	struct APRE_Elevator_General_C_OnPawnEnteredDoorA_Params
	{
	public:
		class UDoorComponent*                                      DoorComponent;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               Pawn;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bPassedDoorCheck;                                        // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EConditionFailReason                                       FailReason;                                              // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.OnPawnExitedDoorA
	 */
	struct APRE_Elevator_General_C_OnPawnExitedDoorA_Params
	{
	public:
		class UDoorComponent*                                      DoorComponent;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               Pawn;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.BndEvt__InsideOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct APRE_Elevator_General_C_BndEvt__InsideOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AEZV[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.BndEvt__InsideOverlap_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct APRE_Elevator_General_C_BndEvt__InsideOverlap_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.OnPawnExitedDoorB
	 */
	struct APRE_Elevator_General_C_OnPawnExitedDoorB_Params
	{
	public:
		class UDoorComponent*                                      DoorComponent;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               Pawn;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.OnPawnEnteredDoorB
	 */
	struct APRE_Elevator_General_C_OnPawnEnteredDoorB_Params
	{
	public:
		class UDoorComponent*                                      DoorComponent;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               Pawn;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bPassedDoorCheck;                                        // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EConditionFailReason                                       FailReason;                                              // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.SetDoorLockPlayer
	 */
	struct APRE_Elevator_General_C_SetDoorLockPlayer_Params
	{
	public:
		bool                                                       Lock;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.OnLevelsLoaded_Event_1
	 */
	struct APRE_Elevator_General_C_OnLevelsLoaded_Event_1_Params
	{	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.PlayMusic
	 */
	struct APRE_Elevator_General_C_PlayMusic_Params
	{	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.StopMusic
	 */
	struct APRE_Elevator_General_C_StopMusic_Params
	{	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.On Fail To Teleport Freddy
	 */
	struct APRE_Elevator_General_C_OnFailToTeleportFreddy_Params
	{	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.BndEvt__Elevator_Audio_K2Node_ComponentBoundEvent_2_PlayAudioEvent__DelegateSignature
	 */
	struct APRE_Elevator_General_C_BndEvt__Elevator_Audio_K2Node_ComponentBoundEvent_2_PlayAudioEvent__DelegateSignature_Params
	{
	public:
		TArray<struct FElevatorAudioData>                          AudiotoPlay;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.StopPlayingElevatorAudio
	 */
	struct APRE_Elevator_General_C_StopPlayingElevatorAudio_Params
	{	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.CustomEvent
	 */
	struct APRE_Elevator_General_C_CustomEvent_Params
	{	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.ExecuteUbergraph_PRE_Elevator_General
	 */
	struct APRE_Elevator_General_C_ExecuteUbergraph_PRE_Elevator_General_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.SwappingLevels__DelegateSignature
	 */
	struct APRE_Elevator_General_C_SwappingLevels__DelegateSignature_Params
	{	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.RemoveSubtitles__DelegateSignature
	 */
	struct APRE_Elevator_General_C_RemoveSubtitles__DelegateSignature_Params
	{	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.ElevatorSequenceBegun__DelegateSignature
	 */
	struct APRE_Elevator_General_C_ElevatorSequenceBegun__DelegateSignature_Params
	{	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.OnButtonPressed__DelegateSignature
	 */
	struct APRE_Elevator_General_C_OnButtonPressed__DelegateSignature_Params
	{	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.OnWakeupOverlapEntered__DelegateSignature
	 */
	struct APRE_Elevator_General_C_OnWakeupOverlapEntered__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7KTY[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function PRE_Elevator_General.PRE_Elevator_General_C.OnWakeupOverlapLeave__DelegateSignature
	 */
	struct APRE_Elevator_General_C_OnWakeupOverlapLeave__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
