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
	 * 		Name   -> Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.Bind Texture Target
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture*                                    TextureTarget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityScreenDisplayBase_C::BindTextureTarget(class UTexture* TextureTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.Bind Texture Target");
		
		ASecurityScreenDisplayBase_C_BindTextureTarget_Params params {};
		params.TextureTarget = TextureTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.Find Camera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UTextureRenderTarget2D*                      TextureTarget                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityScreenDisplayBase_C::FindCamera(bool* IsValid, class UTextureRenderTarget2D** TextureTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.Find Camera");
		
		ASecurityScreenDisplayBase_C_FindCamera_Params params {};
		
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
	 * 		Name   -> Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.ReceiveBeginPlay
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.Set To Static
	 * 		Flags  -> ()
	 */
	void ASecurityScreenDisplayBase_C::SetToStatic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.Set To Static");
		
		ASecurityScreenDisplayBase_C_SetToStatic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.Set to Texture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               FindCamera                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UTexture*                                    TextureTarget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityScreenDisplayBase_C::SettoTexture(bool FindCamera, class UTexture* TextureTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.Set to Texture");
		
		ASecurityScreenDisplayBase_C_SettoTexture_Params params {};
		params.FindCamera = FindCamera;
		params.TextureTarget = TextureTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.SetToWidget
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.WidgetToggle
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.SetToInstructionCard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_InstructionCard_Type                             Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityScreenDisplayBase_C::SetToInstructionCard(E_InstructionCard_Type Type)
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.Begin Render
	 * 		Flags  -> ()
	 */
	void ASecurityScreenDisplayBase_C::BeginRender()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.Begin Render");
		
		ASecurityScreenDisplayBase_C_BeginRender_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.End Render
	 * 		Flags  -> ()
	 */
	void ASecurityScreenDisplayBase_C::EndRender()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.End Render");
		
		ASecurityScreenDisplayBase_C_EndRender_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityScreenDisplayBase_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.PlayVideo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCinematicCutscene                          Video                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UMediaPlayer*                                MediaPlayer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ElementIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityScreenDisplayBase_C::PlayVideo(const struct FCinematicCutscene& Video, class UMediaPlayer* MediaPlayer, int32_t ElementIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.PlayVideo");
		
		ASecurityScreenDisplayBase_C_PlayVideo_Params params {};
		params.Video = Video;
		params.MediaPlayer = MediaPlayer;
		params.ElementIndex = ElementIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.Stop Video
	 * 		Flags  -> ()
	 */
	void ASecurityScreenDisplayBase_C::StopVideo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.Stop Video");
		
		ASecurityScreenDisplayBase_C_StopVideo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.ExecuteUbergraph_SecurityScreenDisplayBase
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.OnScreenActive__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.OnStopVideo__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASecurityScreenDisplayBase_C.StaticClass
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


