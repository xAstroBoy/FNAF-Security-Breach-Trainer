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
	 * Function NoiseMakerInterface.NoiseMakerInterface_C.SetCanDistract
	 */
	struct UNoiseMakerInterface_C_SetCanDistract_Params
	{
	public:
		bool                                                       CanDistract;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function NoiseMakerInterface.NoiseMakerInterface_C.GetCanDistract
	 */
	struct UNoiseMakerInterface_C_GetCanDistract_Params
	{
	public:
		bool                                                       CanDistract;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function NoiseMakerInterface.NoiseMakerInterface_C.TriggerNoiseMaker
	 */
	struct UNoiseMakerInterface_C_TriggerNoiseMaker_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PlayAudio;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
