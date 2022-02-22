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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void USunMan_Daycare_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.AnimGraph");
		
		USunMan_Daycare_ABP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.footstep
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void USunMan_Daycare_ABP_C::footstep()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.footstep");
		
		USunMan_Daycare_ABP_C_footstep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.LineTraceForOrientation
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        InSocketName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     StartOffset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     EndOffset                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		Engine_EDrawDebugTrace                             DrawDebugType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FHitResult>                          OutHits                                                    (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
	 */
	bool USunMan_Daycare_ABP_C::LineTraceForOrientation(const class FName& InSocketName, const struct FVector& StartOffset, const struct FVector& EndOffset, Engine_EDrawDebugTrace DrawDebugType, TArray<struct FHitResult>* OutHits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.LineTraceForOrientation");
		
		USunMan_Daycare_ABP_C_LineTraceForOrientation_Params params {};
		params.InSocketName = InSocketName;
		params.StartOffset = StartOffset;
		params.EndOffset = EndOffset;
		params.DrawDebugType = DrawDebugType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHits != nullptr)
			*OutHits = params.OutHits;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.LineTraceForIK
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        InSocketName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     StartOffset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     EndOffset                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		Engine_EDrawDebugTrace                             DrawDebugType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  OutHit                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	bool USunMan_Daycare_ABP_C::LineTraceForIK(const class FName& InSocketName, const struct FVector& StartOffset, const struct FVector& EndOffset, Engine_EDrawDebugTrace DrawDebugType, struct FHitResult* OutHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.LineTraceForIK");
		
		USunMan_Daycare_ABP_C_LineTraceForIK_Params params {};
		params.InSocketName = InSocketName;
		params.StartOffset = StartOffset;
		params.EndOffset = EndOffset;
		params.DrawDebugType = DrawDebugType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHit != nullptr)
			*OutHit = params.OutHit;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.OnNotifyEnd_DE44DD3745D008724B66B28647672BDD
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USunMan_Daycare_ABP_C::OnNotifyEnd_DE44DD3745D008724B66B28647672BDD(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.OnNotifyEnd_DE44DD3745D008724B66B28647672BDD");
		
		USunMan_Daycare_ABP_C_OnNotifyEnd_DE44DD3745D008724B66B28647672BDD_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.OnNotifyBegin_DE44DD3745D008724B66B28647672BDD
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USunMan_Daycare_ABP_C::OnNotifyBegin_DE44DD3745D008724B66B28647672BDD(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.OnNotifyBegin_DE44DD3745D008724B66B28647672BDD");
		
		USunMan_Daycare_ABP_C_OnNotifyBegin_DE44DD3745D008724B66B28647672BDD_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.OnInterrupted_DE44DD3745D008724B66B28647672BDD
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USunMan_Daycare_ABP_C::OnInterrupted_DE44DD3745D008724B66B28647672BDD(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.OnInterrupted_DE44DD3745D008724B66B28647672BDD");
		
		USunMan_Daycare_ABP_C_OnInterrupted_DE44DD3745D008724B66B28647672BDD_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.OnBlendOut_DE44DD3745D008724B66B28647672BDD
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USunMan_Daycare_ABP_C::OnBlendOut_DE44DD3745D008724B66B28647672BDD(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.OnBlendOut_DE44DD3745D008724B66B28647672BDD");
		
		USunMan_Daycare_ABP_C_OnBlendOut_DE44DD3745D008724B66B28647672BDD_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.OnCompleted_DE44DD3745D008724B66B28647672BDD
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USunMan_Daycare_ABP_C::OnCompleted_DE44DD3745D008724B66B28647672BDD(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.OnCompleted_DE44DD3745D008724B66B28647672BDD");
		
		USunMan_Daycare_ABP_C_OnCompleted_DE44DD3745D008724B66B28647672BDD_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.OnNotifyEnd_9782A5214C2B6830FC0EC9B462FC6F06
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USunMan_Daycare_ABP_C::OnNotifyEnd_9782A5214C2B6830FC0EC9B462FC6F06(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.OnNotifyEnd_9782A5214C2B6830FC0EC9B462FC6F06");
		
		USunMan_Daycare_ABP_C_OnNotifyEnd_9782A5214C2B6830FC0EC9B462FC6F06_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.OnNotifyBegin_9782A5214C2B6830FC0EC9B462FC6F06
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USunMan_Daycare_ABP_C::OnNotifyBegin_9782A5214C2B6830FC0EC9B462FC6F06(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.OnNotifyBegin_9782A5214C2B6830FC0EC9B462FC6F06");
		
		USunMan_Daycare_ABP_C_OnNotifyBegin_9782A5214C2B6830FC0EC9B462FC6F06_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.OnInterrupted_9782A5214C2B6830FC0EC9B462FC6F06
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USunMan_Daycare_ABP_C::OnInterrupted_9782A5214C2B6830FC0EC9B462FC6F06(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.OnInterrupted_9782A5214C2B6830FC0EC9B462FC6F06");
		
		USunMan_Daycare_ABP_C_OnInterrupted_9782A5214C2B6830FC0EC9B462FC6F06_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.OnBlendOut_9782A5214C2B6830FC0EC9B462FC6F06
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USunMan_Daycare_ABP_C::OnBlendOut_9782A5214C2B6830FC0EC9B462FC6F06(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.OnBlendOut_9782A5214C2B6830FC0EC9B462FC6F06");
		
		USunMan_Daycare_ABP_C_OnBlendOut_9782A5214C2B6830FC0EC9B462FC6F06_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.OnCompleted_9782A5214C2B6830FC0EC9B462FC6F06
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USunMan_Daycare_ABP_C::OnCompleted_9782A5214C2B6830FC0EC9B462FC6F06(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.OnCompleted_9782A5214C2B6830FC0EC9B462FC6F06");
		
		USunMan_Daycare_ABP_C_OnCompleted_9782A5214C2B6830FC0EC9B462FC6F06_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.Searching
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		fnaf9_EHideObjectType                              Hide_Type                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USunMan_Daycare_ABP_C::Searching(fnaf9_EHideObjectType Hide_Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.Searching");
		
		USunMan_Daycare_ABP_C_Searching_Params params {};
		params.Hide_Type = Hide_Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.SearchingDone
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USunMan_Daycare_ABP_C::SearchingDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.SearchingDone");
		
		USunMan_Daycare_ABP_C_SearchingDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.Open
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USunMan_Daycare_ABP_C::Open()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.Open");
		
		USunMan_Daycare_ABP_C_Open_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.OpenDone
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USunMan_Daycare_ABP_C::OpenDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.OpenDone");
		
		USunMan_Daycare_ABP_C_OpenDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.SetHeadAimTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     AimLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USunMan_Daycare_ABP_C::SetHeadAimTarget(const struct FVector& AimLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.SetHeadAimTarget");
		
		USunMan_Daycare_ABP_C_SetHeadAimTarget_Params params {};
		params.AimLocation = AimLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.StartScan
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USunMan_Daycare_ABP_C::StartScan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.StartScan");
		
		USunMan_Daycare_ABP_C_StartScan_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.CanRunEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanRun                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USunMan_Daycare_ABP_C::CanRunEvent(bool CanRun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.CanRunEvent");
		
		USunMan_Daycare_ABP_C_CanRunEvent_Params params {};
		params.CanRun = CanRun;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.Stun Event
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Is_Stunned                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USunMan_Daycare_ABP_C::Stun_Event(bool Is_Stunned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.Stun Event");
		
		USunMan_Daycare_ABP_C_Stun_Event_Params params {};
		params.Is_Stunned = Is_Stunned;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.CanRummageEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USunMan_Daycare_ABP_C::CanRummageEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.CanRummageEvent");
		
		USunMan_Daycare_ABP_C_CanRummageEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.IsFirstPersonEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USunMan_Daycare_ABP_C::IsFirstPersonEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.IsFirstPersonEvent");
		
		USunMan_Daycare_ABP_C_IsFirstPersonEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.IsNotFirstPersonEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USunMan_Daycare_ABP_C::IsNotFirstPersonEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.IsNotFirstPersonEvent");
		
		USunMan_Daycare_ABP_C_IsNotFirstPersonEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.RummagingDoneEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USunMan_Daycare_ABP_C::RummagingDoneEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.RummagingDoneEvent");
		
		USunMan_Daycare_ABP_C_RummagingDoneEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.OnAnimInstanceSwap
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USunMan_Daycare_ABP_C::OnAnimInstanceSwap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.OnAnimInstanceSwap");
		
		USunMan_Daycare_ABP_C_OnAnimInstanceSwap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.Breakthrough
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USunMan_Daycare_ABP_C::Breakthrough()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.Breakthrough");
		
		USunMan_Daycare_ABP_C_Breakthrough_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.ForceScanStates
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               OverrideScan                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanScan                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanScanL                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanScanR                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USunMan_Daycare_ABP_C::ForceScanStates(bool OverrideScan, bool CanScan, bool CanScanL, bool CanScanR)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.ForceScanStates");
		
		USunMan_Daycare_ABP_C_ForceScanStates_Params params {};
		params.OverrideScan = OverrideScan;
		params.CanScan = CanScan;
		params.CanScanL = CanScanL;
		params.CanScanR = CanScanR;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.JumpEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanJump                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USunMan_Daycare_ABP_C::JumpEvent(bool CanJump)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.JumpEvent");
		
		USunMan_Daycare_ABP_C_JumpEvent_Params params {};
		params.CanJump = CanJump;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.LandEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USunMan_Daycare_ABP_C::LandEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.LandEvent");
		
		USunMan_Daycare_ABP_C_LandEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.StopScan
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USunMan_Daycare_ABP_C::StopScan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.StopScan");
		
		USunMan_Daycare_ABP_C_StopScan_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.PoundDoorEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               PoundDoor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USunMan_Daycare_ABP_C::PoundDoorEvent(bool PoundDoor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.PoundDoorEvent");
		
		USunMan_Daycare_ABP_C_PoundDoorEvent_Params params {};
		params.PoundDoor = PoundDoor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.CanWaveEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanWave                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USunMan_Daycare_ABP_C::CanWaveEvent(bool CanWave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.CanWaveEvent");
		
		USunMan_Daycare_ABP_C_CanWaveEvent_Params params {};
		params.CanWave = CanWave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.IsSickEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               OnOff                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USunMan_Daycare_ABP_C::IsSickEvent(bool OnOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.IsSickEvent");
		
		USunMan_Daycare_ABP_C_IsSickEvent_Params params {};
		params.OnOff = OnOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.CanLieDownEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               OnOff                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USunMan_Daycare_ABP_C::CanLieDownEvent(bool OnOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.CanLieDownEvent");
		
		USunMan_Daycare_ABP_C_CanLieDownEvent_Params params {};
		params.OnOff = OnOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.CanLeapEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USunMan_Daycare_ABP_C::CanLeapEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.CanLeapEvent");
		
		USunMan_Daycare_ABP_C_CanLeapEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.EnterFreddyOverrideEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USunMan_Daycare_ABP_C::EnterFreddyOverrideEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.EnterFreddyOverrideEvent");
		
		USunMan_Daycare_ABP_C_EnterFreddyOverrideEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.ForceAnimOverride
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USunMan_Daycare_ABP_C::ForceAnimOverride(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.ForceAnimOverride");
		
		USunMan_Daycare_ABP_C_ForceAnimOverride_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.FreddyCorrupted
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USunMan_Daycare_ABP_C::FreddyCorrupted(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.FreddyCorrupted");
		
		USunMan_Daycare_ABP_C_FreddyCorrupted_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.RoxyCrying
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USunMan_Daycare_ABP_C::RoxyCrying(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.RoxyCrying");
		
		USunMan_Daycare_ABP_C_RoxyCrying_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.VoAnimEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAkAudioEvent*                               AK_Event                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USunMan_Daycare_ABP_C::VoAnimEvent(class UAkAudioEvent* AK_Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.VoAnimEvent");
		
		USunMan_Daycare_ABP_C_VoAnimEvent_Params params {};
		params.AK_Event = AK_Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.CanHackEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USunMan_Daycare_ABP_C::CanHackEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.CanHackEvent");
		
		USunMan_Daycare_ABP_C_CanHackEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.CanDieEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USunMan_Daycare_ABP_C::CanDieEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.CanDieEvent");
		
		USunMan_Daycare_ABP_C_CanDieEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.EndoSpawnInBowlingEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USunMan_Daycare_ABP_C::EndoSpawnInBowlingEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.EndoSpawnInBowlingEvent");
		
		USunMan_Daycare_ABP_C_EndoSpawnInBowlingEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.EndoBowlingCrawlEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USunMan_Daycare_ABP_C::EndoBowlingCrawlEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.EndoBowlingCrawlEvent");
		
		USunMan_Daycare_ABP_C_EndoBowlingCrawlEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.LeapLoopEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USunMan_Daycare_ABP_C::LeapLoopEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.LeapLoopEvent");
		
		USunMan_Daycare_ABP_C_LeapLoopEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.UpdateLeapInfo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     ActorLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Destination                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USunMan_Daycare_ABP_C::UpdateLeapInfo(const struct FVector& ActorLocation, const struct FVector& Destination, float Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.UpdateLeapInfo");
		
		USunMan_Daycare_ABP_C_UpdateLeapInfo_Params params {};
		params.ActorLocation = ActorLocation;
		params.Destination = Destination;
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.FreddyEndIdle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USunMan_Daycare_ABP_C::FreddyEndIdle(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.FreddyEndIdle");
		
		USunMan_Daycare_ABP_C_FreddyEndIdle_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.CutSceneSpineBlender
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ULevelSequencePlayer*                        Sequence                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USunMan_Daycare_ABP_C::CutSceneSpineBlender(bool Off, class ULevelSequencePlayer* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.CutSceneSpineBlender");
		
		USunMan_Daycare_ABP_C_CutSceneSpineBlender_Params params {};
		params.Off = Off;
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.CutsceneGrateEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ULevelSequencePlayer*                        SequencePlayer                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USunMan_Daycare_ABP_C::CutsceneGrateEvent(class ULevelSequencePlayer* SequencePlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.CutsceneGrateEvent");
		
		USunMan_Daycare_ABP_C_CutsceneGrateEvent_Params params {};
		params.SequencePlayer = SequencePlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.Spotlight Aim Actor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      AimActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USunMan_Daycare_ABP_C::Spotlight_Aim_Actor(class AActor* AimActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.Spotlight Aim Actor");
		
		USunMan_Daycare_ABP_C_Spotlight_Aim_Actor_Params params {};
		params.AimActor = AimActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.TurnEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              TurnDegrees                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USunMan_Daycare_ABP_C::TurnEvent(float TurnDegrees)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.TurnEvent");
		
		USunMan_Daycare_ABP_C_TurnEvent_Params params {};
		params.TurnDegrees = TurnDegrees;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.HeadAimEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               OnOff                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USunMan_Daycare_ABP_C::HeadAimEvent(bool OnOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.HeadAimEvent");
		
		USunMan_Daycare_ABP_C_HeadAimEvent_Params params {};
		params.OnOff = OnOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USunMan_Daycare_ABP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.BlueprintUpdateAnimation");
		
		USunMan_Daycare_ABP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.IsBlockingPlayer_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isBlockingPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USunMan_Daycare_ABP_C::IsBlockingPlayer_Event(bool isBlockingPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.IsBlockingPlayer_Event");
		
		USunMan_Daycare_ABP_C_IsBlockingPlayer_Event_Params params {};
		params.isBlockingPlayer = isBlockingPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.CanJumpscareEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USunMan_Daycare_ABP_C::CanJumpscareEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.CanJumpscareEvent");
		
		USunMan_Daycare_ABP_C_CanJumpscareEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.BlueprintBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void USunMan_Daycare_ABP_C::BlueprintBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.BlueprintBeginPlay");
		
		USunMan_Daycare_ABP_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.AnimNotify_QuickHeadspin
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USunMan_Daycare_ABP_C::AnimNotify_QuickHeadspin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.AnimNotify_QuickHeadspin");
		
		USunMan_Daycare_ABP_C_AnimNotify_QuickHeadspin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.AnimNotify_L_Foot_Down
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USunMan_Daycare_ABP_C::AnimNotify_L_Foot_Down()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.AnimNotify_L_Foot_Down");
		
		USunMan_Daycare_ABP_C_AnimNotify_L_Foot_Down_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.AnimNotify_R_Foot_Down
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USunMan_Daycare_ABP_C::AnimNotify_R_Foot_Down()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.AnimNotify_R_Foot_Down");
		
		USunMan_Daycare_ABP_C_AnimNotify_R_Foot_Down_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.isCarryingPlayerEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CarryingPlayer                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USunMan_Daycare_ABP_C::isCarryingPlayerEvent(bool CarryingPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.isCarryingPlayerEvent");
		
		USunMan_Daycare_ABP_C_isCarryingPlayerEvent_Params params {};
		params.CarryingPlayer = CarryingPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.Exit_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USunMan_Daycare_ABP_C::Exit_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.Exit_Event");
		
		USunMan_Daycare_ABP_C_Exit_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.ExecuteUbergraph_SunMan_Daycare_ABP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USunMan_Daycare_ABP_C::ExecuteUbergraph_SunMan_Daycare_ABP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.ExecuteUbergraph_SunMan_Daycare_ABP");
		
		USunMan_Daycare_ABP_C_ExecuteUbergraph_SunMan_Daycare_ABP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USunMan_Daycare_ABP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USunMan_Daycare_ABP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass SunMan_Daycare_ABP.SunMan_Daycare_ABP_C");
		return ptr;
	}

}


