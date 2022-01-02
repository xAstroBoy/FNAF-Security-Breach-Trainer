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
//		Name   -> Function FindClosestSeekerPath.FindClosestSeekerPath_C.Find Best Next Point
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                PointIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APatrolPath_C*                               InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     PointLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     PawnPosition                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                BestNextPointIndex                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     BestNextPointLocation                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFindClosestSeekerPath_C::Find_Best_Next_Point(int PointIndex, class APatrolPath_C* InputPin, const struct FVector& PointLocation, const struct FVector& PawnPosition, int* BestNextPointIndex, struct FVector* BestNextPointLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FindClosestSeekerPath.FindClosestSeekerPath_C.Find Best Next Point");

	UFindClosestSeekerPath_C_Find_Best_Next_Point_Params params {};
	params.PointIndex = PointIndex;
	params.InputPin = InputPin;
	params.PointLocation = PointLocation;
	params.PawnPosition = PawnPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BestNextPointIndex != nullptr)
		*BestNextPointIndex = params.BestNextPointIndex;
	if (BestNextPointLocation != nullptr)
		*BestNextPointLocation = params.BestNextPointLocation;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FindClosestSeekerPath.FindClosestSeekerPath_C.ReceiveExecuteAI
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFindClosestSeekerPath_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FindClosestSeekerPath.FindClosestSeekerPath_C.ReceiveExecuteAI");

	UFindClosestSeekerPath_C_ReceiveExecuteAI_Params params {};
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FindClosestSeekerPath.FindClosestSeekerPath_C.ExecuteUbergraph_FindClosestSeekerPath
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFindClosestSeekerPath_C::ExecuteUbergraph_FindClosestSeekerPath(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FindClosestSeekerPath.FindClosestSeekerPath_C.ExecuteUbergraph_FindClosestSeekerPath");

	UFindClosestSeekerPath_C_ExecuteUbergraph_FindClosestSeekerPath_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
