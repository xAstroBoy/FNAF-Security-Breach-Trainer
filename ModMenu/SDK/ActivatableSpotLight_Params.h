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
	 * Function ActivatableSpotLight.ActivatableSpotLight_C.GetActivatableState
	 */
	struct AActivatableSpotLight_C_GetActivatableState_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EActivatableState                                          CurrentState;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActivatableSpotLight.ActivatableSpotLight_C.CanActivate
	 */
	struct AActivatableSpotLight_C_CanActivate_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanActivate;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EConditionFailReason                                       CantReason;                                              // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActivatableSpotLight.ActivatableSpotLight_C.CanDeactivate
	 */
	struct AActivatableSpotLight_C_CanDeactivate_Params
	{
	public:
		bool                                                       CanDeactivate;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ActivatableSpotLight.ActivatableSpotLight_C.OnActivatorDone
	 */
	struct AActivatableSpotLight_C_OnActivatorDone_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActivatableSpotLight.ActivatableSpotLight_C.SetActivated
	 */
	struct AActivatableSpotLight_C_SetActivated_Params
	{	};

	/**
	 * Function ActivatableSpotLight.ActivatableSpotLight_C.DeactivateObject
	 */
	struct AActivatableSpotLight_C_DeactivateObject_Params
	{
	public:
		class AActor*                                              Deactivator;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActivatableSpotLight.ActivatableSpotLight_C.SetDeactivated
	 */
	struct AActivatableSpotLight_C_SetDeactivated_Params
	{	};

	/**
	 * Function ActivatableSpotLight.ActivatableSpotLight_C.ReceiveBeginPlay
	 */
	struct AActivatableSpotLight_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ActivatableSpotLight.ActivatableSpotLight_C.ActivateObject
	 */
	struct AActivatableSpotLight_C_ActivateObject_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActivatableSpotLight.ActivatableSpotLight_C.ExecuteUbergraph_ActivatableSpotLight
	 */
	struct AActivatableSpotLight_C_ExecuteUbergraph_ActivatableSpotLight_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N1SI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
