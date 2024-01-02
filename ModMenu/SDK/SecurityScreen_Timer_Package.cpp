/**
 * Name: FNAFSB
 * Version: 1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SecurityScreen_Timer.SecurityScreen_Timer_C.GetTimeAsPercentage
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SecurityScreen_Timer.SecurityScreen_Timer_C.GetTimeAsText
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SecurityScreen_Timer.SecurityScreen_Timer_C.Bind Texture Target
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture*                                    TextureTarget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityScreen_Timer_C::BindTextureTarget(class UTexture* TextureTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityScreen_Timer.SecurityScreen_Timer_C.Bind Texture Target");
		
		ASecurityScreen_Timer_C_BindTextureTarget_Params params {};
		params.TextureTarget = TextureTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SecurityScreen_Timer.SecurityScreen_Timer_C.Find Camera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UTextureRenderTarget*                        TextureTarget                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityScreen_Timer_C::FindCamera(bool* IsValid, class UTextureRenderTarget** TextureTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityScreen_Timer.SecurityScreen_Timer_C.Find Camera");
		
		ASecurityScreen_Timer_C_FindCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		if (TextureTarget != nullptr)
			*TextureTarget = params.TextureTarget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SecurityScreen_Timer.SecurityScreen_Timer_C.SetToWidget
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SecurityScreen_Timer.SecurityScreen_Timer_C.WidgetToggle
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SecurityScreen_Timer.SecurityScreen_Timer_C.SetToInstructionCard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_InstructionCard_Type                             Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityScreen_Timer_C::SetToInstructionCard(E_InstructionCard_Type Type)
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SecurityScreen_Timer.SecurityScreen_Timer_C.ReceiveBeginPlay
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SecurityScreen_Timer.SecurityScreen_Timer_C.Set To Static
	 * 		Flags  -> ()
	 */
	void ASecurityScreen_Timer_C::SetToStatic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityScreen_Timer.SecurityScreen_Timer_C.Set To Static");
		
		ASecurityScreen_Timer_C_SetToStatic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SecurityScreen_Timer.SecurityScreen_Timer_C.MakeTimersVisible
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SecurityScreen_Timer.SecurityScreen_Timer_C.ExecuteUbergraph_SecurityScreen_Timer
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SecurityScreen_Timer.SecurityScreen_Timer_C.OnStopVideo__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SecurityScreen_Timer.SecurityScreen_Timer_C.OnScreenActive__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASecurityScreenDisplay_C*                    SCREEN                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityScreen_Timer_C::OnScreenActive__DelegateSignature(class ASecurityScreenDisplay_C* SCREEN)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityScreen_Timer.SecurityScreen_Timer_C.OnScreenActive__DelegateSignature");
		
		ASecurityScreen_Timer_C_OnScreenActive__DelegateSignature_Params params {};
		params.SCREEN = SCREEN;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASecurityScreen_Timer_C.StaticClass
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


