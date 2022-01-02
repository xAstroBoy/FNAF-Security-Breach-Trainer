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
//		Name   -> Function KeyBindingIcon.KeyBindingIcon_C.SetKeyName
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UKeyBindingIcon_C::SetKeyName(const struct FName& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KeyBindingIcon.KeyBindingIcon_C.SetKeyName");

	UKeyBindingIcon_C_SetKeyName_Params params {};
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function KeyBindingIcon.KeyBindingIcon_C.Set Icon
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UKeyBindingIcon_C::Set_Icon()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KeyBindingIcon.KeyBindingIcon_C.Set Icon");

	UKeyBindingIcon_C_Set_Icon_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function KeyBindingIcon.KeyBindingIcon_C.ToggleIcon
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UKeyBindingIcon_C::ToggleIcon()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KeyBindingIcon.KeyBindingIcon_C.ToggleIcon");

	UKeyBindingIcon_C_ToggleIcon_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function KeyBindingIcon.KeyBindingIcon_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UKeyBindingIcon_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KeyBindingIcon.KeyBindingIcon_C.PreConstruct");

	UKeyBindingIcon_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function KeyBindingIcon.KeyBindingIcon_C.ExecuteUbergraph_KeyBindingIcon
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UKeyBindingIcon_C::ExecuteUbergraph_KeyBindingIcon(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KeyBindingIcon.KeyBindingIcon_C.ExecuteUbergraph_KeyBindingIcon");

	UKeyBindingIcon_C_ExecuteUbergraph_KeyBindingIcon_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
