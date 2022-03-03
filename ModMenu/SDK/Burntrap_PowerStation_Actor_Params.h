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
	 * Function Burntrap_PowerStation_Actor.Burntrap_PowerStation_Actor_C.ReceiveBeginPlay
	 */
	struct ABurntrap_PowerStation_Actor_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function Burntrap_PowerStation_Actor.Burntrap_PowerStation_Actor_C.OnOverlapFreddyTrigger
	 */
	struct ABurntrap_PowerStation_Actor_C_OnOverlapFreddyTrigger_Params
	{
	public:
		class AActor*                                              Other_Actor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Burntrap_PowerStation_Actor.Burntrap_PowerStation_Actor_C.FreddyReachedPowerStation
	 */
	struct ABurntrap_PowerStation_Actor_C_FreddyReachedPowerStation_Params
	{
	};

	/**
	 * Function Burntrap_PowerStation_Actor.Burntrap_PowerStation_Actor_C.BndEvt__FreddyTrigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABurntrap_PowerStation_Actor_C_BndEvt__FreddyTrigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Burntrap_PowerStation_Actor.Burntrap_PowerStation_Actor_C.ExecuteUbergraph_Burntrap_PowerStation_Actor
	 */
	struct ABurntrap_PowerStation_Actor_C_ExecuteUbergraph_Burntrap_PowerStation_Actor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
