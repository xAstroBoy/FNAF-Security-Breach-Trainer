/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "RoomVisitInfoFunctions_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RoomVisitInfoFunctions.RoomVisitInfoFunctions_C.FindPreviousVisitInfo
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FRoomVisitInfo>                      NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Found                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int                                                ItemIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRoomVisitInfo                              Item                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URoomVisitInfoFunctions_C::STATIC_FindPreviousVisitInfo(TArray<struct FRoomVisitInfo>* NewParam, class UObject* __WorldContext, bool* Found, int* ItemIndex, struct FRoomVisitInfo* Item)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RoomVisitInfoFunctions.RoomVisitInfoFunctions_C.FindRoomVisitInfo
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FRoomVisitInfo>                      RoomVisitInfoArray                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		class ARoomAreaBase*                               Room                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Found                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int                                                FoundIndex                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRoomVisitInfo                              Item                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URoomVisitInfoFunctions_C::STATIC_FindRoomVisitInfo(TArray<struct FRoomVisitInfo>* RoomVisitInfoArray, class ARoomAreaBase* Room, class UObject* __WorldContext, bool* Found, int* FoundIndex, struct FRoomVisitInfo* Item)
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction URoomVisitInfoFunctions_C.StaticClass
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


