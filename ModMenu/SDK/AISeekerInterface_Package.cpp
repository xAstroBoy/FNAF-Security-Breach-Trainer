/**
 * Name: FNAFSB
 * Version: 1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AISeekerInterface.AISeekerInterface_C.SetSeekMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Seek                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAISeekerInterface_C::SetSeekMode(bool Seek)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AISeekerInterface.AISeekerInterface_C.SetSeekMode");
		
		UAISeekerInterface_C_SetSeekMode_Params params {};
		params.Seek = Seek;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AISeekerInterface.AISeekerInterface_C.GetHearingEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAISeekerInterface_C::GetHearingEnable(bool* Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AISeekerInterface.AISeekerInterface_C.GetHearingEnable");
		
		UAISeekerInterface_C_GetHearingEnable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Enabled != nullptr)
			*Enabled = params.Enabled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AISeekerInterface.AISeekerInterface_C.SetHearingEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAISeekerInterface_C::SetHearingEnable(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AISeekerInterface.AISeekerInterface_C.SetHearingEnable");
		
		UAISeekerInterface_C_SetHearingEnable_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AISeekerInterface.AISeekerInterface_C.ForceChasePlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               EnableChase                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAISeekerInterface_C::ForceChasePlayer(bool EnableChase)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AISeekerInterface.AISeekerInterface_C.ForceChasePlayer");
		
		UAISeekerInterface_C_ForceChasePlayer_Params params {};
		params.EnableChase = EnableChase;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AISeekerInterface.AISeekerInterface_C.GetRangeOfDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EAIPlayerRange                                     Range                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAISeekerInterface_C::GetRangeOfDistance(float Distance, EAIPlayerRange* Range)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AISeekerInterface.AISeekerInterface_C.GetRangeOfDistance");
		
		UAISeekerInterface_C_GetRangeOfDistance_Params params {};
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Range != nullptr)
			*Range = params.Range;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AISeekerInterface.AISeekerInterface_C.IsCheckingHideLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               StillChecking                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAISeekerInterface_C::IsCheckingHideLocation(bool* StillChecking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AISeekerInterface.AISeekerInterface_C.IsCheckingHideLocation");
		
		UAISeekerInterface_C_IsCheckingHideLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StillChecking != nullptr)
			*StillChecking = params.StillChecking;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AISeekerInterface.AISeekerInterface_C.SetIsTrackingPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TrackingPlayer                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAISeekerInterface_C::SetIsTrackingPlayer(bool TrackingPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AISeekerInterface.AISeekerInterface_C.SetIsTrackingPlayer");
		
		UAISeekerInterface_C_SetIsTrackingPlayer_Params params {};
		params.TrackingPlayer = TrackingPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AISeekerInterface.AISeekerInterface_C.GetVisitedPOIs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FPOIIndex>                           VisitedPOIs                                                (Parm, OutParm)
	 */
	void UAISeekerInterface_C::GetVisitedPOIs(TArray<struct FPOIIndex>* VisitedPOIs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AISeekerInterface.AISeekerInterface_C.GetVisitedPOIs");
		
		UAISeekerInterface_C_GetVisitedPOIs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VisitedPOIs != nullptr)
			*VisitedPOIs = params.VisitedPOIs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AISeekerInterface.AISeekerInterface_C.GetAIData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAIDataParams                               AIData                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAISeekerInterface_C::GetAIData(struct FAIDataParams* AIData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AISeekerInterface.AISeekerInterface_C.GetAIData");
		
		UAISeekerInterface_C_GetAIData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AIData != nullptr)
			*AIData = params.AIData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AISeekerInterface.AISeekerInterface_C.IsInChaseMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InChaseMode                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAISeekerInterface_C::IsInChaseMode(bool* InChaseMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AISeekerInterface.AISeekerInterface_C.IsInChaseMode");
		
		UAISeekerInterface_C_IsInChaseMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InChaseMode != nullptr)
			*InChaseMode = params.InChaseMode;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AISeekerInterface.AISeekerInterface_C.RestartAI
	 * 		Flags  -> ()
	 */
	void UAISeekerInterface_C::RestartAI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AISeekerInterface.AISeekerInterface_C.RestartAI");
		
		UAISeekerInterface_C_RestartAI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AISeekerInterface.AISeekerInterface_C.SetAlertState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AlertState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAISeekerInterface_C::SetAlertState(int32_t AlertState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AISeekerInterface.AISeekerInterface_C.SetAlertState");
		
		UAISeekerInterface_C_SetAlertState_Params params {};
		params.AlertState = AlertState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AISeekerInterface.AISeekerInterface_C.IsRunningEnterRoom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               EnteringRoom                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAISeekerInterface_C::IsRunningEnterRoom(bool* EnteringRoom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AISeekerInterface.AISeekerInterface_C.IsRunningEnterRoom");
		
		UAISeekerInterface_C_IsRunningEnterRoom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EnteringRoom != nullptr)
			*EnteringRoom = params.EnteringRoom;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AISeekerInterface.AISeekerInterface_C.GetRoomSeekMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERoomSeekMode                                      SeekMode                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAISeekerInterface_C::GetRoomSeekMode(ERoomSeekMode* SeekMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AISeekerInterface.AISeekerInterface_C.GetRoomSeekMode");
		
		UAISeekerInterface_C_GetRoomSeekMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SeekMode != nullptr)
			*SeekMode = params.SeekMode;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AISeekerInterface.AISeekerInterface_C.GetRecentRooms
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FRoomVisitInfo>                      RecentRooms                                                (Parm, OutParm)
	 */
	void UAISeekerInterface_C::GetRecentRooms(TArray<struct FRoomVisitInfo>* RecentRooms)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AISeekerInterface.AISeekerInterface_C.GetRecentRooms");
		
		UAISeekerInterface_C_GetRecentRooms_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RecentRooms != nullptr)
			*RecentRooms = params.RecentRooms;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AISeekerInterface.AISeekerInterface_C.OnEnterNewRoom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARoomAreaBase*                               Room                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAISeekerInterface_C::OnEnterNewRoom(class ARoomAreaBase* Room)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AISeekerInterface.AISeekerInterface_C.OnEnterNewRoom");
		
		UAISeekerInterface_C_OnEnterNewRoom_Params params {};
		params.Room = Room;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AISeekerInterface.AISeekerInterface_C.IsSearchingPOI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSearching                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAISeekerInterface_C::IsSearchingPOI(bool* IsSearching)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AISeekerInterface.AISeekerInterface_C.IsSearchingPOI");
		
		UAISeekerInterface_C_IsSearchingPOI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsSearching != nullptr)
			*IsSearching = params.IsSearching;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AISeekerInterface.AISeekerInterface_C.FindBestPOI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARoomAreaBase*                               Room                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PointIndex                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAISeekerInterface_C::FindBestPOI(class ARoomAreaBase* Room, int32_t* PointIndex, bool* Valid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AISeekerInterface.AISeekerInterface_C.FindBestPOI");
		
		UAISeekerInterface_C_FindBestPOI_Params params {};
		params.Room = Room;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PointIndex != nullptr)
			*PointIndex = params.PointIndex;
		if (Valid != nullptr)
			*Valid = params.Valid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AISeekerInterface.AISeekerInterface_C.SearchPointOfInterest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARoomAreaBase*                               Room                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PointIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAISeekerInterface_C::SearchPointOfInterest(class ARoomAreaBase* Room, int32_t PointIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AISeekerInterface.AISeekerInterface_C.SearchPointOfInterest");
		
		UAISeekerInterface_C_SearchPointOfInterest_Params params {};
		params.Room = Room;
		params.PointIndex = PointIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AISeekerInterface.AISeekerInterface_C.SetChaseMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Chase                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UseOverrideSpeed                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OverrideSpeed                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAISeekerInterface_C::SetChaseMode(bool Chase, bool UseOverrideSpeed, float OverrideSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AISeekerInterface.AISeekerInterface_C.SetChaseMode");
		
		UAISeekerInterface_C_SetChaseMode_Params params {};
		params.Chase = Chase;
		params.UseOverrideSpeed = UseOverrideSpeed;
		params.OverrideSpeed = OverrideSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AISeekerInterface.AISeekerInterface_C.GetShouldCheckHidingLocations
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldCheckHidingLocations                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAISeekerInterface_C::GetShouldCheckHidingLocations(bool* ShouldCheckHidingLocations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AISeekerInterface.AISeekerInterface_C.GetShouldCheckHidingLocations");
		
		UAISeekerInterface_C_GetShouldCheckHidingLocations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldCheckHidingLocations != nullptr)
			*ShouldCheckHidingLocations = params.ShouldCheckHidingLocations;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AISeekerInterface.AISeekerInterface_C.GetRecentlySearchedActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              RecentlySearched                                           (Parm, OutParm)
	 */
	void UAISeekerInterface_C::GetRecentlySearchedActors(TArray<class AActor*>* RecentlySearched)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AISeekerInterface.AISeekerInterface_C.GetRecentlySearchedActors");
		
		UAISeekerInterface_C_GetRecentlySearchedActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RecentlySearched != nullptr)
			*RecentlySearched = params.RecentlySearched;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AISeekerInterface.AISeekerInterface_C.GetIsRunningSearchAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsRunningSearch                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAISeekerInterface_C::GetIsRunningSearchAnim(bool* IsRunningSearch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AISeekerInterface.AISeekerInterface_C.GetIsRunningSearchAnim");
		
		UAISeekerInterface_C_GetIsRunningSearchAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsRunningSearch != nullptr)
			*IsRunningSearch = params.IsRunningSearch;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AISeekerInterface.AISeekerInterface_C.SearchLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      SearchActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     SearchLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAISeekerInterface_C::SearchLocation(class AActor* SearchActor, const struct FVector& SearchLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AISeekerInterface.AISeekerInterface_C.SearchLocation");
		
		UAISeekerInterface_C_SearchLocation_Params params {};
		params.SearchActor = SearchActor;
		params.SearchLocation = SearchLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AISeekerInterface.AISeekerInterface_C.GetCurrentRoom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARoomAreaBase*                               CurrentRoom                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAISeekerInterface_C::GetCurrentRoom(class ARoomAreaBase** CurrentRoom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AISeekerInterface.AISeekerInterface_C.GetCurrentRoom");
		
		UAISeekerInterface_C_GetCurrentRoom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentRoom != nullptr)
			*CurrentRoom = params.CurrentRoom;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISeekerInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISeekerInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AISeekerInterface.AISeekerInterface_C");
		return ptr;
	}

}


