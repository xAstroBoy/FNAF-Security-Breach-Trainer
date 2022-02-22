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
	 * Function DbgHourSkipPathSelect.DbgHourSkipPathSelect_C.GetSkipRoute
	 */
	struct UDbgHourSkipPathSelect_C_GetSkipRoute_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DbgPlayerPaths_EDbgPlayerPaths                             SkipRoute;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DbgHourSkipPathSelect.DbgHourSkipPathSelect_C.PreConstruct
	 */
	struct UDbgHourSkipPathSelect_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function DbgHourSkipPathSelect.DbgHourSkipPathSelect_C.BndEvt__Button_PrizeCounter_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UDbgHourSkipPathSelect_C_BndEvt__Button_PrizeCounter_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function DbgHourSkipPathSelect.DbgHourSkipPathSelect_C.BndEvt__Button_LoadingDock_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UDbgHourSkipPathSelect_C_BndEvt__Button_LoadingDock_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function DbgHourSkipPathSelect.DbgHourSkipPathSelect_C.ExecuteUbergraph_DbgHourSkipPathSelect
	 */
	struct UDbgHourSkipPathSelect_C_ExecuteUbergraph_DbgHourSkipPathSelect_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DbgHourSkipPathSelect.DbgHourSkipPathSelect_C.OnPathSelected__DelegateSignature
	 */
	struct UDbgHourSkipPathSelect_C_OnPathSelected__DelegateSignature_Params
	{
	public:
		DbgPlayerPaths_EDbgPlayerPaths                             NewParam;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
