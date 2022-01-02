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
//		Name   -> Function FreddyInteractibleActor.FreddyInteractibleActor_C.GetFreddyVO
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<FreddyVOType_EFreddyVOType>            VOType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<class UDialogueWave*>                       FreddyDialog                                               (Parm, OutParm, HasGetValueTypeHash)
void AFreddyInteractibleActor_C::GetFreddyVO(TEnumAsByte<FreddyVOType_EFreddyVOType> VOType, TArray<class UDialogueWave*>* FreddyDialog)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FreddyInteractibleActor.FreddyInteractibleActor_C.GetFreddyVO");

	AFreddyInteractibleActor_C_GetFreddyVO_Params params {};
	params.VOType = VOType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FreddyDialog != nullptr)
		*FreddyDialog = params.FreddyDialog;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FreddyInteractibleActor.FreddyInteractibleActor_C.GetFreddyActionLocationAndRotation
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FRotator                                    Rotation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFreddyInteractibleActor_C::GetFreddyActionLocationAndRotation(struct FVector* Location, struct FRotator* Rotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FreddyInteractibleActor.FreddyInteractibleActor_C.GetFreddyActionLocationAndRotation");

	AFreddyInteractibleActor_C_GetFreddyActionLocationAndRotation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
