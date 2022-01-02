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
//		Offset -> 0x00695030
//		Name   -> Function SWGAIUtils.SWGAIUtilLibrary.ClearAllBlackboardValues
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UBlackboardComponent*                        Blackboard                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USWGAIUtilLibrary::STATIC_ClearAllBlackboardValues(class UBlackboardComponent* Blackboard)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SWGAIUtils.SWGAIUtilLibrary.ClearAllBlackboardValues");

	USWGAIUtilLibrary_ClearAllBlackboardValues_Params params {};
	params.Blackboard = Blackboard;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
