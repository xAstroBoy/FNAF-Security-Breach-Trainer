#pragma once

// Name: FNAF Security Breach, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function DebugOverlay.DebugOverlay_C.GetFrameRateVisible
struct UDebugOverlay_C_GetFrameRateVisible_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function DebugOverlay.DebugOverlay_C.GetLightScenarioVisible
struct UDebugOverlay_C_GetLightScenarioVisible_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function DebugOverlay.DebugOverlay_C.Get_LightScenario_Text_1
struct UDebugOverlay_C_Get_LightScenario_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function DebugOverlay.DebugOverlay_C.Get_VannyMeter_Percent_1
struct UDebugOverlay_C_Get_VannyMeter_Percent_1_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DebugOverlay.DebugOverlay_C.Get_RoomName_Text_1
struct UDebugOverlay_C_Get_RoomName_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function DebugOverlay.DebugOverlay_C.IsShowingWorldCoords
struct UDebugOverlay_C_IsShowingWorldCoords_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function DebugOverlay.DebugOverlay_C.IsShowingLevelStreamers
struct UDebugOverlay_C_IsShowingLevelStreamers_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function DebugOverlay.DebugOverlay_C.IsShowingLevelLoading
struct UDebugOverlay_C_IsShowingLevelLoading_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function DebugOverlay.DebugOverlay_C.SetupStreamers
struct UDebugOverlay_C_SetupStreamers_Params
{
};

// Function DebugOverlay.DebugOverlay_C.Get_LoadedLevelsText_Text_1
struct UDebugOverlay_C_Get_LoadedLevelsText_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function DebugOverlay.DebugOverlay_C.GetWorldCoordinateText
struct UDebugOverlay_C_GetWorldCoordinateText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function DebugOverlay.DebugOverlay_C.Construct
struct UDebugOverlay_C_Construct_Params
{
};

// Function DebugOverlay.DebugOverlay_C.Tick
struct UDebugOverlay_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DebugOverlay.DebugOverlay_C.SetWorldCoordDisplay
struct UDebugOverlay_C_SetWorldCoordDisplay_Params
{
	bool                                               On;                                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function DebugOverlay.DebugOverlay_C.SetLevelLoadedDisplay
struct UDebugOverlay_C_SetLevelLoadedDisplay_Params
{
	bool                                               On;                                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function DebugOverlay.DebugOverlay_C.SetLevelStreamersDisplay
struct UDebugOverlay_C_SetLevelStreamersDisplay_Params
{
	bool                                               On;                                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function DebugOverlay.DebugOverlay_C.SetVannyMeterDisplay
struct UDebugOverlay_C_SetVannyMeterDisplay_Params
{
	bool                                               On;                                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function DebugOverlay.DebugOverlay_C.Set Frame Rate
struct UDebugOverlay_C_Set_Frame_Rate_Params
{
	int                                                FPS;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DebugOverlay.DebugOverlay_C.Set Frame Rate Display
struct UDebugOverlay_C_Set_Frame_Rate_Display_Params
{
	bool                                               On;                                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function DebugOverlay.DebugOverlay_C.Set Lighting Scenario Display
struct UDebugOverlay_C_Set_Lighting_Scenario_Display_Params
{
	bool                                               On;                                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function DebugOverlay.DebugOverlay_C.ExecuteUbergraph_DebugOverlay
struct UDebugOverlay_C_ExecuteUbergraph_DebugOverlay_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
