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
//		Name   -> Function AnimNotify_AkLoopingAudio.AnimNotify_AkLoopingAudio_C.IsListenerInRange
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class USceneComponent*                             SceneComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              MaxDistance                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Proceed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAnimNotify_AkLoopingAudio_C::IsListenerInRange(class USceneComponent* SceneComp, float MaxDistance, bool* Proceed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AnimNotify_AkLoopingAudio.AnimNotify_AkLoopingAudio_C.IsListenerInRange");

	UAnimNotify_AkLoopingAudio_C_IsListenerInRange_Params params {};
	params.SceneComp = SceneComp;
	params.MaxDistance = MaxDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Proceed != nullptr)
		*Proceed = params.Proceed;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function AnimNotify_AkLoopingAudio.AnimNotify_AkLoopingAudio_C.On Owner Destroyed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAnimNotify_AkLoopingAudio_C::On_Owner_Destroyed(class AActor* DestroyedActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AnimNotify_AkLoopingAudio.AnimNotify_AkLoopingAudio_C.On Owner Destroyed");

	UAnimNotify_AkLoopingAudio_C_On_Owner_Destroyed_Params params {};
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function AnimNotify_AkLoopingAudio.AnimNotify_AkLoopingAudio_C.Event Callback
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		AkAudio_EAkCallbackType                            CallbackType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UAkCallbackInfo*                             CallbackInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAnimNotify_AkLoopingAudio_C::Event_Callback(AkAudio_EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AnimNotify_AkLoopingAudio.AnimNotify_AkLoopingAudio_C.Event Callback");

	UAnimNotify_AkLoopingAudio_C_Event_Callback_Params params {};
	params.CallbackType = CallbackType;
	params.CallbackInfo = CallbackInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function AnimNotify_AkLoopingAudio.AnimNotify_AkLoopingAudio_C.GetNotifyName
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
struct FString UAnimNotify_AkLoopingAudio_C::GetNotifyName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AnimNotify_AkLoopingAudio.AnimNotify_AkLoopingAudio_C.GetNotifyName");

	UAnimNotify_AkLoopingAudio_C_GetNotifyName_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function AnimNotify_AkLoopingAudio.AnimNotify_AkLoopingAudio_C.Received_NotifyEnd
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		class USkeletalMeshComponent*                      MeshComp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UAnimSequenceBase*                           Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAnimNotify_AkLoopingAudio_C::Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AnimNotify_AkLoopingAudio.AnimNotify_AkLoopingAudio_C.Received_NotifyEnd");

	UAnimNotify_AkLoopingAudio_C_Received_NotifyEnd_Params params {};
	params.MeshComp = MeshComp;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function AnimNotify_AkLoopingAudio.AnimNotify_AkLoopingAudio_C.Received_NotifyBegin
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		class USkeletalMeshComponent*                      MeshComp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UAnimSequenceBase*                           Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              TotalDuration                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAnimNotify_AkLoopingAudio_C::Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AnimNotify_AkLoopingAudio.AnimNotify_AkLoopingAudio_C.Received_NotifyBegin");

	UAnimNotify_AkLoopingAudio_C_Received_NotifyBegin_Params params {};
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.TotalDuration = TotalDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
