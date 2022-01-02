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
//		Name   -> Function BP_BuildAPizza.BP_BuildAPizza_C.UpdateMaterials
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_BuildAPizza_C::UpdateMaterials()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BuildAPizza.BP_BuildAPizza_C.UpdateMaterials");

	ABP_BuildAPizza_C_UpdateMaterials_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_BuildAPizza.BP_BuildAPizza_C.SetMaterial
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPrimitiveComponent*                         Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UMaterialInterface*                          MaterialNormal                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UMaterialInterface*                          MaterialFOV                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BuildAPizza_C::SetMaterial(class UPrimitiveComponent* Target, class UMaterialInterface* MaterialNormal, class UMaterialInterface* MaterialFOV)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BuildAPizza.BP_BuildAPizza_C.SetMaterial");

	ABP_BuildAPizza_C_SetMaterial_Params params {};
	params.Target = Target;
	params.MaterialNormal = MaterialNormal;
	params.MaterialFOV = MaterialFOV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_BuildAPizza.BP_BuildAPizza_C.CopyPizza
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UChildActorComponent*                        pizza                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BuildAPizza_C::CopyPizza(class UChildActorComponent* pizza)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BuildAPizza.BP_BuildAPizza_C.CopyPizza");

	ABP_BuildAPizza_C_CopyPizza_Params params {};
	params.pizza = pizza;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_BuildAPizza.BP_BuildAPizza_C.ChangeStateHelper
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_BuildAPizza_C::ChangeStateHelper()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BuildAPizza.BP_BuildAPizza_C.ChangeStateHelper");

	ABP_BuildAPizza_C_ChangeStateHelper_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_BuildAPizza.BP_BuildAPizza_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_BuildAPizza_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BuildAPizza.BP_BuildAPizza_C.UserConstructionScript");

	ABP_BuildAPizza_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_BuildAPizza.BP_BuildAPizza_C.ChangeState
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PizzaStep_EPizzaStep>                  PizzaStep                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BuildAPizza_C::ChangeState(TEnumAsByte<PizzaStep_EPizzaStep> PizzaStep)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BuildAPizza.BP_BuildAPizza_C.ChangeState");

	ABP_BuildAPizza_C_ChangeState_Params params {};
	params.PizzaStep = PizzaStep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_BuildAPizza.BP_BuildAPizza_C.ExecuteUbergraph_BP_BuildAPizza
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BuildAPizza_C::ExecuteUbergraph_BP_BuildAPizza(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BuildAPizza.BP_BuildAPizza_C.ExecuteUbergraph_BP_BuildAPizza");

	ABP_BuildAPizza_C_ExecuteUbergraph_BP_BuildAPizza_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
