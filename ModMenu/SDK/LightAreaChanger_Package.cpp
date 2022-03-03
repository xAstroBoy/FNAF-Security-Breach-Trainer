/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function LightAreaChanger.LightAreaChanger_C.Change Area By Location
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULightAreaChanger_C::Change_Area_By_Location(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LightAreaChanger.LightAreaChanger_C.Change Area By Location");
		
		ULightAreaChanger_C_Change_Area_By_Location_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function LightAreaChanger.LightAreaChanger_C.Change Area By Player
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ULightAreaChanger_C::Change_Area_By_Player()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LightAreaChanger.LightAreaChanger_C.Change Area By Player");
		
		ULightAreaChanger_C_Change_Area_By_Player_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function LightAreaChanger.LightAreaChanger_C.On Area Change Finished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ULightAreaChanger_C::On_Area_Change_Finished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LightAreaChanger.LightAreaChanger_C.On Area Change Finished");
		
		ULightAreaChanger_C_On_Area_Change_Finished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function LightAreaChanger.LightAreaChanger_C.ExecuteUbergraph_LightAreaChanger
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULightAreaChanger_C::ExecuteUbergraph_LightAreaChanger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LightAreaChanger.LightAreaChanger_C.ExecuteUbergraph_LightAreaChanger");
		
		ULightAreaChanger_C_ExecuteUbergraph_LightAreaChanger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function LightAreaChanger.LightAreaChanger_C.OnFadeInFinished__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ULightAreaChanger_C::OnFadeInFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LightAreaChanger.LightAreaChanger_C.OnFadeInFinished__DelegateSignature");
		
		ULightAreaChanger_C_OnFadeInFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function LightAreaChanger.LightAreaChanger_C.OnAreaChangeFinished__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ULightAreaChanger_C::OnAreaChangeFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LightAreaChanger.LightAreaChanger_C.OnAreaChangeFinished__DelegateSignature");
		
		ULightAreaChanger_C_OnAreaChangeFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULightAreaChanger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightAreaChanger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LightAreaChanger.LightAreaChanger_C");
		return ptr;
	}

}


