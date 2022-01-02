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

// Function WI_FloatingButtonIcon.WI_FloatingButtonIcon_C.HighlightButton
struct UWI_FloatingButtonIcon_C_HighlightButton_Params
{
	bool                                               Highlight;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WI_FloatingButtonIcon.WI_FloatingButtonIcon_C.SetButtonImage
struct UWI_FloatingButtonIcon_C_SetButtonImage_Params
{
	TEnumAsByte<E_PSButtons_E_PSButtons>               Button_Type;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WI_FloatingButtonIcon.WI_FloatingButtonIcon_C.PreConstruct
struct UWI_FloatingButtonIcon_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WI_FloatingButtonIcon.WI_FloatingButtonIcon_C.ExecuteUbergraph_WI_FloatingButtonIcon
struct UWI_FloatingButtonIcon_C_ExecuteUbergraph_WI_FloatingButtonIcon_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
