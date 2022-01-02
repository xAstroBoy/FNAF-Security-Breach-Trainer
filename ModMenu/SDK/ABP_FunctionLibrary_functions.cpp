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
//		Name   -> Function ABP_FunctionLibrary.ABP_FunctionLibrary_C.Check if Onscreen
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UAnimInstance*                               TargetAnimInstance                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Tolerance                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               isJumpscaring                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Override                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               isOnScreen1                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UABP_FunctionLibrary_C::STATIC_Check_if_Onscreen(class UAnimInstance* TargetAnimInstance, float Tolerance, bool isJumpscaring, bool Override, class UObject* __WorldContext, bool* isOnScreen1)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_FunctionLibrary.ABP_FunctionLibrary_C.Check if Onscreen");

	UABP_FunctionLibrary_C_Check_if_Onscreen_Params params {};
	params.TargetAnimInstance = TargetAnimInstance;
	params.Tolerance = Tolerance;
	params.isJumpscaring = isJumpscaring;
	params.Override = Override;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (isOnScreen1 != nullptr)
		*isOnScreen1 = params.isOnScreen1;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
