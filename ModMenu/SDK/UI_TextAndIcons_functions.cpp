// Name: FNAF Security Breach, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function UI_TextAndIcons.UI_TextAndIcons_C.Updateicons
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UUI_TextAndIcons_C::Updateicons()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_TextAndIcons.UI_TextAndIcons_C.Updateicons");

	UUI_TextAndIcons_C_Updateicons_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function UI_TextAndIcons.UI_TextAndIcons_C.SetFonts
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UUI_TextAndIcons_C::SetFonts()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_TextAndIcons.UI_TextAndIcons_C.SetFonts");

	UUI_TextAndIcons_C_SetFonts_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function UI_TextAndIcons.UI_TextAndIcons_C.SetTextFields
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       LeftSide                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FName                                       ActionMappingName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Middle                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FName                                       ActionMappingName2                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       RightSide                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
void UUI_TextAndIcons_C::SetTextFields(const struct FText& LeftSide, const struct FName& ActionMappingName, const struct FText& Middle, const struct FName& ActionMappingName2, const struct FText& RightSide)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_TextAndIcons.UI_TextAndIcons_C.SetTextFields");

	UUI_TextAndIcons_C_SetTextFields_Params params {};
	params.LeftSide = LeftSide;
	params.ActionMappingName = ActionMappingName;
	params.Middle = Middle;
	params.ActionMappingName2 = ActionMappingName2;
	params.RightSide = RightSide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function UI_TextAndIcons.UI_TextAndIcons_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_TextAndIcons_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_TextAndIcons.UI_TextAndIcons_C.PreConstruct");

	UUI_TextAndIcons_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function UI_TextAndIcons.UI_TextAndIcons_C.ExecuteUbergraph_UI_TextAndIcons
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_TextAndIcons_C::ExecuteUbergraph_UI_TextAndIcons(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_TextAndIcons.UI_TextAndIcons_C.ExecuteUbergraph_UI_TextAndIcons");

	UUI_TextAndIcons_C_ExecuteUbergraph_UI_TextAndIcons_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
