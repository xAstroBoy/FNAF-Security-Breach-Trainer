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
	 * Function BPI_DebugVis.BPI_DebugVis_C.DLCRabbitDisplayAlertText
	 */
	struct UBPI_DebugVis_C_DLCRabbitDisplayAlertText_Params
	{
	public:
		bool                                                       Display;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_DebugVis.BPI_DebugVis_C.OnDebugVis
	 */
	struct UBPI_DebugVis_C_OnDebugVis_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
