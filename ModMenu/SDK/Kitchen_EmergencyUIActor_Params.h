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
	 * Function Kitchen_EmergencyUIActor.Kitchen_EmergencyUIActor_C.GetUIWidget
	 */
	struct AKitchen_EmergencyUIActor_C_GetUIWidget_Params
	{
	public:
		class UKitchen_EmergencyUI_C*                              AsKitchenEmergencyUI;                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Kitchen_EmergencyUIActor.Kitchen_EmergencyUIActor_C.PlayEmergencyText
	 */
	struct AKitchen_EmergencyUIActor_C_PlayEmergencyText_Params
	{
	};

	/**
	 * Function Kitchen_EmergencyUIActor.Kitchen_EmergencyUIActor_C.ExecuteUbergraph_Kitchen_EmergencyUIActor
	 */
	struct AKitchen_EmergencyUIActor_C_ExecuteUbergraph_Kitchen_EmergencyUIActor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
