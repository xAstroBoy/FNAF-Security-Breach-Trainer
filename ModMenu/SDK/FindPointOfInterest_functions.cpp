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
//		Name   -> Function FindPointOfInterest.FindPointOfInterest_C.DeterminePoint
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UFindPointOfInterest_C::DeterminePoint()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FindPointOfInterest.FindPointOfInterest_C.DeterminePoint");

	UFindPointOfInterest_C_DeterminePoint_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FindPointOfInterest.FindPointOfInterest_C.Receive Execute AI With Room
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ARoomAreaBase*                               Room                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFindPointOfInterest_C::Receive_Execute_AI_With_Room(class AAIController* OwnerController, class APawn* ControlledPawn, class ARoomAreaBase* Room)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FindPointOfInterest.FindPointOfInterest_C.Receive Execute AI With Room");

	UFindPointOfInterest_C_Receive_Execute_AI_With_Room_Params params {};
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.Room = Room;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FindPointOfInterest.FindPointOfInterest_C.ExecuteUbergraph_FindPointOfInterest
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFindPointOfInterest_C::ExecuteUbergraph_FindPointOfInterest(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FindPointOfInterest.FindPointOfInterest_C.ExecuteUbergraph_FindPointOfInterest");

	UFindPointOfInterest_C_ExecuteUbergraph_FindPointOfInterest_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
