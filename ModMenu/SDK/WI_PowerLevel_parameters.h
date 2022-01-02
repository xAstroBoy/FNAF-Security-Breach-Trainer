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

// Function WI_PowerLevel.WI_PowerLevel_C.SetBatteryBarVisibility
struct UWI_PowerLevel_C_SetBatteryBarVisibility_Params
{
};

// Function WI_PowerLevel.WI_PowerLevel_C.SetNumberofBatteryBars
struct UWI_PowerLevel_C_SetNumberofBatteryBars_Params
{
};

// Function WI_PowerLevel.WI_PowerLevel_C.ColorUpdate
struct UWI_PowerLevel_C_ColorUpdate_Params
{
	bool                                               LowOnPower;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WI_PowerLevel.WI_PowerLevel_C.PowerLevelUpdate
struct UWI_PowerLevel_C_PowerLevelUpdate_Params
{
	int                                                PowerLevel;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WI_PowerLevel.WI_PowerLevel_C.Get Flash Value
struct UWI_PowerLevel_C_Get_Flash_Value_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WI_PowerLevel.WI_PowerLevel_C.Tick
struct UWI_PowerLevel_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WI_PowerLevel.WI_PowerLevel_C.FlashUsed
struct UWI_PowerLevel_C_FlashUsed_Params
{
};

// Function WI_PowerLevel.WI_PowerLevel_C.UpdateMaxPowerLevel
struct UWI_PowerLevel_C_UpdateMaxPowerLevel_Params
{
};

// Function WI_PowerLevel.WI_PowerLevel_C.PreConstruct
struct UWI_PowerLevel_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WI_PowerLevel.WI_PowerLevel_C.Construct
struct UWI_PowerLevel_C_Construct_Params
{
};

// Function WI_PowerLevel.WI_PowerLevel_C.ExecuteUbergraph_WI_PowerLevel
struct UWI_PowerLevel_C_ExecuteUbergraph_WI_PowerLevel_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WI_PowerLevel.WI_PowerLevel_C.LowPowerAlert__DelegateSignature
struct UWI_PowerLevel_C_LowPowerAlert__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
