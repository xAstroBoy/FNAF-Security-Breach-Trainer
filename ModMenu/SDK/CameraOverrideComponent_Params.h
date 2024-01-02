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
	 * Function CameraOverrideComponent.CameraOverrideComponent_C.FindGregory
	 */
	struct UCameraOverrideComponent_C_FindGregory_Params
	{
	public:
		class AFNAFBasePlayerCharacter*                            Gregory;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CameraOverrideComponent.CameraOverrideComponent_C.Release Camera
	 */
	struct UCameraOverrideComponent_C_ReleaseCamera_Params
	{	};

	/**
	 * Function CameraOverrideComponent.CameraOverrideComponent_C.Take Over Camera
	 */
	struct UCameraOverrideComponent_C_TakeOverCamera_Params
	{	};

	/**
	 * Function CameraOverrideComponent.CameraOverrideComponent_C.ExecuteUbergraph_CameraOverrideComponent
	 */
	struct UCameraOverrideComponent_C_ExecuteUbergraph_CameraOverrideComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_26PX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
