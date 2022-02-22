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
	 * Function ActivatableBase.ActivatableBase_C.CanDeactivate
	 */
	struct AActivatableBase_C_CanDeactivate_Params
	{
	public:
		bool                                                       CanDeactivate;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function ActivatableBase.ActivatableBase_C.GetActivatableState
	 */
	struct AActivatableBase_C_GetActivatableState_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ActivatableState_EActivatableState                         CurrentState;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ActivatableBase.ActivatableBase_C.CanActivate
	 */
	struct AActivatableBase_C_CanActivate_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanActivate;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		fnaf9_EConditionFailReason                                 CantReason;                                              // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ActivatableBase.ActivatableBase_C.SaveState
	 */
	struct AActivatableBase_C_SaveState_Params
	{
	};

	/**
	 * Function ActivatableBase.ActivatableBase_C.ReceiveBeginPlay
	 */
	struct AActivatableBase_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function ActivatableBase.ActivatableBase_C.ActivateObject
	 */
	struct AActivatableBase_C_ActivateObject_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ActivatableBase.ActivatableBase_C.OnActivatorDone
	 */
	struct AActivatableBase_C_OnActivatorDone_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ActivatableBase.ActivatableBase_C.Set State
	 */
	struct AActivatableBase_C_Set_State_Params
	{
	public:
		ActivatableState_EActivatableState                         NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ActivatableBase.ActivatableBase_C.SetDeactivated
	 */
	struct AActivatableBase_C_SetDeactivated_Params
	{
	};

	/**
	 * Function ActivatableBase.ActivatableBase_C.SetActivated
	 */
	struct AActivatableBase_C_SetActivated_Params
	{
	};

	/**
	 * Function ActivatableBase.ActivatableBase_C.On Activate
	 */
	struct AActivatableBase_C_On_Activate_Params
	{
	};

	/**
	 * Function ActivatableBase.ActivatableBase_C.On Deactivate
	 */
	struct AActivatableBase_C_On_Deactivate_Params
	{
	};

	/**
	 * Function ActivatableBase.ActivatableBase_C.DeactivateObject
	 */
	struct AActivatableBase_C_DeactivateObject_Params
	{
	public:
		class AActor*                                              Deactivator;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ActivatableBase.ActivatableBase_C.On Object State Changed
	 */
	struct AActivatableBase_C_On_Object_State_Changed_Params
	{
	public:
		class FName                                                ObjectName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ObjectState;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function ActivatableBase.ActivatableBase_C.ExecuteUbergraph_ActivatableBase
	 */
	struct AActivatableBase_C_ExecuteUbergraph_ActivatableBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ActivatableBase.ActivatableBase_C.OnActivatableDeactivated__DelegateSignature
	 */
	struct AActivatableBase_C_OnActivatableDeactivated__DelegateSignature_Params
	{
	};

	/**
	 * Function ActivatableBase.ActivatableBase_C.OnActivatableActivated__DelegateSignature
	 */
	struct AActivatableBase_C_OnActivatableActivated__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
