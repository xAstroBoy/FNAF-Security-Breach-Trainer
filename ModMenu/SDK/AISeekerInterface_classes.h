﻿#pragma once

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

// BlueprintGeneratedClass AISeekerInterface.AISeekerInterface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAISeekerInterface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AISeekerInterface.AISeekerInterface_C");
		return ptr;
	}



	void SetSeekMode(bool Seek);
	void GetHearingEnable(bool* Enabled);
	void SetHearingEnable(bool enable);
	void ForceChasePlayer(bool EnableChase);
	void GetRangeOfDistance(float Distance, TEnumAsByte<AIPlayerRange_EAIPlayerRange>* Range);
	void IsCheckingHideLocation(bool* StillChecking);
	void SetIsTrackingPlayer(bool TrackingPlayer);
	void GetVisitedPOIs(TArray<struct FPOIIndex>* VisitedPOIs);
	void GetAIData(struct FAIDataParams* AI_Data);
	void IsInChaseMode(bool* InChaseMode);
	void RestartAI();
	void SetAlertState(int AlertState);
	void IsRunningEnterRoom(bool* EnteringRoom);
	void GetRoomSeekMode(TEnumAsByte<RoomSeekMode_ERoomSeekMode>* SeekMode);
	void GetRecentRooms(TArray<struct FRoomVisitInfo>* RecentRooms);
	void OnEnterNewRoom(class ARoomAreaBase* Room);
	void IsSearchingPOI(bool* IsSearching);
	void FindBestPOI(class ARoomAreaBase* Room, int* PointIndex, bool* Valid);
	void SearchPointOfInterest(class ARoomAreaBase* Room, int PointIndex);
	void SetChaseMode(bool Chase, bool UseOverrideSpeed, float OverrideSpeed);
	void GetShouldCheckHidingLocations(bool* ShouldCheckHidingLocations);
	void GetRecentlySearchedActors(TArray<class AActor*>* RecentlySearched);
	void GetIsRunningSearchAnim(bool* IsRunningSearch);
	void SearchLocation(class AActor* SearchActor, const struct FVector& SearchLocation);
	void GetCurrentRoom(class ARoomAreaBase** CurrentRoom);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif