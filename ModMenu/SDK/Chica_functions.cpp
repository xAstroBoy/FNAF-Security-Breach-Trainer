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
//		Name   -> Function Chica.Chica_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AChica_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Chica.Chica_C.ReceiveBeginPlay");

	AChica_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Chica.Chica_C.On Garbage Detected
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     GarbageLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AChica_C::On_Garbage_Detected(const struct FVector& GarbageLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Chica.Chica_C.On Garbage Detected");

	AChica_C_On_Garbage_Detected_Params params {};
	params.GarbageLocation = GarbageLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Chica.Chica_C.Smash In Compactor
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AChica_C::Smash_In_Compactor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Chica.Chica_C.Smash In Compactor");

	AChica_C_Smash_In_Compactor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Chica.Chica_C.Set Creep Mode
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AChica_C::Set_Creep_Mode(bool enable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Chica.Chica_C.Set Creep Mode");

	AChica_C_Set_Creep_Mode_Params params {};
	params.enable = enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Chica.Chica_C.ExecuteUbergraph_Chica
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AChica_C::ExecuteUbergraph_Chica(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Chica.Chica_C.ExecuteUbergraph_Chica");

	AChica_C_ExecuteUbergraph_Chica_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
