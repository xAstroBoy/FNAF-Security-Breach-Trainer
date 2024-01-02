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
	 * 		Name   -> Function AreaManager.AreaManager_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AAreaManager_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AreaManager.AreaManager_C.UserConstructionScript");
		
		AAreaManager_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AreaManager.AreaManager_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AAreaManager_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AreaManager.AreaManager_C.ReceiveBeginPlay");
		
		AAreaManager_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AreaManager.AreaManager_C.On Player Entered Room
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARoomAreaBase*                               Room                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAreaManager_C::OnPlayerEnteredRoom(class ARoomAreaBase* Room)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AreaManager.AreaManager_C.On Player Entered Room");
		
		AAreaManager_C_OnPlayerEnteredRoom_Params params {};
		params.Room = Room;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AreaManager.AreaManager_C.ExecuteUbergraph_AreaManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAreaManager_C::ExecuteUbergraph_AreaManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AreaManager.AreaManager_C.ExecuteUbergraph_AreaManager");
		
		AAreaManager_C_ExecuteUbergraph_AreaManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AreaManager.AreaManager_C.OnPlayerEnteredArea__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAreas                                             NewArea                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAreaManager_C::OnPlayerEnteredArea__DelegateSignature(EAreas NewArea)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AreaManager.AreaManager_C.OnPlayerEnteredArea__DelegateSignature");
		
		AAreaManager_C_OnPlayerEnteredArea__DelegateSignature_Params params {};
		params.NewArea = NewArea;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAreaManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAreaManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AreaManager.AreaManager_C");
		return ptr;
	}

}


