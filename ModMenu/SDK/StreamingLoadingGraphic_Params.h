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
	 * Function StreamingLoadingGraphic.StreamingLoadingGraphic_C.Construct
	 */
	struct UStreamingLoadingGraphic_C_Construct_Params
	{	};

	/**
	 * Function StreamingLoadingGraphic.StreamingLoadingGraphic_C.PreConstruct
	 */
	struct UStreamingLoadingGraphic_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StreamingLoadingGraphic.StreamingLoadingGraphic_C.ExecuteUbergraph_StreamingLoadingGraphic
	 */
	struct UStreamingLoadingGraphic_C_ExecuteUbergraph_StreamingLoadingGraphic_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
