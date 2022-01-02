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
//		Name   -> Function CameraRenderTargetManager.CameraRenderTargetManager_C.GetPooledRenderTarget
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ACamera_C*                                   Camera                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UCameraRenderTargetObject_C*                 RenderTarget                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACameraRenderTargetManager_C::GetPooledRenderTarget(class ACamera_C* Camera, class UCameraRenderTargetObject_C** RenderTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CameraRenderTargetManager.CameraRenderTargetManager_C.GetPooledRenderTarget");

	ACameraRenderTargetManager_C_GetPooledRenderTarget_Params params {};
	params.Camera = Camera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RenderTarget != nullptr)
		*RenderTarget = params.RenderTarget;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CameraRenderTargetManager.CameraRenderTargetManager_C.CreateRenderTargetPool
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ACameraRenderTargetManager_C::CreateRenderTargetPool()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CameraRenderTargetManager.CameraRenderTargetManager_C.CreateRenderTargetPool");

	ACameraRenderTargetManager_C_CreateRenderTargetPool_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CameraRenderTargetManager.CameraRenderTargetManager_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ACameraRenderTargetManager_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CameraRenderTargetManager.CameraRenderTargetManager_C.ReceiveBeginPlay");

	ACameraRenderTargetManager_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CameraRenderTargetManager.CameraRenderTargetManager_C.ExecuteUbergraph_CameraRenderTargetManager
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACameraRenderTargetManager_C::ExecuteUbergraph_CameraRenderTargetManager(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CameraRenderTargetManager.CameraRenderTargetManager_C.ExecuteUbergraph_CameraRenderTargetManager");

	ACameraRenderTargetManager_C_ExecuteUbergraph_CameraRenderTargetManager_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
