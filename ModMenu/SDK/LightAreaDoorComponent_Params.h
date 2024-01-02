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
	 * Function LightAreaDoorComponent.LightAreaDoorComponent_C.ReceiveBeginPlay
	 */
	struct ULightAreaDoorComponent_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function LightAreaDoorComponent.LightAreaDoorComponent_C.On Area Change Finished
	 */
	struct ULightAreaDoorComponent_C_OnAreaChangeFinished_Params
	{	};

	/**
	 * Function LightAreaDoorComponent.LightAreaDoorComponent_C.ExecuteUbergraph_LightAreaDoorComponent
	 */
	struct ULightAreaDoorComponent_C_ExecuteUbergraph_LightAreaDoorComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5PEB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
