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
//		Name   -> Function Animatronic_ABP_Chica.Animatronic_ABP_Chica_C.footstep
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UAnimatronic_ABP_Chica_C::footstep()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Chica.Animatronic_ABP_Chica_C.footstep");

	UAnimatronic_ABP_Chica_C_footstep_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Animatronic_ABP_Chica.Animatronic_ABP_Chica_C.BlueprintUpdateAnimation
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAnimatronic_ABP_Chica_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Chica.Animatronic_ABP_Chica_C.BlueprintUpdateAnimation");

	UAnimatronic_ABP_Chica_C_BlueprintUpdateAnimation_Params params {};
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Animatronic_ABP_Chica.Animatronic_ABP_Chica_C.BlueprintBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void UAnimatronic_ABP_Chica_C::BlueprintBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Chica.Animatronic_ABP_Chica_C.BlueprintBeginPlay");

	UAnimatronic_ABP_Chica_C_BlueprintBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Animatronic_ABP_Chica.Animatronic_ABP_Chica_C.AnimNotify_R_Foot_Down
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UAnimatronic_ABP_Chica_C::AnimNotify_R_Foot_Down()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Chica.Animatronic_ABP_Chica_C.AnimNotify_R_Foot_Down");

	UAnimatronic_ABP_Chica_C_AnimNotify_R_Foot_Down_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Animatronic_ABP_Chica.Animatronic_ABP_Chica_C.AnimNotify_L_Foot_Down
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UAnimatronic_ABP_Chica_C::AnimNotify_L_Foot_Down()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Chica.Animatronic_ABP_Chica_C.AnimNotify_L_Foot_Down");

	UAnimatronic_ABP_Chica_C_AnimNotify_L_Foot_Down_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Animatronic_ABP_Chica.Animatronic_ABP_Chica_C.ExecuteUbergraph_Animatronic_ABP_Chica
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAnimatronic_ABP_Chica_C::ExecuteUbergraph_Animatronic_ABP_Chica(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animatronic_ABP_Chica.Animatronic_ABP_Chica_C.ExecuteUbergraph_Animatronic_ABP_Chica");

	UAnimatronic_ABP_Chica_C_ExecuteUbergraph_Animatronic_ABP_Chica_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
