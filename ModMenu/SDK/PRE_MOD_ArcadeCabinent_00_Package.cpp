/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "PRE_MOD_ArcadeCabinent_00_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_MOD_ArcadeCabinent_00.PRE_MOD_ArcadeCabinent_00_C.ScreenSwitcherFunction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APRE_MOD_ArcadeCabinent_00_C::ScreenSwitcherFunction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_MOD_ArcadeCabinent_00.PRE_MOD_ArcadeCabinent_00_C.ScreenSwitcherFunction");
		
		APRE_MOD_ArcadeCabinent_00_C_ScreenSwitcherFunction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_MOD_ArcadeCabinent_00.PRE_MOD_ArcadeCabinent_00_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APRE_MOD_ArcadeCabinent_00_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_MOD_ArcadeCabinent_00.PRE_MOD_ArcadeCabinent_00_C.UserConstructionScript");
		
		APRE_MOD_ArcadeCabinent_00_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_MOD_ArcadeCabinent_00.PRE_MOD_ArcadeCabinent_00_C.Flicer__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void APRE_MOD_ArcadeCabinent_00_C::Flicer__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_MOD_ArcadeCabinent_00.PRE_MOD_ArcadeCabinent_00_C.Flicer__FinishedFunc");
		
		APRE_MOD_ArcadeCabinent_00_C_Flicer__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_MOD_ArcadeCabinent_00.PRE_MOD_ArcadeCabinent_00_C.Flicer__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void APRE_MOD_ArcadeCabinent_00_C::Flicer__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_MOD_ArcadeCabinent_00.PRE_MOD_ArcadeCabinent_00_C.Flicer__UpdateFunc");
		
		APRE_MOD_ArcadeCabinent_00_C_Flicer__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_MOD_ArcadeCabinent_00.PRE_MOD_ArcadeCabinent_00_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void APRE_MOD_ArcadeCabinent_00_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_MOD_ArcadeCabinent_00.PRE_MOD_ArcadeCabinent_00_C.ReceiveBeginPlay");
		
		APRE_MOD_ArcadeCabinent_00_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_MOD_ArcadeCabinent_00.PRE_MOD_ArcadeCabinent_00_C.Update
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APRE_MOD_ArcadeCabinent_00_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_MOD_ArcadeCabinent_00.PRE_MOD_ArcadeCabinent_00_C.Update");
		
		APRE_MOD_ArcadeCabinent_00_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_MOD_ArcadeCabinent_00.PRE_MOD_ArcadeCabinent_00_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRE_MOD_ArcadeCabinent_00_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_MOD_ArcadeCabinent_00.PRE_MOD_ArcadeCabinent_00_C.ReceiveTick");
		
		APRE_MOD_ArcadeCabinent_00_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_MOD_ArcadeCabinent_00.PRE_MOD_ArcadeCabinent_00_C.PlayEmitter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APRE_MOD_ArcadeCabinent_00_C::PlayEmitter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_MOD_ArcadeCabinent_00.PRE_MOD_ArcadeCabinent_00_C.PlayEmitter");
		
		APRE_MOD_ArcadeCabinent_00_C_PlayEmitter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_MOD_ArcadeCabinent_00.PRE_MOD_ArcadeCabinent_00_C.StopEmitter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APRE_MOD_ArcadeCabinent_00_C::StopEmitter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_MOD_ArcadeCabinent_00.PRE_MOD_ArcadeCabinent_00_C.StopEmitter");
		
		APRE_MOD_ArcadeCabinent_00_C_StopEmitter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_MOD_ArcadeCabinent_00.PRE_MOD_ArcadeCabinent_00_C.ToggleInRange
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InRange                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APRE_MOD_ArcadeCabinent_00_C::ToggleInRange(bool InRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_MOD_ArcadeCabinent_00.PRE_MOD_ArcadeCabinent_00_C.ToggleInRange");
		
		APRE_MOD_ArcadeCabinent_00_C_ToggleInRange_Params params {};
		params.InRange = InRange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_MOD_ArcadeCabinent_00.PRE_MOD_ArcadeCabinent_00_C.ExecuteUbergraph_PRE_MOD_ArcadeCabinent_00
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRE_MOD_ArcadeCabinent_00_C::ExecuteUbergraph_PRE_MOD_ArcadeCabinent_00(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_MOD_ArcadeCabinent_00.PRE_MOD_ArcadeCabinent_00_C.ExecuteUbergraph_PRE_MOD_ArcadeCabinent_00");
		
		APRE_MOD_ArcadeCabinent_00_C_ExecuteUbergraph_PRE_MOD_ArcadeCabinent_00_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APRE_MOD_ArcadeCabinent_00_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APRE_MOD_ArcadeCabinent_00_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PRE_MOD_ArcadeCabinent_00.PRE_MOD_ArcadeCabinent_00_C");
		return ptr;
	}

}


