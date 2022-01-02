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
//		Name   -> Function DebugVisComponent.DebugVisComponent_C.ChangeVisuals
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UMeshComponent*                              Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UMaterialInterface*                          Material                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDebugVisComponent_C::ChangeVisuals(bool enable, class UMeshComponent* Mesh, class UMaterialInterface* Material)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugVisComponent.DebugVisComponent_C.ChangeVisuals");

	UDebugVisComponent_C_ChangeVisuals_Params params {};
	params.enable = enable;
	params.Mesh = Mesh;
	params.Material = Material;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugVisComponent.DebugVisComponent_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void UDebugVisComponent_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugVisComponent.DebugVisComponent_C.ReceiveBeginPlay");

	UDebugVisComponent_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DebugVisComponent.DebugVisComponent_C.ExecuteUbergraph_DebugVisComponent
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDebugVisComponent_C::ExecuteUbergraph_DebugVisComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DebugVisComponent.DebugVisComponent_C.ExecuteUbergraph_DebugVisComponent");

	UDebugVisComponent_C_ExecuteUbergraph_DebugVisComponent_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
