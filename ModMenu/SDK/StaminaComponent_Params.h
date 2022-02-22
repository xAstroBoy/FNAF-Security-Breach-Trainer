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
	 * Function StaminaComponent.StaminaComponent_C.GetStaminaRefillRate
	 */
	struct UStaminaComponent_C_GetStaminaRefillRate_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function StaminaComponent.StaminaComponent_C.GetMaxStamina
	 */
	struct UStaminaComponent_C_GetMaxStamina_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function StaminaComponent.StaminaComponent_C.GetStaminaPercentage
	 */
	struct UStaminaComponent_C_GetStaminaPercentage_Params
	{
	public:
		float                                                      StaminaPercentage;                                       // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function StaminaComponent.StaminaComponent_C.CanUseStamina
	 */
	struct UStaminaComponent_C_CanUseStamina_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function StaminaComponent.StaminaComponent_C.ReceiveBeginPlay
	 */
	struct UStaminaComponent_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function StaminaComponent.StaminaComponent_C.ReceiveTick
	 */
	struct UStaminaComponent_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function StaminaComponent.StaminaComponent_C.Start Using Stamina
	 */
	struct UStaminaComponent_C_Start_Using_Stamina_Params
	{
	};

	/**
	 * Function StaminaComponent.StaminaComponent_C.Stop Using Stamina
	 */
	struct UStaminaComponent_C_Stop_Using_Stamina_Params
	{
	};

	/**
	 * Function StaminaComponent.StaminaComponent_C.ExecuteUbergraph_StaminaComponent
	 */
	struct UStaminaComponent_C_ExecuteUbergraph_StaminaComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function StaminaComponent.StaminaComponent_C.OnStaminaReplenished__DelegateSignature
	 */
	struct UStaminaComponent_C_OnStaminaReplenished__DelegateSignature_Params
	{
	};

	/**
	 * Function StaminaComponent.StaminaComponent_C.OnStaminaDepleted__DelegateSignature
	 */
	struct UStaminaComponent_C_OnStaminaDepleted__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
