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
//		Name   -> Function AudioListenerOverrideInterface.AudioListenerOverrideInterface_C.GetListenerPosition
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     Position                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAudioListenerOverrideInterface_C::GetListenerPosition(struct FVector* Position)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AudioListenerOverrideInterface.AudioListenerOverrideInterface_C.GetListenerPosition");

	UAudioListenerOverrideInterface_C_GetListenerPosition_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Position != nullptr)
		*Position = params.Position;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function AudioListenerOverrideInterface.AudioListenerOverrideInterface_C.EnableListenerOverride
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAudioListenerOverrideInterface_C::EnableListenerOverride(bool enable, bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AudioListenerOverrideInterface.AudioListenerOverrideInterface_C.EnableListenerOverride");

	UAudioListenerOverrideInterface_C_EnableListenerOverride_Params params {};
	params.enable = enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function AudioListenerOverrideInterface.AudioListenerOverrideInterface_C.SetListenerOverridePosition
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class USceneComponent*                             AttachToComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Position                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FRotator                                    Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAudioListenerOverrideInterface_C::SetListenerOverridePosition(class USceneComponent* AttachToComponent, const struct FVector& Position, const struct FRotator& Rotation, bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AudioListenerOverrideInterface.AudioListenerOverrideInterface_C.SetListenerOverridePosition");

	UAudioListenerOverrideInterface_C_SetListenerOverridePosition_Params params {};
	params.AttachToComponent = AttachToComponent;
	params.Position = Position;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
