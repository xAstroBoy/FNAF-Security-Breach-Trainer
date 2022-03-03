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
	 * 		Name   -> Function SecurityScreen_Timer.SecurityScreen_Timer_C.GetTimeAsPercentage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ASecurityScreen_Timer_C::GetTimeAsPercentage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityScreen_Timer.SecurityScreen_Timer_C.GetTimeAsPercentage");
		
		ASecurityScreen_Timer_C_GetTimeAsPercentage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function SecurityScreen_Timer.SecurityScreen_Timer_C.GetTimeAsText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	class FText ASecurityScreen_Timer_C::GetTimeAsText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityScreen_Timer.SecurityScreen_Timer_C.GetTimeAsText");
		
		ASecurityScreen_Timer_C_GetTimeAsText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function SecurityScreen_Timer.SecurityScreen_Timer_C.Bind Texture Target
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture*                                    Texture_Target                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityScreen_Timer_C::Bind_Texture_Target(class UTexture* Texture_Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityScreen_Timer.SecurityScreen_Timer_C.Bind Texture Target");
		
		ASecurityScreen_Timer_C_Bind_Texture_Target_Params params {};
		params.Texture_Target = Texture_Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function SecurityScreen_Timer.SecurityScreen_Timer_C.Find Camera
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Is_Valid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UTextureRenderTarget*                        Texture_Target                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityScreen_Timer_C::Find_Camera(bool* Is_Valid, class UTextureRenderTarget** Texture_Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityScreen_Timer.SecurityScreen_Timer_C.Find Camera");
		
		ASecurityScreen_Timer_C_Find_Camera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Is_Valid != nullptr)
			*Is_Valid = params.Is_Valid;
		if (Texture_Target != nullptr)
			*Texture_Target = params.Texture_Target;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function SecurityScreen_Timer.SecurityScreen_Timer_C.SetToWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityScreen_Timer_C::SetToWidget(class UClass* Class)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityScreen_Timer.SecurityScreen_Timer_C.SetToWidget");
		
		ASecurityScreen_Timer_C_SetToWidget_Params params {};
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function SecurityScreen_Timer.SecurityScreen_Timer_C.WidgetToggle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASecurityScreen_Timer_C::WidgetToggle(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityScreen_Timer.SecurityScreen_Timer_C.WidgetToggle");
		
		ASecurityScreen_Timer_C_WidgetToggle_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function SecurityScreen_Timer.SecurityScreen_Timer_C.SetToInstructionCard
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_InstructionCard_Type_E_InstructionCard_Type      Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityScreen_Timer_C::SetToInstructionCard(E_InstructionCard_Type_E_InstructionCard_Type Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityScreen_Timer.SecurityScreen_Timer_C.SetToInstructionCard");
		
		ASecurityScreen_Timer_C_SetToInstructionCard_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function SecurityScreen_Timer.SecurityScreen_Timer_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ASecurityScreen_Timer_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityScreen_Timer.SecurityScreen_Timer_C.ReceiveBeginPlay");
		
		ASecurityScreen_Timer_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function SecurityScreen_Timer.SecurityScreen_Timer_C.Set To Static
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASecurityScreen_Timer_C::Set_To_Static()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityScreen_Timer.SecurityScreen_Timer_C.Set To Static");
		
		ASecurityScreen_Timer_C_Set_To_Static_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function SecurityScreen_Timer.SecurityScreen_Timer_C.MakeTimersVisible
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASecurityScreen_Timer_C::MakeTimersVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityScreen_Timer.SecurityScreen_Timer_C.MakeTimersVisible");
		
		ASecurityScreen_Timer_C_MakeTimersVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function SecurityScreen_Timer.SecurityScreen_Timer_C.ExecuteUbergraph_SecurityScreen_Timer
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityScreen_Timer_C::ExecuteUbergraph_SecurityScreen_Timer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityScreen_Timer.SecurityScreen_Timer_C.ExecuteUbergraph_SecurityScreen_Timer");
		
		ASecurityScreen_Timer_C_ExecuteUbergraph_SecurityScreen_Timer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function SecurityScreen_Timer.SecurityScreen_Timer_C.OnStopVideo__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ASecurityScreen_Timer_C::OnStopVideo__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityScreen_Timer.SecurityScreen_Timer_C.OnStopVideo__DelegateSignature");
		
		ASecurityScreen_Timer_C_OnStopVideo__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function SecurityScreen_Timer.SecurityScreen_Timer_C.OnScreenActive__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASecurityScreenDisplay_C*                    Screen                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityScreen_Timer_C::OnScreenActive__DelegateSignature(class ASecurityScreenDisplay_C* Screen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityScreen_Timer.SecurityScreen_Timer_C.OnScreenActive__DelegateSignature");
		
		ASecurityScreen_Timer_C_OnScreenActive__DelegateSignature_Params params {};
		params.Screen = Screen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ASecurityScreen_Timer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASecurityScreen_Timer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SecurityScreen_Timer.SecurityScreen_Timer_C");
		return ptr;
	}

}


