#pragma once

// Name: FNAF Security Breach, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RoomVisitInfoFunctions.RoomVisitInfoFunctions_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class URoomVisitInfoFunctions_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass RoomVisitInfoFunctions.RoomVisitInfoFunctions_C");
		return ptr;
	}



	void STATIC_FindPreviousVisitInfo(TArray<struct FRoomVisitInfo>* NewParam, class UObject* __WorldContext, bool* Found, int* ItemIndex, struct FRoomVisitInfo* Item);
	void STATIC_FindRoomVisitInfo(TArray<struct FRoomVisitInfo>* RoomVisitInfoArray, class ARoomAreaBase* Room, class UObject* __WorldContext, bool* Found, int* FoundIndex, struct FRoomVisitInfo* Item);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
