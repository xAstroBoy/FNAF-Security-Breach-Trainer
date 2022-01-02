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
//		Name   -> Function NavDistanceServiceBase.NavDistanceServiceBase_C.NavDistance
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      AIPawn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APawn*                                       OtherPawn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              OutDistance                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNavDistanceServiceBase_C::NavDistance(class AActor* AIPawn, class APawn* OtherPawn, float* OutDistance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavDistanceServiceBase.NavDistanceServiceBase_C.NavDistance");

	UNavDistanceServiceBase_C_NavDistance_Params params {};
	params.AIPawn = AIPawn;
	params.OtherPawn = OtherPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutDistance != nullptr)
		*OutDistance = params.OutDistance;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
