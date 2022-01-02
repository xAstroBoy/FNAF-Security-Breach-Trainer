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
//		Name   -> Function Sewer_Generator.Sewer_Generator_C.Activate Chica Trigger
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Activate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASewer_Generator_C::Activate_Chica_Trigger(bool Activate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Sewer_Generator.Sewer_Generator_C.Activate Chica Trigger");

	ASewer_Generator_C_Activate_Chica_Trigger_Params params {};
	params.Activate = Activate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Sewer_Generator.Sewer_Generator_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ASewer_Generator_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Sewer_Generator.Sewer_Generator_C.ReceiveBeginPlay");

	ASewer_Generator_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Sewer_Generator.Sewer_Generator_C.SetActivated
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ASewer_Generator_C::SetActivated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Sewer_Generator.Sewer_Generator_C.SetActivated");

	ASewer_Generator_C_SetActivated_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Sewer_Generator.Sewer_Generator_C.ActivateObject
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASewer_Generator_C::ActivateObject(class AActor* Activator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Sewer_Generator.Sewer_Generator_C.ActivateObject");

	ASewer_Generator_C_ActivateObject_Params params {};
	params.Activator = Activator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Sewer_Generator.Sewer_Generator_C.ExecuteUbergraph_Sewer_Generator
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASewer_Generator_C::ExecuteUbergraph_Sewer_Generator(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Sewer_Generator.Sewer_Generator_C.ExecuteUbergraph_Sewer_Generator");

	ASewer_Generator_C_ExecuteUbergraph_Sewer_Generator_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
