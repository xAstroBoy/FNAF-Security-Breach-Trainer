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
	 * Function BPI_SecurityNode.BPI_SecurityNode_C.OnSetCameraOverride
	 */
	struct UBPI_SecurityNode_C_OnSetCameraOverride_Params
	{
	public:
		bool                                                       ShouldOverride;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_SecurityNode.BPI_SecurityNode_C.IsNormalWorldSecurityNode
	 */
	struct UBPI_SecurityNode_C_IsNormalWorldSecurityNode_Params
	{
	public:
		bool                                                       IsNormalWorldSecurityNode;                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
