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
	 * Function ServiceCart_HidePoint.ServiceCart_HidePoint_C.ReceiveBeginPlay
	 */
	struct AServiceCart_HidePoint_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ServiceCart_HidePoint.ServiceCart_HidePoint_C.OnPlayerLeave
	 */
	struct AServiceCart_HidePoint_C_OnPlayerLeave_Params
	{	};

	/**
	 * Function ServiceCart_HidePoint.ServiceCart_HidePoint_C.OnPlayerHide
	 */
	struct AServiceCart_HidePoint_C_OnPlayerHide_Params
	{
	public:
		class ACharacter*                                          PlayerCharacter;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ServiceCart_HidePoint.ServiceCart_HidePoint_C.ExecuteUbergraph_ServiceCart_HidePoint
	 */
	struct AServiceCart_HidePoint_C_ExecuteUbergraph_ServiceCart_HidePoint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y923[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
