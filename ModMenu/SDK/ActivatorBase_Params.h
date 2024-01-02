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
	 * Function ActivatorBase.ActivatorBase_C.CanDeactivate
	 */
	struct AActivatorBase_C_CanDeactivate_Params
	{
	public:
		bool                                                       CanDeactivate;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ActivatorBase.ActivatorBase_C.CanActivate
	 */
	struct AActivatorBase_C_CanActivate_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanActivate;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EConditionFailReason                                       CantReason;                                              // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActivatorBase.ActivatorBase_C.GetActivatableState
	 */
	struct AActivatorBase_C_GetActivatableState_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EActivatableState                                          CurrentState;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActivatorBase.ActivatorBase_C.GetSavedState
	 */
	struct AActivatorBase_C_GetSavedState_Params
	{
	public:
		bool                                                       Activated;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DT25[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ActivatorBase.ActivatorBase_C.RemoveActivatable
	 */
	struct AActivatorBase_C_RemoveActivatable_Params
	{
	public:
		unsigned char                                              UnknownData_F3BV[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ActivatorBase.ActivatorBase_C.AddActivatable
	 */
	struct AActivatorBase_C_AddActivatable_Params
	{
	public:
		unsigned char                                              UnknownData_GL9T[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ActivatorBase.ActivatorBase_C.OnCheckpointSave
	 */
	struct AActivatorBase_C_OnCheckpointSave_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActivatorBase.ActivatorBase_C.OnGameDataLoaded
	 */
	struct AActivatorBase_C_OnGameDataLoaded_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActivatorBase.ActivatorBase_C.OnStoreGameData
	 */
	struct AActivatorBase_C_OnStoreGameData_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActivatorBase.ActivatorBase_C.PostSaveGame
	 */
	struct AActivatorBase_C_PostSaveGame_Params
	{	};

	/**
	 * Function ActivatorBase.ActivatorBase_C.OnActivatorDone
	 */
	struct AActivatorBase_C_OnActivatorDone_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActivatorBase.ActivatorBase_C.ReceiveBeginPlay
	 */
	struct AActivatorBase_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ActivatorBase.ActivatorBase_C.ActivateObject
	 */
	struct AActivatorBase_C_ActivateObject_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActivatorBase.ActivatorBase_C.On All Active
	 */
	struct AActivatorBase_C_OnAllActive_Params
	{	};

	/**
	 * Function ActivatorBase.ActivatorBase_C.Activate Objects
	 */
	struct AActivatorBase_C_ActivateObjects_Params
	{	};

	/**
	 * Function ActivatorBase.ActivatorBase_C.On Activate Can't Use
	 */
	struct AActivatorBase_C_OnActivateCantUse_Params
	{	};

	/**
	 * Function ActivatorBase.ActivatorBase_C.SetActivated
	 */
	struct AActivatorBase_C_SetActivated_Params
	{	};

	/**
	 * Function ActivatorBase.ActivatorBase_C.SetDeactivated
	 */
	struct AActivatorBase_C_SetDeactivated_Params
	{	};

	/**
	 * Function ActivatorBase.ActivatorBase_C.DeactivateObject
	 */
	struct AActivatorBase_C_DeactivateObject_Params
	{
	public:
		class AActor*                                              Deactivator;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActivatorBase.ActivatorBase_C.Deactivate Objects
	 */
	struct AActivatorBase_C_DeactivateObjects_Params
	{	};

	/**
	 * Function ActivatorBase.ActivatorBase_C.On All Deactivated
	 */
	struct AActivatorBase_C_OnAllDeactivated_Params
	{	};

	/**
	 * Function ActivatorBase.ActivatorBase_C.PostGameLoad
	 */
	struct AActivatorBase_C_PostGameLoad_Params
	{	};

	/**
	 * Function ActivatorBase.ActivatorBase_C.OnCheckpointLoad
	 */
	struct AActivatorBase_C_OnCheckpointLoad_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActivatorBase.ActivatorBase_C.Deactivate Children Only
	 */
	struct AActivatorBase_C_DeactivateChildrenOnly_Params
	{	};

	/**
	 * Function ActivatorBase.ActivatorBase_C.Activate Children Only
	 */
	struct AActivatorBase_C_ActivateChildrenOnly_Params
	{	};

	/**
	 * Function ActivatorBase.ActivatorBase_C.ExecuteUbergraph_ActivatorBase
	 */
	struct AActivatorBase_C_ExecuteUbergraph_ActivatorBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
