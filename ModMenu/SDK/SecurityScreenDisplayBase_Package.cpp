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
	 * 		Name   -> Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.Bind Texture Target
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture*                                    Texture_Target                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityScreenDisplayBase_C::Bind_Texture_Target(class UTexture* Texture_Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.Bind Texture Target");
		
		ASecurityScreenDisplayBase_C_Bind_Texture_Target_Params params {};
		params.Texture_Target = Texture_Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.Find Camera
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Is_Valid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UTextureRenderTarget2D*                      Texture_Target                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityScreenDisplayBase_C::Find_Camera(bool* Is_Valid, class UTextureRenderTarget2D** Texture_Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.Find Camera");
		
		ASecurityScreenDisplayBase_C_Find_Camera_Params params {};
		
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
	 * 		Name   -> Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ASecurityScreenDisplayBase_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.ReceiveBeginPlay");
		
		ASecurityScreenDisplayBase_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.Set To Static
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASecurityScreenDisplayBase_C::Set_To_Static()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.Set To Static");
		
		ASecurityScreenDisplayBase_C_Set_To_Static_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.Set to Texture
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Find_Camera                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UTexture*                                    Texture_Target                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityScreenDisplayBase_C::Set_to_Texture(bool Find_Camera, class UTexture* Texture_Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.Set to Texture");
		
		ASecurityScreenDisplayBase_C_Set_to_Texture_Params params {};
		params.Find_Camera = Find_Camera;
		params.Texture_Target = Texture_Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.SetToWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityScreenDisplayBase_C::SetToWidget(class UClass* Class)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.SetToWidget");
		
		ASecurityScreenDisplayBase_C_SetToWidget_Params params {};
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.WidgetToggle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASecurityScreenDisplayBase_C::WidgetToggle(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.WidgetToggle");
		
		ASecurityScreenDisplayBase_C_WidgetToggle_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.SetToInstructionCard
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_InstructionCard_Type_E_InstructionCard_Type      Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityScreenDisplayBase_C::SetToInstructionCard(E_InstructionCard_Type_E_InstructionCard_Type Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.SetToInstructionCard");
		
		ASecurityScreenDisplayBase_C_SetToInstructionCard_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.Begin Render
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASecurityScreenDisplayBase_C::Begin_Render()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.Begin Render");
		
		ASecurityScreenDisplayBase_C_Begin_Render_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.End Render
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASecurityScreenDisplayBase_C::End_Render()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.End Render");
		
		ASecurityScreenDisplayBase_C_End_Render_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		Engine_EEndPlayReason                              EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityScreenDisplayBase_C::ReceiveEndPlay(Engine_EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.ReceiveEndPlay");
		
		ASecurityScreenDisplayBase_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.PlayVideo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCinematicCutscene                          Video                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UMediaPlayer*                                MediaPlayer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Element_Index                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityScreenDisplayBase_C::PlayVideo(const struct FCinematicCutscene& Video, class UMediaPlayer* MediaPlayer, int32_t Element_Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.PlayVideo");
		
		ASecurityScreenDisplayBase_C_PlayVideo_Params params {};
		params.Video = Video;
		params.MediaPlayer = MediaPlayer;
		params.Element_Index = Element_Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.Stop Video
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASecurityScreenDisplayBase_C::Stop_Video()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.Stop Video");
		
		ASecurityScreenDisplayBase_C_Stop_Video_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.ExecuteUbergraph_SecurityScreenDisplayBase
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityScreenDisplayBase_C::ExecuteUbergraph_SecurityScreenDisplayBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.ExecuteUbergraph_SecurityScreenDisplayBase");
		
		ASecurityScreenDisplayBase_C_ExecuteUbergraph_SecurityScreenDisplayBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.OnScreenActive__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ASecurityScreenDisplayBase_C::OnScreenActive__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.OnScreenActive__DelegateSignature");
		
		ASecurityScreenDisplayBase_C_OnScreenActive__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.OnStopVideo__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ASecurityScreenDisplayBase_C::OnStopVideo__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.OnStopVideo__DelegateSignature");
		
		ASecurityScreenDisplayBase_C_OnStopVideo__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ASecurityScreenDisplayBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASecurityScreenDisplayBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SecurityScreenDisplayBase.SecurityScreenDisplayBase_C");
		return ptr;
	}

}


