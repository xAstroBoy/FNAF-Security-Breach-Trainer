/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "PartsAndServiceABP_Interface_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PartsAndServiceABP_Interface.PartsAndServiceABP_Interface_C.Close
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Close                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPartsAndServiceABP_Interface_C::Close(bool Close)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartsAndServiceABP_Interface.PartsAndServiceABP_Interface_C.Close");
		
		UPartsAndServiceABP_Interface_C_Close_Params params {};
		params.Close = Close;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PartsAndServiceABP_Interface.PartsAndServiceABP_Interface_C.Off
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPartsAndServiceABP_Interface_C::Off(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartsAndServiceABP_Interface.PartsAndServiceABP_Interface_C.Off");
		
		UPartsAndServiceABP_Interface_C_Off_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PartsAndServiceABP_Interface.PartsAndServiceABP_Interface_C.Out
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               In                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPartsAndServiceABP_Interface_C::Out(bool In)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartsAndServiceABP_Interface.PartsAndServiceABP_Interface_C.Out");
		
		UPartsAndServiceABP_Interface_C_Out_Params params {};
		params.In = In;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PartsAndServiceABP_Interface.PartsAndServiceABP_Interface_C.VoiceBoxSwap
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPartsAndServiceABP_Interface_C::VoiceBoxSwap(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartsAndServiceABP_Interface.PartsAndServiceABP_Interface_C.VoiceBoxSwap");
		
		UPartsAndServiceABP_Interface_C_VoiceBoxSwap_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PartsAndServiceABP_Interface.PartsAndServiceABP_Interface_C.ResetFreddy
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPartsAndServiceABP_Interface_C::ResetFreddy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartsAndServiceABP_Interface.PartsAndServiceABP_Interface_C.ResetFreddy");
		
		UPartsAndServiceABP_Interface_C_ResetFreddy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PartsAndServiceABP_Interface.PartsAndServiceABP_Interface_C.TestButton_G
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPartsAndServiceABP_Interface_C::TestButton_G()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartsAndServiceABP_Interface.PartsAndServiceABP_Interface_C.TestButton_G");
		
		UPartsAndServiceABP_Interface_C_TestButton_G_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PartsAndServiceABP_Interface.PartsAndServiceABP_Interface_C.TestButton_Y
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPartsAndServiceABP_Interface_C::TestButton_Y()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartsAndServiceABP_Interface.PartsAndServiceABP_Interface_C.TestButton_Y");
		
		UPartsAndServiceABP_Interface_C_TestButton_Y_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PartsAndServiceABP_Interface.PartsAndServiceABP_Interface_C.TestButton_B
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPartsAndServiceABP_Interface_C::TestButton_B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartsAndServiceABP_Interface.PartsAndServiceABP_Interface_C.TestButton_B");
		
		UPartsAndServiceABP_Interface_C_TestButton_B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PartsAndServiceABP_Interface.PartsAndServiceABP_Interface_C.TestButton_R
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPartsAndServiceABP_Interface_C::TestButton_R()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartsAndServiceABP_Interface.PartsAndServiceABP_Interface_C.TestButton_R");
		
		UPartsAndServiceABP_Interface_C_TestButton_R_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PartsAndServiceABP_Interface.PartsAndServiceABP_Interface_C.PartsAndServiceGame
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TEnumAsByte<PartsAndServiceAnimEnum_EPartsAndServiceAnimEnum> GameEnum                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPartsAndServiceABP_Interface_C::PartsAndServiceGame(TEnumAsByte<PartsAndServiceAnimEnum_EPartsAndServiceAnimEnum> GameEnum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartsAndServiceABP_Interface.PartsAndServiceABP_Interface_C.PartsAndServiceGame");
		
		UPartsAndServiceABP_Interface_C_PartsAndServiceGame_Params params {};
		params.GameEnum = GameEnum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UPartsAndServiceABP_Interface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPartsAndServiceABP_Interface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PartsAndServiceABP_Interface.PartsAndServiceABP_Interface_C");
		return ptr;
	}

}


