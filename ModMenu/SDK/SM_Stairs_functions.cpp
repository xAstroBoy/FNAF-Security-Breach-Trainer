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
//		Name   -> Function SM_Stairs.SM_Stairs_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ASM_Stairs_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SM_Stairs.SM_Stairs_C.ReceiveBeginPlay");

	ASM_Stairs_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SM_Stairs.SM_Stairs_C.Update
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ASM_Stairs_C::Update()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SM_Stairs.SM_Stairs_C.Update");

	ASM_Stairs_C_Update_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SM_Stairs.SM_Stairs_C.ExecuteUbergraph_SM_Stairs
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASM_Stairs_C::ExecuteUbergraph_SM_Stairs(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SM_Stairs.SM_Stairs_C.ExecuteUbergraph_SM_Stairs");

	ASM_Stairs_C_ExecuteUbergraph_SM_Stairs_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
