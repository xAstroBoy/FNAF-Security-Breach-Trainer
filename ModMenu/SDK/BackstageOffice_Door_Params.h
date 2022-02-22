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
	 * Function BackstageOffice_Door.BackstageOffice_Door_C.ResetPower
	 */
	struct ABackstageOffice_Door_C_ResetPower_Params
	{
	};

	/**
	 * Function BackstageOffice_Door.BackstageOffice_Door_C.UserConstructionScript
	 */
	struct ABackstageOffice_Door_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function BackstageOffice_Door.BackstageOffice_Door_C.ReceiveBeginPlay
	 */
	struct ABackstageOffice_Door_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function BackstageOffice_Door.BackstageOffice_Door_C.ReceiveActorBeginOverlap
	 */
	struct ABackstageOffice_Door_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BackstageOffice_Door.BackstageOffice_Door_C.ReceiveTick
	 */
	struct ABackstageOffice_Door_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BackstageOffice_Door.BackstageOffice_Door_C.Drain Power
	 */
	struct ABackstageOffice_Door_C_Drain_Power_Params
	{
	public:
		float                                                      Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BackstageOffice_Door.BackstageOffice_Door_C.ShockDoor
	 */
	struct ABackstageOffice_Door_C_ShockDoor_Params
	{
	};

	/**
	 * Function BackstageOffice_Door.BackstageOffice_Door_C.Flicker Lights
	 */
	struct ABackstageOffice_Door_C_Flicker_Lights_Params
	{
	};

	/**
	 * Function BackstageOffice_Door.BackstageOffice_Door_C.ExecuteUbergraph_BackstageOffice_Door
	 */
	struct ABackstageOffice_Door_C_ExecuteUbergraph_BackstageOffice_Door_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BackstageOffice_Door.BackstageOffice_Door_C.OnActorOverlap__DelegateSignature
	 */
	struct ABackstageOffice_Door_C_OnActorOverlap__DelegateSignature_Params
	{
	};

	/**
	 * Function BackstageOffice_Door.BackstageOffice_Door_C.OnDoorDrained__DelegateSignature
	 */
	struct ABackstageOffice_Door_C_OnDoorDrained__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
