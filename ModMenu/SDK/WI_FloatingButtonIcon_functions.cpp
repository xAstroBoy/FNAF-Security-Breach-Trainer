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
//		Name   -> Function WI_FloatingButtonIcon.WI_FloatingButtonIcon_C.HighlightButton
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Highlight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWI_FloatingButtonIcon_C::HighlightButton(bool Highlight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_FloatingButtonIcon.WI_FloatingButtonIcon_C.HighlightButton");

	UWI_FloatingButtonIcon_C_HighlightButton_Params params {};
	params.Highlight = Highlight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_FloatingButtonIcon.WI_FloatingButtonIcon_C.SetButtonImage
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<E_PSButtons_E_PSButtons>               Button_Type                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWI_FloatingButtonIcon_C::SetButtonImage(TEnumAsByte<E_PSButtons_E_PSButtons> Button_Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_FloatingButtonIcon.WI_FloatingButtonIcon_C.SetButtonImage");

	UWI_FloatingButtonIcon_C_SetButtonImage_Params params {};
	params.Button_Type = Button_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_FloatingButtonIcon.WI_FloatingButtonIcon_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWI_FloatingButtonIcon_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_FloatingButtonIcon.WI_FloatingButtonIcon_C.PreConstruct");

	UWI_FloatingButtonIcon_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_FloatingButtonIcon.WI_FloatingButtonIcon_C.ExecuteUbergraph_WI_FloatingButtonIcon
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWI_FloatingButtonIcon_C::ExecuteUbergraph_WI_FloatingButtonIcon(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_FloatingButtonIcon.WI_FloatingButtonIcon_C.ExecuteUbergraph_WI_FloatingButtonIcon");

	UWI_FloatingButtonIcon_C_ExecuteUbergraph_WI_FloatingButtonIcon_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
