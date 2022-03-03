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
	 * 		Name   -> Function CameraRenderTargetManager.CameraRenderTargetManager_C.GetPooledRenderTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ACamera_C*                                   Camera                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCameraRenderTargetObject_C*                 RenderTarget                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACameraRenderTargetManager_C::GetPooledRenderTarget(class ACamera_C* Camera, class UCameraRenderTargetObject_C** RenderTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraRenderTargetManager.CameraRenderTargetManager_C.GetPooledRenderTarget");
		
		ACameraRenderTargetManager_C_GetPooledRenderTarget_Params params {};
		params.Camera = Camera;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RenderTarget != nullptr)
			*RenderTarget = params.RenderTarget;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function CameraRenderTargetManager.CameraRenderTargetManager_C.CreateRenderTargetPool
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACameraRenderTargetManager_C::CreateRenderTargetPool()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraRenderTargetManager.CameraRenderTargetManager_C.CreateRenderTargetPool");
		
		ACameraRenderTargetManager_C_CreateRenderTargetPool_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function CameraRenderTargetManager.CameraRenderTargetManager_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ACameraRenderTargetManager_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraRenderTargetManager.CameraRenderTargetManager_C.ReceiveBeginPlay");
		
		ACameraRenderTargetManager_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function CameraRenderTargetManager.CameraRenderTargetManager_C.ExecuteUbergraph_CameraRenderTargetManager
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACameraRenderTargetManager_C::ExecuteUbergraph_CameraRenderTargetManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraRenderTargetManager.CameraRenderTargetManager_C.ExecuteUbergraph_CameraRenderTargetManager");
		
		ACameraRenderTargetManager_C_ExecuteUbergraph_CameraRenderTargetManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ACameraRenderTargetManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACameraRenderTargetManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CameraRenderTargetManager.CameraRenderTargetManager_C");
		return ptr;
	}

}


