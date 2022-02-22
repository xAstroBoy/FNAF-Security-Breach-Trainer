#pragma once

/**
 * Name: FNAF Security Breach
 * Version: 2
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
	 * BlueprintGeneratedClass AISeekerInterface.AISeekerInterface_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAISeekerInterface_C : public UInterface
	{
	public:
		void SetSeekMode(bool Seek);
		void GetHearingEnable(bool* Enabled);
		void SetHearingEnable(bool enable);
		void ForceChasePlayer(bool EnableChase);
		void GetRangeOfDistance(float Distance, AIPlayerRange_EAIPlayerRange* Range);
		void IsCheckingHideLocation(bool* StillChecking);
		void SetIsTrackingPlayer(bool TrackingPlayer);
		void GetVisitedPOIs(TArray<struct FPOIIndex>* VisitedPOIs);
		void GetAIData(struct FAIDataParams* AI_Data);
		void IsInChaseMode(bool* InChaseMode);
		void RestartAI();
		void SetAlertState(int32_t AlertState);
		void IsRunningEnterRoom(bool* EnteringRoom);
		void GetRoomSeekMode(RoomSeekMode_ERoomSeekMode* SeekMode);
		void GetRecentRooms(TArray<struct FRoomVisitInfo>* RecentRooms);
		void OnEnterNewRoom(class ARoomAreaBase* Room);
		void IsSearchingPOI(bool* IsSearching);
		void FindBestPOI(class ARoomAreaBase* Room, int32_t* PointIndex, bool* Valid);
		void SearchPointOfInterest(class ARoomAreaBase* Room, int32_t PointIndex);
		void SetChaseMode(bool Chase, bool UseOverrideSpeed, float OverrideSpeed);
		void GetShouldCheckHidingLocations(bool* ShouldCheckHidingLocations);
		void GetRecentlySearchedActors(TArray<class AActor*>* RecentlySearched);
		void GetIsRunningSearchAnim(bool* IsRunningSearch);
		void SearchLocation(class AActor* SearchActor, const struct FVector& SearchLocation);
		void GetCurrentRoom(class ARoomAreaBase** CurrentRoom);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
