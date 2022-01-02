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
//		Name   -> Function ActorUtils.ActorUtils_C.GetClosestActorFromList
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class AActor*>                              Actors                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		class AActor*                                      TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Actor                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ActorDistance                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UActorUtils_C::STATIC_GetClosestActorFromList(TArray<class AActor*>* Actors, class AActor* TargetActor, class UObject* __WorldContext, class AActor** Actor, float* ActorDistance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ActorUtils.ActorUtils_C.GetClosestActorFromList");

	UActorUtils_C_GetClosestActorFromList_Params params {};
	params.TargetActor = TargetActor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Actors != nullptr)
		*Actors = params.Actors;
	if (Actor != nullptr)
		*Actor = params.Actor;
	if (ActorDistance != nullptr)
		*ActorDistance = params.ActorDistance;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
