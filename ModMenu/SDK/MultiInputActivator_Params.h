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
	 * Function MultiInputActivator.MultiInputActivator_C.SetActivationStateOfAllActivators
	 */
	struct AMultiInputActivator_C_SetActivationStateOfAllActivators_Params
	{
	public:
		EActivatableState                                          NewParam;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ADOC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MultiInputActivator.MultiInputActivator_C.CheckAllActivatorsOff
	 */
	struct AMultiInputActivator_C_CheckAllActivatorsOff_Params
	{
	public:
		bool                                                       AllOff;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z6NU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Count;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MultiInputActivator.MultiInputActivator_C.GetNumberActivated
	 */
	struct AMultiInputActivator_C_GetNumberActivated_Params
	{
	public:
		int32_t                                                    NumberActivated;                                         // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MultiInputActivator.MultiInputActivator_C.CheckAllActivatorsOn
	 */
	struct AMultiInputActivator_C_CheckAllActivatorsOn_Params
	{
	public:
		bool                                                       AllOn;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IVA4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Count;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MultiInputActivator.MultiInputActivator_C.ReceiveBeginPlay
	 */
	struct AMultiInputActivator_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MultiInputActivator.MultiInputActivator_C.ActivateObject
	 */
	struct AMultiInputActivator_C_ActivateObject_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MultiInputActivator.MultiInputActivator_C.DeactivateObject
	 */
	struct AMultiInputActivator_C_DeactivateObject_Params
	{
	public:
		class AActor*                                              Deactivator;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MultiInputActivator.MultiInputActivator_C.Deactivate Inputs
	 */
	struct AMultiInputActivator_C_DeactivateInputs_Params
	{	};

	/**
	 * Function MultiInputActivator.MultiInputActivator_C.ExecuteUbergraph_MultiInputActivator
	 */
	struct AMultiInputActivator_C_ExecuteUbergraph_MultiInputActivator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MultiInputActivator.MultiInputActivator_C.OnCanActivate__DelegateSignature
	 */
	struct AMultiInputActivator_C_OnCanActivate__DelegateSignature_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZD2R[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Activator;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MultiInputActivator.MultiInputActivator_C.OnCantActivate__DelegateSignature
	 */
	struct AMultiInputActivator_C_OnCantActivate__DelegateSignature_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ELMT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Activator;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
