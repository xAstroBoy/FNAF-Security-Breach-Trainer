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
//		Name   -> Function FogSystem.FogSystem_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFogSystem_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FogSystem.FogSystem_C.ReceiveTick");

	AFogSystem_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FogSystem.FogSystem_C.Set Fog Scenario
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       FogScenario                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFogSystem_C::Set_Fog_Scenario(const struct FName& FogScenario)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FogSystem.FogSystem_C.Set Fog Scenario");

	AFogSystem_C_Set_Fog_Scenario_Params params {};
	params.FogScenario = FogScenario;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FogSystem.FogSystem_C.Add Overlapped Volume
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AFogVolume_C*                                Item                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFogSystem_C::Add_Overlapped_Volume(class AFogVolume_C* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FogSystem.FogSystem_C.Add Overlapped Volume");

	AFogSystem_C_Add_Overlapped_Volume_Params params {};
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FogSystem.FogSystem_C.Remove Overlapped Volume
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AFogVolume_C*                                Item                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFogSystem_C::Remove_Overlapped_Volume(class AFogVolume_C* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FogSystem.FogSystem_C.Remove Overlapped Volume");

	AFogSystem_C_Remove_Overlapped_Volume_Params params {};
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FogSystem.FogSystem_C.ExecuteUbergraph_FogSystem
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFogSystem_C::ExecuteUbergraph_FogSystem(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FogSystem.FogSystem_C.ExecuteUbergraph_FogSystem");

	AFogSystem_C_ExecuteUbergraph_FogSystem_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
