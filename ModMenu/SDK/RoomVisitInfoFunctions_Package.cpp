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
	 * 		Name   -> Function RoomVisitInfoFunctions.RoomVisitInfoFunctions_C.FindPreviousVisitInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FRoomVisitInfo>                      NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Found                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ItemIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRoomVisitInfo                              Item                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URoomVisitInfoFunctions_C::FindPreviousVisitInfo(TArray<struct FRoomVisitInfo>* NewParam, class UObject* __WorldContext, bool* Found, int32_t* ItemIndex, struct FRoomVisitInfo* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomVisitInfoFunctions.RoomVisitInfoFunctions_C.FindPreviousVisitInfo");
		
		URoomVisitInfoFunctions_C_FindPreviousVisitInfo_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
		if (Found != nullptr)
			*Found = params.Found;
		if (ItemIndex != nullptr)
			*ItemIndex = params.ItemIndex;
		if (Item != nullptr)
			*Item = params.Item;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomVisitInfoFunctions.RoomVisitInfoFunctions_C.FindRoomVisitInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FRoomVisitInfo>                      RoomVisitInfoArray                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class ARoomAreaBase*                               Room                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Found                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            FoundIndex                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRoomVisitInfo                              Item                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URoomVisitInfoFunctions_C::FindRoomVisitInfo(TArray<struct FRoomVisitInfo>* RoomVisitInfoArray, class ARoomAreaBase* Room, class UObject* __WorldContext, bool* Found, int32_t* FoundIndex, struct FRoomVisitInfo* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomVisitInfoFunctions.RoomVisitInfoFunctions_C.FindRoomVisitInfo");
		
		URoomVisitInfoFunctions_C_FindRoomVisitInfo_Params params {};
		params.Room = Room;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RoomVisitInfoArray != nullptr)
			*RoomVisitInfoArray = params.RoomVisitInfoArray;
		if (Found != nullptr)
			*Found = params.Found;
		if (FoundIndex != nullptr)
			*FoundIndex = params.FoundIndex;
		if (Item != nullptr)
			*Item = params.Item;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URoomVisitInfoFunctions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URoomVisitInfoFunctions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RoomVisitInfoFunctions.RoomVisitInfoFunctions_C");
		return ptr;
	}

}


