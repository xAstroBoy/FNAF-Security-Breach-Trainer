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
//		Name   -> Function MontyOutro_Shot400.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_2
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UNiagaraComponent*                           NiagaraComponent0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_2(class UNiagaraComponent* NiagaraComponent0)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MontyOutro_Shot400.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_2");

	USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_2_Params params {};
	params.NiagaraComponent0 = NiagaraComponent0;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MontyOutro_Shot400.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_1
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UNiagaraComponent*                           NiagaraComponent0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_1(class UNiagaraComponent* NiagaraComponent0)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MontyOutro_Shot400.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_1");

	USequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_1_Params params {};
	params.NiagaraComponent0 = NiagaraComponent0;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MontyOutro_Shot400.SequenceDirector_C.NiagaraComponent0_Event_1
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UNiagaraComponent*                           NiagaraComponent0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bReset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USequenceDirector_C::NiagaraComponent0_Event_1(class UNiagaraComponent* NiagaraComponent0, bool bReset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MontyOutro_Shot400.SequenceDirector_C.NiagaraComponent0_Event_1");

	USequenceDirector_C_NiagaraComponent0_Event_1_Params params {};
	params.NiagaraComponent0 = NiagaraComponent0;
	params.bReset = bReset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MontyOutro_Shot400.SequenceDirector_C.NiagaraComponent0_Event_2
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UNiagaraComponent*                           NiagaraComponent0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USequenceDirector_C::NiagaraComponent0_Event_2(class UNiagaraComponent* NiagaraComponent0)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MontyOutro_Shot400.SequenceDirector_C.NiagaraComponent0_Event_2");

	USequenceDirector_C_NiagaraComponent0_Event_2_Params params {};
	params.NiagaraComponent0 = NiagaraComponent0;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MontyOutro_Shot400.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USequenceDirector_C::ExecuteUbergraph_SequenceDirector(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MontyOutro_Shot400.SequenceDirector_C.ExecuteUbergraph_SequenceDirector");

	USequenceDirector_C_ExecuteUbergraph_SequenceDirector_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
