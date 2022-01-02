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
//		Name   -> Function HeadAimingInterface.HeadAimingInterface_C.GetHeadAimTargetActor
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      AimActor                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHeadAimingInterface_C::GetHeadAimTargetActor(class AActor** AimActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HeadAimingInterface.HeadAimingInterface_C.GetHeadAimTargetActor");

	UHeadAimingInterface_C_GetHeadAimTargetActor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AimActor != nullptr)
		*AimActor = params.AimActor;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function HeadAimingInterface.HeadAimingInterface_C.GetHeadAimTargetLocation
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     HeadAimLocation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHeadAimingInterface_C::GetHeadAimTargetLocation(struct FVector* HeadAimLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HeadAimingInterface.HeadAimingInterface_C.GetHeadAimTargetLocation");

	UHeadAimingInterface_C_GetHeadAimTargetLocation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HeadAimLocation != nullptr)
		*HeadAimLocation = params.HeadAimLocation;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function HeadAimingInterface.HeadAimingInterface_C.SetHeadAimTarget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     TargetLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               OffsetByViewHeight                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHeadAimingInterface_C::SetHeadAimTarget(class AActor* TargetActor, const struct FVector& TargetLocation, bool OffsetByViewHeight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HeadAimingInterface.HeadAimingInterface_C.SetHeadAimTarget");

	UHeadAimingInterface_C_SetHeadAimTarget_Params params {};
	params.TargetActor = TargetActor;
	params.TargetLocation = TargetLocation;
	params.OffsetByViewHeight = OffsetByViewHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function HeadAimingInterface.HeadAimingInterface_C.SetHeadAimEnabled
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHeadAimingInterface_C::SetHeadAimEnabled(bool enable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HeadAimingInterface.HeadAimingInterface_C.SetHeadAimEnabled");

	UHeadAimingInterface_C_SetHeadAimEnabled_Params params {};
	params.enable = enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
