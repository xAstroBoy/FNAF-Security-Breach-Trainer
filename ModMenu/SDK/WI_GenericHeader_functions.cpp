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
//		Name   -> Function WI_GenericHeader.WI_GenericHeader_C.GetHeaderTextColor
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FSlateColor                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FSlateColor UWI_GenericHeader_C::GetHeaderTextColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_GenericHeader.WI_GenericHeader_C.GetHeaderTextColor");

	UWI_GenericHeader_C_GetHeaderTextColor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_GenericHeader.WI_GenericHeader_C.GetColorAndOpacity_2
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UWI_GenericHeader_C::GetColorAndOpacity_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_GenericHeader.WI_GenericHeader_C.GetColorAndOpacity_2");

	UWI_GenericHeader_C_GetColorAndOpacity_2_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_GenericHeader.WI_GenericHeader_C.GetHeaderBackground
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FSlateBrush                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FSlateBrush UWI_GenericHeader_C::GetHeaderBackground()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_GenericHeader.WI_GenericHeader_C.GetHeaderBackground");

	UWI_GenericHeader_C_GetHeaderBackground_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_GenericHeader.WI_GenericHeader_C.GetNewTexture
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FSlateBrush                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FSlateBrush UWI_GenericHeader_C::GetNewTexture()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_GenericHeader.WI_GenericHeader_C.GetNewTexture");

	UWI_GenericHeader_C_GetNewTexture_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_GenericHeader.WI_GenericHeader_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWI_GenericHeader_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_GenericHeader.WI_GenericHeader_C.PreConstruct");

	UWI_GenericHeader_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_GenericHeader.WI_GenericHeader_C.UpdateData
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWI_GenericHeader_C::UpdateData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_GenericHeader.WI_GenericHeader_C.UpdateData");

	UWI_GenericHeader_C_UpdateData_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_GenericHeader.WI_GenericHeader_C.ExecuteUbergraph_WI_GenericHeader
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWI_GenericHeader_C::ExecuteUbergraph_WI_GenericHeader(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_GenericHeader.WI_GenericHeader_C.ExecuteUbergraph_WI_GenericHeader");

	UWI_GenericHeader_C_ExecuteUbergraph_WI_GenericHeader_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
