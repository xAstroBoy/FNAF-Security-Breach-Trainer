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
	 * 		Name   -> Function WI_InstructionCard_PAS_FinishProcedure_Ocular.WI_InstructionCard_PAS_FinishProcedure_Ocular_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_InstructionCard_PAS_FinishProcedure_Ocular_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_InstructionCard_PAS_FinishProcedure_Ocular.WI_InstructionCard_PAS_FinishProcedure_Ocular_C.Tick");
		
		UWI_InstructionCard_PAS_FinishProcedure_Ocular_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function WI_InstructionCard_PAS_FinishProcedure_Ocular.WI_InstructionCard_PAS_FinishProcedure_Ocular_C.ExecuteUbergraph_WI_InstructionCard_PAS_FinishProcedure_Ocular
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_InstructionCard_PAS_FinishProcedure_Ocular_C::ExecuteUbergraph_WI_InstructionCard_PAS_FinishProcedure_Ocular(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_InstructionCard_PAS_FinishProcedure_Ocular.WI_InstructionCard_PAS_FinishProcedure_Ocular_C.ExecuteUbergraph_WI_InstructionCard_PAS_FinishProcedure_Ocular");
		
		UWI_InstructionCard_PAS_FinishProcedure_Ocular_C_ExecuteUbergraph_WI_InstructionCard_PAS_FinishProcedure_Ocular_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWI_InstructionCard_PAS_FinishProcedure_Ocular_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWI_InstructionCard_PAS_FinishProcedure_Ocular_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WI_InstructionCard_PAS_FinishProcedure_Ocular.WI_InstructionCard_PAS_FinishProcedure_Ocular_C");
		return ptr;
	}

}


