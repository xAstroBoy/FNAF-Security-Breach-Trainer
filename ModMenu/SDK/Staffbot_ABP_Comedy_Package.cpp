/**
 * Name: FNAFSB
 * Version: 1
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP_Comedy.Staffbot_ABP_Comedy_C.BlueprintBeginPlay
	 * 		Flags  -> ()
	 */
	void UStaffbot_ABP_Comedy_C::BlueprintBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Comedy.Staffbot_ABP_Comedy_C.BlueprintBeginPlay");
		
		UStaffbot_ABP_Comedy_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Staffbot_ABP_Comedy.Staffbot_ABP_Comedy_C.ExecuteUbergraph_Staffbot_ABP_Comedy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffbot_ABP_Comedy_C::ExecuteUbergraph_Staffbot_ABP_Comedy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Comedy.Staffbot_ABP_Comedy_C.ExecuteUbergraph_Staffbot_ABP_Comedy");
		
		UStaffbot_ABP_Comedy_C_ExecuteUbergraph_Staffbot_ABP_Comedy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStaffbot_ABP_Comedy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStaffbot_ABP_Comedy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Staffbot_ABP_Comedy.Staffbot_ABP_Comedy_C");
		return ptr;
	}

}


