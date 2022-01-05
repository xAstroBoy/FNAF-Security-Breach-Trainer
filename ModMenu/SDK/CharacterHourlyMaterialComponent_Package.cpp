/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "CharacterHourlyMaterialComponent_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function CharacterHourlyMaterialComponent.CharacterHourlyMaterialComponent_C.On Time Changed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                Hour                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                Minute                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCharacterHourlyMaterialComponent_C::On_Time_Changed(int Hour, int Minute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterHourlyMaterialComponent.CharacterHourlyMaterialComponent_C.On Time Changed");
		
		UCharacterHourlyMaterialComponent_C_On_Time_Changed_Params params {};
		params.Hour = Hour;
		params.Minute = Minute;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function CharacterHourlyMaterialComponent.CharacterHourlyMaterialComponent_C.OnLoaded_9F047F074BE0EE73014FEF95E6406397
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCharacterHourlyMaterialComponent_C::OnLoaded_9F047F074BE0EE73014FEF95E6406397(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterHourlyMaterialComponent.CharacterHourlyMaterialComponent_C.OnLoaded_9F047F074BE0EE73014FEF95E6406397");
		
		UCharacterHourlyMaterialComponent_C_OnLoaded_9F047F074BE0EE73014FEF95E6406397_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function CharacterHourlyMaterialComponent.CharacterHourlyMaterialComponent_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UCharacterHourlyMaterialComponent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterHourlyMaterialComponent.CharacterHourlyMaterialComponent_C.ReceiveBeginPlay");
		
		UCharacterHourlyMaterialComponent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function CharacterHourlyMaterialComponent.CharacterHourlyMaterialComponent_C.Load Materials For Hour
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                HourlyIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCharacterHourlyMaterialComponent_C::Load_Materials_For_Hour(int HourlyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterHourlyMaterialComponent.CharacterHourlyMaterialComponent_C.Load Materials For Hour");
		
		UCharacterHourlyMaterialComponent_C_Load_Materials_For_Hour_Params params {};
		params.HourlyIndex = HourlyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function CharacterHourlyMaterialComponent.CharacterHourlyMaterialComponent_C.ExecuteUbergraph_CharacterHourlyMaterialComponent
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCharacterHourlyMaterialComponent_C::ExecuteUbergraph_CharacterHourlyMaterialComponent(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterHourlyMaterialComponent.CharacterHourlyMaterialComponent_C.ExecuteUbergraph_CharacterHourlyMaterialComponent");
		
		UCharacterHourlyMaterialComponent_C_ExecuteUbergraph_CharacterHourlyMaterialComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCharacterHourlyMaterialComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterHourlyMaterialComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CharacterHourlyMaterialComponent.CharacterHourlyMaterialComponent_C");
		return ptr;
	}

}


