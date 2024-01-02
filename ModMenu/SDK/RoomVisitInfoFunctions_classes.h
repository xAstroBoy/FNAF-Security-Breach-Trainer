#pragma once

/**
 * Name: FNAFSB
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass RoomVisitInfoFunctions.RoomVisitInfoFunctions_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URoomVisitInfoFunctions_C : public UBlueprintFunctionLibrary
	{
	public:
		void FindPreviousVisitInfo(TArray<struct FRoomVisitInfo>* NewParam, class UObject* __WorldContext, bool* Found, int32_t* ItemIndex, struct FRoomVisitInfo* Item);
		void FindRoomVisitInfo(TArray<struct FRoomVisitInfo>* RoomVisitInfoArray, class ARoomAreaBase* Room, class UObject* __WorldContext, bool* Found, int32_t* FoundIndex, struct FRoomVisitInfo* Item);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
