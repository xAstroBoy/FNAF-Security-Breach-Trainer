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
//		Name   -> Function Slide_AtriumtoKitchen_Vent.Slide_AtriumtoKitchen_Vent_C.GetInstructionOverride
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Instruction                                                (Parm, OutParm)
void ASlide_AtriumtoKitchen_Vent_C::GetInstructionOverride(struct FText* Instruction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Slide_AtriumtoKitchen_Vent.Slide_AtriumtoKitchen_Vent_C.GetInstructionOverride");

	ASlide_AtriumtoKitchen_Vent_C_GetInstructionOverride_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Instruction != nullptr)
		*Instruction = params.Instruction;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Slide_AtriumtoKitchen_Vent.Slide_AtriumtoKitchen_Vent_C.On Slide Entered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ASlide_AtriumtoKitchen_Vent_C::On_Slide_Entered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Slide_AtriumtoKitchen_Vent.Slide_AtriumtoKitchen_Vent_C.On Slide Entered");

	ASlide_AtriumtoKitchen_Vent_C_On_Slide_Entered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Slide_AtriumtoKitchen_Vent.Slide_AtriumtoKitchen_Vent_C.FinishedSliding
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ASlide_AtriumtoKitchen_Vent_C::FinishedSliding()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Slide_AtriumtoKitchen_Vent.Slide_AtriumtoKitchen_Vent_C.FinishedSliding");

	ASlide_AtriumtoKitchen_Vent_C_FinishedSliding_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Slide_AtriumtoKitchen_Vent.Slide_AtriumtoKitchen_Vent_C.ExecuteUbergraph_Slide_AtriumtoKitchen_Vent
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASlide_AtriumtoKitchen_Vent_C::ExecuteUbergraph_Slide_AtriumtoKitchen_Vent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Slide_AtriumtoKitchen_Vent.Slide_AtriumtoKitchen_Vent_C.ExecuteUbergraph_Slide_AtriumtoKitchen_Vent");

	ASlide_AtriumtoKitchen_Vent_C_ExecuteUbergraph_Slide_AtriumtoKitchen_Vent_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
