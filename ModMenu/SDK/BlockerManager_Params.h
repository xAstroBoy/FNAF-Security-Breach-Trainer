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
	 * Function BlockerManager.BlockerManager_C.Hide Actors
	 */
	struct ABlockerManager_C_Hide_Actors_Params
	{
	public:
		bool                                                       Unhide;                                                  // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BlockerManager.BlockerManager_C.DestroyRemainingActors
	 */
	struct ABlockerManager_C_DestroyRemainingActors_Params
	{
	};

	/**
	 * Function BlockerManager.BlockerManager_C.ReceiveTick
	 */
	struct ABlockerManager_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BlockerManager.BlockerManager_C.DestroyManagedActors
	 */
	struct ABlockerManager_C_DestroyManagedActors_Params
	{
	};

	/**
	 * Function BlockerManager.BlockerManager_C.BndEvt__ConditionalCheck_K2Node_ComponentBoundEvent_0_OnConditionalCheckUpdated__DelegateSignature
	 */
	struct ABlockerManager_C_BndEvt__ConditionalCheck_K2Node_ComponentBoundEvent_0_OnConditionalCheckUpdated__DelegateSignature_Params
	{
	public:
		class UConditionalCheckComponent*                          ConditionCheckComponent;                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bNewResult;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BlockerManager.BlockerManager_C.ExecuteUbergraph_BlockerManager
	 */
	struct ABlockerManager_C_ExecuteUbergraph_BlockerManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
