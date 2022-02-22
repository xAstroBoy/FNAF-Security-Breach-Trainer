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
	 * Function ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C.CanDeactivate
	 */
	struct AShatteredChicaSpawnActivatibleTrigger_C_CanDeactivate_Params
	{
	public:
		bool                                                       CanDeactivate;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C.GetActivatableState
	 */
	struct AShatteredChicaSpawnActivatibleTrigger_C_GetActivatableState_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ActivatableState_EActivatableState                         CurrentState;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C.CanActivate
	 */
	struct AShatteredChicaSpawnActivatibleTrigger_C_CanActivate_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanActivate;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		fnaf9_EConditionFailReason                                 CantReason;                                              // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C.OnActivatorDone
	 */
	struct AShatteredChicaSpawnActivatibleTrigger_C_OnActivatorDone_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C.SetActivated
	 */
	struct AShatteredChicaSpawnActivatibleTrigger_C_SetActivated_Params
	{
	};

	/**
	 * Function ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C.SetDeactivated
	 */
	struct AShatteredChicaSpawnActivatibleTrigger_C_SetDeactivated_Params
	{
	};

	/**
	 * Function ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C.ReceiveBeginPlay
	 */
	struct AShatteredChicaSpawnActivatibleTrigger_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C.ReceiveActorBeginOverlap
	 */
	struct AShatteredChicaSpawnActivatibleTrigger_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C.ActivateObject
	 */
	struct AShatteredChicaSpawnActivatibleTrigger_C_ActivateObject_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C.OnTriggered
	 */
	struct AShatteredChicaSpawnActivatibleTrigger_C_OnTriggered_Params
	{
	};

	/**
	 * Function ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C.DeactivateObject
	 */
	struct AShatteredChicaSpawnActivatibleTrigger_C_DeactivateObject_Params
	{
	public:
		class AActor*                                              Deactivator;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C.ExecuteUbergraph_ShatteredChicaSpawnActivatibleTrigger
	 */
	struct AShatteredChicaSpawnActivatibleTrigger_C_ExecuteUbergraph_ShatteredChicaSpawnActivatibleTrigger_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
