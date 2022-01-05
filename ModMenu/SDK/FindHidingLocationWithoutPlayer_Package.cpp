/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "FindHidingLocationWithoutPlayer_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FindHidingLocationWithoutPlayer.FindHidingLocationWithoutPlayer_C.GetHideActor
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class AActor*>                              HideActors                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		class AAIController*                               AIController                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFindHidingLocationWithoutPlayer_C::GetHideActor(TArray<class AActor*>* HideActors, class AAIController* AIController, class APawn* Pawn, class AActor** Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FindHidingLocationWithoutPlayer.FindHidingLocationWithoutPlayer_C.GetHideActor");
		
		UFindHidingLocationWithoutPlayer_C_GetHideActor_Params params {};
		params.AIController = AIController;
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HideActors != nullptr)
			*HideActors = params.HideActors;
		if (Actor != nullptr)
			*Actor = params.Actor;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFindHidingLocationWithoutPlayer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFindHidingLocationWithoutPlayer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FindHidingLocationWithoutPlayer.FindHidingLocationWithoutPlayer_C");
		return ptr;
	}

}


