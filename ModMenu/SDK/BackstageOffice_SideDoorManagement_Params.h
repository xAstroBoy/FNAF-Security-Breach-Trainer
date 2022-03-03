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
	 * Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.CanDeactivate
	 */
	struct ABackstageOffice_SideDoorManagement_C_CanDeactivate_Params
	{
	public:
		bool                                                       CanDeactivate;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.GetActivatableState
	 */
	struct ABackstageOffice_SideDoorManagement_C_GetActivatableState_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ActivatableState_EActivatableState                         CurrentState;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.CanActivate
	 */
	struct ABackstageOffice_SideDoorManagement_C_CanActivate_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanActivate;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		fnaf9_EConditionFailReason                                 CantReason;                                              // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.Setup
	 */
	struct ABackstageOffice_SideDoorManagement_C_Setup_Params
	{
	public:
		class AOGM_BackStage_C*                                    BackstageOGM;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Drain_Amount;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.GetAdjacentPoint
	 */
	struct ABackstageOffice_SideDoorManagement_C_GetAdjacentPoint_Params
	{
	public:
		int32_t                                                    DoorLevel;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DoorIndex;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SelectedDoorIndex;                                       // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.GetNextDoorPoint
	 */
	struct ABackstageOffice_SideDoorManagement_C_GetNextDoorPoint_Params
	{
	public:
		int32_t                                                    DoorLevel;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DoorIndex;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PointIndex;                                              // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReachedOffice;                                           // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.DrainPower
	 */
	struct ABackstageOffice_SideDoorManagement_C_DrainPower_Params
	{
	public:
		float                                                      Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.SetDoorsLocked
	 */
	struct ABackstageOffice_SideDoorManagement_C_SetDoorsLocked_Params
	{
	public:
		bool                                                       Locked;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.OnActivatorDone
	 */
	struct ABackstageOffice_SideDoorManagement_C_OnActivatorDone_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.SetActivated
	 */
	struct ABackstageOffice_SideDoorManagement_C_SetActivated_Params
	{
	};

	/**
	 * Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.DeactivateObject
	 */
	struct ABackstageOffice_SideDoorManagement_C_DeactivateObject_Params
	{
	public:
		class AActor*                                              Deactivator;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.SetDeactivated
	 */
	struct ABackstageOffice_SideDoorManagement_C_SetDeactivated_Params
	{
	};

	/**
	 * Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.Startup
	 */
	struct ABackstageOffice_SideDoorManagement_C_Startup_Params
	{
	};

	/**
	 * Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.ActivateObject
	 */
	struct ABackstageOffice_SideDoorManagement_C_ActivateObject_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.Shock Doors
	 */
	struct ABackstageOffice_SideDoorManagement_C_Shock_Doors_Params
	{
	public:
		TArray<class AActor*>                                      Actors_To_Stun;                                          // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

	};

	/**
	 * Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.On Character Moved In
	 */
	struct ABackstageOffice_SideDoorManagement_C_On_Character_Moved_In_Params
	{
	};

	/**
	 * Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.ReceiveTick
	 */
	struct ABackstageOffice_SideDoorManagement_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.Outer Doors Unlocked
	 */
	struct ABackstageOffice_SideDoorManagement_C_Outer_Doors_Unlocked_Params
	{
	};

	/**
	 * Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.ExecuteUbergraph_BackstageOffice_SideDoorManagement
	 */
	struct ABackstageOffice_SideDoorManagement_C_ExecuteUbergraph_BackstageOffice_SideDoorManagement_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.OnShockChangeStatus__DelegateSignature
	 */
	struct ABackstageOffice_SideDoorManagement_C_OnShockChangeStatus__DelegateSignature_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.OnDoorBusted__DelegateSignature
	 */
	struct ABackstageOffice_SideDoorManagement_C_OnDoorBusted__DelegateSignature_Params
	{
	public:
		int32_t                                                    DoorLevel;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BackstageOffice_SideDoorManagement.BackstageOffice_SideDoorManagement_C.OnDoorsElectrified__DelegateSignature
	 */
	struct ABackstageOffice_SideDoorManagement_C_OnDoorsElectrified__DelegateSignature_Params
	{
	public:
		bool                                                       Electrified;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
