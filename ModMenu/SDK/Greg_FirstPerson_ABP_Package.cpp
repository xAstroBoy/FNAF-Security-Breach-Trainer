/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "Greg_FirstPerson_ABP_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UGreg_FirstPerson_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.AnimGraph");
		
		UGreg_FirstPerson_ABP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.OnNotifyEnd_D232091C479C4B482C932B8A8823732D
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGreg_FirstPerson_ABP_C::OnNotifyEnd_D232091C479C4B482C932B8A8823732D(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.OnNotifyEnd_D232091C479C4B482C932B8A8823732D");
		
		UGreg_FirstPerson_ABP_C_OnNotifyEnd_D232091C479C4B482C932B8A8823732D_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.OnNotifyBegin_D232091C479C4B482C932B8A8823732D
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGreg_FirstPerson_ABP_C::OnNotifyBegin_D232091C479C4B482C932B8A8823732D(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.OnNotifyBegin_D232091C479C4B482C932B8A8823732D");
		
		UGreg_FirstPerson_ABP_C_OnNotifyBegin_D232091C479C4B482C932B8A8823732D_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.OnInterrupted_D232091C479C4B482C932B8A8823732D
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGreg_FirstPerson_ABP_C::OnInterrupted_D232091C479C4B482C932B8A8823732D(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.OnInterrupted_D232091C479C4B482C932B8A8823732D");
		
		UGreg_FirstPerson_ABP_C_OnInterrupted_D232091C479C4B482C932B8A8823732D_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.OnBlendOut_D232091C479C4B482C932B8A8823732D
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGreg_FirstPerson_ABP_C::OnBlendOut_D232091C479C4B482C932B8A8823732D(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.OnBlendOut_D232091C479C4B482C932B8A8823732D");
		
		UGreg_FirstPerson_ABP_C_OnBlendOut_D232091C479C4B482C932B8A8823732D_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.OnCompleted_D232091C479C4B482C932B8A8823732D
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGreg_FirstPerson_ABP_C::OnCompleted_D232091C479C4B482C932B8A8823732D(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.OnCompleted_D232091C479C4B482C932B8A8823732D");
		
		UGreg_FirstPerson_ABP_C_OnCompleted_D232091C479C4B482C932B8A8823732D_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.OnNotifyEnd_8D2B4437468C1DB561D00F804E4F270D
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGreg_FirstPerson_ABP_C::OnNotifyEnd_8D2B4437468C1DB561D00F804E4F270D(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.OnNotifyEnd_8D2B4437468C1DB561D00F804E4F270D");
		
		UGreg_FirstPerson_ABP_C_OnNotifyEnd_8D2B4437468C1DB561D00F804E4F270D_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.OnNotifyBegin_8D2B4437468C1DB561D00F804E4F270D
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGreg_FirstPerson_ABP_C::OnNotifyBegin_8D2B4437468C1DB561D00F804E4F270D(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.OnNotifyBegin_8D2B4437468C1DB561D00F804E4F270D");
		
		UGreg_FirstPerson_ABP_C_OnNotifyBegin_8D2B4437468C1DB561D00F804E4F270D_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.OnInterrupted_8D2B4437468C1DB561D00F804E4F270D
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGreg_FirstPerson_ABP_C::OnInterrupted_8D2B4437468C1DB561D00F804E4F270D(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.OnInterrupted_8D2B4437468C1DB561D00F804E4F270D");
		
		UGreg_FirstPerson_ABP_C_OnInterrupted_8D2B4437468C1DB561D00F804E4F270D_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.OnBlendOut_8D2B4437468C1DB561D00F804E4F270D
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGreg_FirstPerson_ABP_C::OnBlendOut_8D2B4437468C1DB561D00F804E4F270D(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.OnBlendOut_8D2B4437468C1DB561D00F804E4F270D");
		
		UGreg_FirstPerson_ABP_C_OnBlendOut_8D2B4437468C1DB561D00F804E4F270D_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.OnCompleted_8D2B4437468C1DB561D00F804E4F270D
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGreg_FirstPerson_ABP_C::OnCompleted_8D2B4437468C1DB561D00F804E4F270D(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.OnCompleted_8D2B4437468C1DB561D00F804E4F270D");
		
		UGreg_FirstPerson_ABP_C_OnCompleted_8D2B4437468C1DB561D00F804E4F270D_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.OnNotifyEnd_1905C0E149E72E0A807FA2837C37C760
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGreg_FirstPerson_ABP_C::OnNotifyEnd_1905C0E149E72E0A807FA2837C37C760(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.OnNotifyEnd_1905C0E149E72E0A807FA2837C37C760");
		
		UGreg_FirstPerson_ABP_C_OnNotifyEnd_1905C0E149E72E0A807FA2837C37C760_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.OnNotifyBegin_1905C0E149E72E0A807FA2837C37C760
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGreg_FirstPerson_ABP_C::OnNotifyBegin_1905C0E149E72E0A807FA2837C37C760(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.OnNotifyBegin_1905C0E149E72E0A807FA2837C37C760");
		
		UGreg_FirstPerson_ABP_C_OnNotifyBegin_1905C0E149E72E0A807FA2837C37C760_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.OnInterrupted_1905C0E149E72E0A807FA2837C37C760
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGreg_FirstPerson_ABP_C::OnInterrupted_1905C0E149E72E0A807FA2837C37C760(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.OnInterrupted_1905C0E149E72E0A807FA2837C37C760");
		
		UGreg_FirstPerson_ABP_C_OnInterrupted_1905C0E149E72E0A807FA2837C37C760_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.OnBlendOut_1905C0E149E72E0A807FA2837C37C760
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGreg_FirstPerson_ABP_C::OnBlendOut_1905C0E149E72E0A807FA2837C37C760(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.OnBlendOut_1905C0E149E72E0A807FA2837C37C760");
		
		UGreg_FirstPerson_ABP_C_OnBlendOut_1905C0E149E72E0A807FA2837C37C760_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.OnCompleted_1905C0E149E72E0A807FA2837C37C760
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGreg_FirstPerson_ABP_C::OnCompleted_1905C0E149E72E0A807FA2837C37C760(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.OnCompleted_1905C0E149E72E0A807FA2837C37C760");
		
		UGreg_FirstPerson_ABP_C_OnCompleted_1905C0E149E72E0A807FA2837C37C760_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Greg_FirstPerson_ABP_AnimGraphNode_TransitionResult_9BFBF4AA4EF8791FF9DE388807B07B4A
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UGreg_FirstPerson_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Greg_FirstPerson_ABP_AnimGraphNode_TransitionResult_9BFBF4AA4EF8791FF9DE388807B07B4A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Greg_FirstPerson_ABP_AnimGraphNode_TransitionResult_9BFBF4AA4EF8791FF9DE388807B07B4A");
		
		UGreg_FirstPerson_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Greg_FirstPerson_ABP_AnimGraphNode_TransitionResult_9BFBF4AA4EF8791FF9DE388807B07B4A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Greg_FirstPerson_ABP_AnimGraphNode_TransitionResult_5AFCD48643B368CE6FA1D3AF4C68FED8
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UGreg_FirstPerson_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Greg_FirstPerson_ABP_AnimGraphNode_TransitionResult_5AFCD48643B368CE6FA1D3AF4C68FED8()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Greg_FirstPerson_ABP_AnimGraphNode_TransitionResult_5AFCD48643B368CE6FA1D3AF4C68FED8");
		
		UGreg_FirstPerson_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Greg_FirstPerson_ABP_AnimGraphNode_TransitionResult_5AFCD48643B368CE6FA1D3AF4C68FED8_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGreg_FirstPerson_ABP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.BlueprintUpdateAnimation");
		
		UGreg_FirstPerson_ABP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.ChangeEquipped
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AEquippable_C*                               NewEquip                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGreg_FirstPerson_ABP_C::ChangeEquipped(class AEquippable_C* NewEquip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.ChangeEquipped");
		
		UGreg_FirstPerson_ABP_C_ChangeEquipped_Params params {};
		params.NewEquip = NewEquip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.PutAway
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGreg_FirstPerson_ABP_C::PutAway()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.PutAway");
		
		UGreg_FirstPerson_ABP_C_PutAway_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.PropSwap
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Flashlight                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGreg_FirstPerson_ABP_C::PropSwap(bool Flashlight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.PropSwap");
		
		UGreg_FirstPerson_ABP_C_PropSwap_Params params {};
		params.Flashlight = Flashlight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.SetItemDown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGreg_FirstPerson_ABP_C::SetItemDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.SetItemDown");
		
		UGreg_FirstPerson_ABP_C_SetItemDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.PrimaryActionAnimEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGreg_FirstPerson_ABP_C::PrimaryActionAnimEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.PrimaryActionAnimEvent");
		
		UGreg_FirstPerson_ABP_C_PrimaryActionAnimEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.FazWatchEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Reset                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGreg_FirstPerson_ABP_C::FazWatchEvent(bool Reset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.FazWatchEvent");
		
		UGreg_FirstPerson_ABP_C_FazWatchEvent_Params params {};
		params.Reset = Reset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.BlueprintBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UGreg_FirstPerson_ABP_C::BlueprintBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.BlueprintBeginPlay");
		
		UGreg_FirstPerson_ABP_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.ExecuteUbergraph_Greg_FirstPerson_ABP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGreg_FirstPerson_ABP_C::ExecuteUbergraph_Greg_FirstPerson_ABP(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.ExecuteUbergraph_Greg_FirstPerson_ABP");
		
		UGreg_FirstPerson_ABP_C_ExecuteUbergraph_Greg_FirstPerson_ABP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UGreg_FirstPerson_ABP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGreg_FirstPerson_ABP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C");
		return ptr;
	}

}


