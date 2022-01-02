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

// Function UI_TextAndIcons.UI_TextAndIcons_C.Updateicons
struct UUI_TextAndIcons_C_Updateicons_Params
{
};

// Function UI_TextAndIcons.UI_TextAndIcons_C.SetFonts
struct UUI_TextAndIcons_C_SetFonts_Params
{
};

// Function UI_TextAndIcons.UI_TextAndIcons_C.SetTextFields
struct UUI_TextAndIcons_C_SetTextFields_Params
{
	struct FText                                       LeftSide;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FName                                       ActionMappingName;                                         // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Middle;                                                    // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FName                                       ActionMappingName2;                                        // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       RightSide;                                                 // 0x0040(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_TextAndIcons.UI_TextAndIcons_C.PreConstruct
struct UUI_TextAndIcons_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_TextAndIcons.UI_TextAndIcons_C.ExecuteUbergraph_UI_TextAndIcons
struct UUI_TextAndIcons_C_ExecuteUbergraph_UI_TextAndIcons_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
