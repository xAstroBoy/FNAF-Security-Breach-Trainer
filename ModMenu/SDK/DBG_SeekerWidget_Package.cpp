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
	 * 		Name   -> Function DBG_SeekerWidget.DBG_SeekerWidget_C.Get_CurrentRoomText_Text_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UDBG_SeekerWidget_C::Get_CurrentRoomText_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBG_SeekerWidget.DBG_SeekerWidget_C.Get_CurrentRoomText_Text_1");
		
		UDBG_SeekerWidget_C_Get_CurrentRoomText_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function DBG_SeekerWidget.DBG_SeekerWidget_C.Setup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AAISeeker_C*                                 AISeeker                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDBG_SeekerWidget_C::Setup(class AAISeeker_C* AISeeker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBG_SeekerWidget.DBG_SeekerWidget_C.Setup");
		
		UDBG_SeekerWidget_C_Setup_Params params {};
		params.AISeeker = AISeeker;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function DBG_SeekerWidget.DBG_SeekerWidget_C.ExecuteUbergraph_DBG_SeekerWidget
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDBG_SeekerWidget_C::ExecuteUbergraph_DBG_SeekerWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBG_SeekerWidget.DBG_SeekerWidget_C.ExecuteUbergraph_DBG_SeekerWidget");
		
		UDBG_SeekerWidget_C_ExecuteUbergraph_DBG_SeekerWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UDBG_SeekerWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBG_SeekerWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DBG_SeekerWidget.DBG_SeekerWidget_C");
		return ptr;
	}

}


