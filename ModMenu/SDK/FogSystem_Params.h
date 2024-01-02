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
	 * Function FogSystem.FogSystem_C.Add Overlapped Volume
	 */
	struct AFogSystem_C_AddOverlappedVolume_Params
	{
	public:
		class AFogVolume_C*                                        Item;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FogSystem.FogSystem_C.Remove Overlapped Volume
	 */
	struct AFogSystem_C_RemoveOverlappedVolume_Params
	{
	public:
		class AFogVolume_C*                                        Item;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FogSystem.FogSystem_C.InterpolateToNewSettings
	 */
	struct AFogSystem_C_InterpolateToNewSettings_Params
	{	};

	/**
	 * Function FogSystem.FogSystem_C.Set Fog Scenario
	 */
	struct AFogSystem_C_SetFogScenario_Params
	{
	public:
		class FName                                                FogScenario;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FogSystem.FogSystem_C.ReceiveTick
	 */
	struct AFogSystem_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FogSystem.FogSystem_C.ReceiveBeginPlay
	 */
	struct AFogSystem_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function FogSystem.FogSystem_C.OnSettingsApplied
	 */
	struct AFogSystem_C_OnSettingsApplied_Params
	{
	public:
		EFNAFVisualQualityLevel                                    VisualQuality;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESWGPlatform                                               Platform;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESWGXboxPlatform                                           SpecificXboxPlatform;                                    // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsRayTraceEnabled;                                       // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsDLSSEnabled;                                           // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsVolumetricFogEnabled;                                  // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FogSystem.FogSystem_C.ExecuteUbergraph_FogSystem
	 */
	struct AFogSystem_C_ExecuteUbergraph_FogSystem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7CLK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
