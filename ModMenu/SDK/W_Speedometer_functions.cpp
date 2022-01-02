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
//		Name   -> Function W_Speedometer.W_Speedometer_C.UpdateSpeedometer
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Speed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Speedometer_C::UpdateSpeedometer(float Speed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Speedometer.W_Speedometer_C.UpdateSpeedometer");

	UW_Speedometer_C_UpdateSpeedometer_Params params {};
	params.Speed = Speed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function W_Speedometer.W_Speedometer_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_Speedometer_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Speedometer.W_Speedometer_C.PreConstruct");

	UW_Speedometer_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function W_Speedometer.W_Speedometer_C.ExecuteUbergraph_W_Speedometer
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Speedometer_C::ExecuteUbergraph_W_Speedometer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Speedometer.W_Speedometer_C.ExecuteUbergraph_W_Speedometer");

	UW_Speedometer_C_ExecuteUbergraph_W_Speedometer_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
