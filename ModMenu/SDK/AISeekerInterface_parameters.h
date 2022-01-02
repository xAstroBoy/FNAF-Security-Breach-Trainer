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
// Parameters
//---------------------------------------------------------------------------

// Function AISeekerInterface.AISeekerInterface_C.SetSeekMode
struct UAISeekerInterface_C_SetSeekMode_Params
{
	bool                                               Seek;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AISeekerInterface.AISeekerInterface_C.GetHearingEnable
struct UAISeekerInterface_C_GetHearingEnable_Params
{
	bool                                               Enabled;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AISeekerInterface.AISeekerInterface_C.SetHearingEnable
struct UAISeekerInterface_C_SetHearingEnable_Params
{
	bool                                               enable;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AISeekerInterface.AISeekerInterface_C.ForceChasePlayer
struct UAISeekerInterface_C_ForceChasePlayer_Params
{
	bool                                               EnableChase;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AISeekerInterface.AISeekerInterface_C.GetRangeOfDistance
struct UAISeekerInterface_C_GetRangeOfDistance_Params
{
	float                                              Distance;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AIPlayerRange_EAIPlayerRange>          Range;                                                     // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AISeekerInterface.AISeekerInterface_C.IsCheckingHideLocation
struct UAISeekerInterface_C_IsCheckingHideLocation_Params
{
	bool                                               StillChecking;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AISeekerInterface.AISeekerInterface_C.SetIsTrackingPlayer
struct UAISeekerInterface_C_SetIsTrackingPlayer_Params
{
	bool                                               TrackingPlayer;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AISeekerInterface.AISeekerInterface_C.GetVisitedPOIs
struct UAISeekerInterface_C_GetVisitedPOIs_Params
{
	TArray<struct FPOIIndex>                           VisitedPOIs;                                               // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function AISeekerInterface.AISeekerInterface_C.GetAIData
struct UAISeekerInterface_C_GetAIData_Params
{
	struct FAIDataParams                               AI_Data;                                                   // 0x0000(0x0028)  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AISeekerInterface.AISeekerInterface_C.IsInChaseMode
struct UAISeekerInterface_C_IsInChaseMode_Params
{
	bool                                               InChaseMode;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AISeekerInterface.AISeekerInterface_C.RestartAI
struct UAISeekerInterface_C_RestartAI_Params
{
};

// Function AISeekerInterface.AISeekerInterface_C.SetAlertState
struct UAISeekerInterface_C_SetAlertState_Params
{
	int                                                AlertState;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AISeekerInterface.AISeekerInterface_C.IsRunningEnterRoom
struct UAISeekerInterface_C_IsRunningEnterRoom_Params
{
	bool                                               EnteringRoom;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AISeekerInterface.AISeekerInterface_C.GetRoomSeekMode
struct UAISeekerInterface_C_GetRoomSeekMode_Params
{
	TEnumAsByte<RoomSeekMode_ERoomSeekMode>            SeekMode;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AISeekerInterface.AISeekerInterface_C.GetRecentRooms
struct UAISeekerInterface_C_GetRecentRooms_Params
{
	TArray<struct FRoomVisitInfo>                      RecentRooms;                                               // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function AISeekerInterface.AISeekerInterface_C.OnEnterNewRoom
struct UAISeekerInterface_C_OnEnterNewRoom_Params
{
	class ARoomAreaBase*                               Room;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AISeekerInterface.AISeekerInterface_C.IsSearchingPOI
struct UAISeekerInterface_C_IsSearchingPOI_Params
{
	bool                                               IsSearching;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AISeekerInterface.AISeekerInterface_C.FindBestPOI
struct UAISeekerInterface_C_FindBestPOI_Params
{
	class ARoomAreaBase*                               Room;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PointIndex;                                                // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Valid;                                                     // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AISeekerInterface.AISeekerInterface_C.SearchPointOfInterest
struct UAISeekerInterface_C_SearchPointOfInterest_Params
{
	class ARoomAreaBase*                               Room;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PointIndex;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AISeekerInterface.AISeekerInterface_C.SetChaseMode
struct UAISeekerInterface_C_SetChaseMode_Params
{
	bool                                               Chase;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UseOverrideSpeed;                                          // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              OverrideSpeed;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AISeekerInterface.AISeekerInterface_C.GetShouldCheckHidingLocations
struct UAISeekerInterface_C_GetShouldCheckHidingLocations_Params
{
	bool                                               ShouldCheckHidingLocations;                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AISeekerInterface.AISeekerInterface_C.GetRecentlySearchedActors
struct UAISeekerInterface_C_GetRecentlySearchedActors_Params
{
	TArray<class AActor*>                              RecentlySearched;                                          // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function AISeekerInterface.AISeekerInterface_C.GetIsRunningSearchAnim
struct UAISeekerInterface_C_GetIsRunningSearchAnim_Params
{
	bool                                               IsRunningSearch;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AISeekerInterface.AISeekerInterface_C.SearchLocation
struct UAISeekerInterface_C_SearchLocation_Params
{
	class AActor*                                      SearchActor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     SearchLocation;                                            // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AISeekerInterface.AISeekerInterface_C.GetCurrentRoom
struct UAISeekerInterface_C_GetCurrentRoom_Params
{
	class ARoomAreaBase*                               CurrentRoom;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
