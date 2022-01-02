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
//		Name   -> Function BPFL_Kitchen.BPFL_Kitchen_C.GetPizzaStationInstruction
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PizzaStep_EPizzaStep>                  PizzaStep                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBPFL_Kitchen_C::STATIC_GetPizzaStationInstruction(TEnumAsByte<PizzaStep_EPizzaStep> PizzaStep, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPFL_Kitchen.BPFL_Kitchen_C.GetPizzaStationInstruction");

	UBPFL_Kitchen_C_GetPizzaStationInstruction_Params params {};
	params.PizzaStep = PizzaStep;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BPFL_Kitchen.BPFL_Kitchen_C.GetPizzaStationName
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PizzaStep_EPizzaStep>                  PizzaStep                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBPFL_Kitchen_C::STATIC_GetPizzaStationName(TEnumAsByte<PizzaStep_EPizzaStep> PizzaStep, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPFL_Kitchen.BPFL_Kitchen_C.GetPizzaStationName");

	UBPFL_Kitchen_C_GetPizzaStationName_Params params {};
	params.PizzaStep = PizzaStep;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
