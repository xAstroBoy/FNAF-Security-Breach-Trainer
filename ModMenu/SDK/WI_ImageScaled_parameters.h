﻿#pragma once

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

// Function WI_ImageScaled.WI_ImageScaled_C.Update
struct UWI_ImageScaled_C_Update_Params
{
};

// Function WI_ImageScaled.WI_ImageScaled_C.PreConstruct
struct UWI_ImageScaled_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WI_ImageScaled.WI_ImageScaled_C.Construct
struct UWI_ImageScaled_C_Construct_Params
{
};

// Function WI_ImageScaled.WI_ImageScaled_C.Tick
struct UWI_ImageScaled_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WI_ImageScaled.WI_ImageScaled_C.ExecuteUbergraph_WI_ImageScaled
struct UWI_ImageScaled_C_ExecuteUbergraph_WI_ImageScaled_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
