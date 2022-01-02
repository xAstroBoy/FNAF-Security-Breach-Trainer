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
//		Name   -> Function LightAreaChanger.LightAreaChanger_C.Change Area By Location
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULightAreaChanger_C::Change_Area_By_Location(const struct FVector& Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LightAreaChanger.LightAreaChanger_C.Change Area By Location");

	ULightAreaChanger_C_Change_Area_By_Location_Params params {};
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function LightAreaChanger.LightAreaChanger_C.Change Area By Player
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ULightAreaChanger_C::Change_Area_By_Player()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LightAreaChanger.LightAreaChanger_C.Change Area By Player");

	ULightAreaChanger_C_Change_Area_By_Player_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function LightAreaChanger.LightAreaChanger_C.On Area Change Finished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ULightAreaChanger_C::On_Area_Change_Finished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LightAreaChanger.LightAreaChanger_C.On Area Change Finished");

	ULightAreaChanger_C_On_Area_Change_Finished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function LightAreaChanger.LightAreaChanger_C.ExecuteUbergraph_LightAreaChanger
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULightAreaChanger_C::ExecuteUbergraph_LightAreaChanger(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LightAreaChanger.LightAreaChanger_C.ExecuteUbergraph_LightAreaChanger");

	ULightAreaChanger_C_ExecuteUbergraph_LightAreaChanger_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function LightAreaChanger.LightAreaChanger_C.OnFadeInFinished__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ULightAreaChanger_C::OnFadeInFinished__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LightAreaChanger.LightAreaChanger_C.OnFadeInFinished__DelegateSignature");

	ULightAreaChanger_C_OnFadeInFinished__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function LightAreaChanger.LightAreaChanger_C.OnAreaChangeFinished__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ULightAreaChanger_C::OnAreaChangeFinished__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LightAreaChanger.LightAreaChanger_C.OnAreaChangeFinished__DelegateSignature");

	ULightAreaChanger_C_OnAreaChangeFinished__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
