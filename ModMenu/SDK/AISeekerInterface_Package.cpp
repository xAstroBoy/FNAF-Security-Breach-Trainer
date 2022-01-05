﻿/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "AISeekerInterface_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AISeekerInterface.AISeekerInterface_C.SetSeekMode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AISeekerInterface.AISeekerInterface_C.GetHearingEnable
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AISeekerInterface.AISeekerInterface_C.SetHearingEnable
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AISeekerInterface.AISeekerInterface_C.ForceChasePlayer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AISeekerInterface.AISeekerInterface_C.GetRangeOfDistance
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TEnumAsByte<AIPlayerRange_EAIPlayerRange>          Range                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAISeekerInterface_C::GetRangeOfDistance(float Distance, TEnumAsByte<AIPlayerRange_EAIPlayerRange>* Range)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AISeekerInterface.AISeekerInterface_C.IsCheckingHideLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AISeekerInterface.AISeekerInterface_C.SetIsTrackingPlayer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AISeekerInterface.AISeekerInterface_C.GetVisitedPOIs
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FPOIIndex>                           VisitedPOIs                                                (Parm, OutParm, HasGetValueTypeHash)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AISeekerInterface.AISeekerInterface_C.GetAIData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FAIDataParams                               AI_Data                                                    (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAISeekerInterface_C::GetAIData(struct FAIDataParams* AI_Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AISeekerInterface.AISeekerInterface_C.GetAIData");
		
		UAISeekerInterface_C_GetAIData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AI_Data != nullptr)
			*AI_Data = params.AI_Data;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AISeekerInterface.AISeekerInterface_C.IsInChaseMode
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AISeekerInterface.AISeekerInterface_C.RestartAI
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AISeekerInterface.AISeekerInterface_C.SetAlertState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                AlertState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAISeekerInterface_C::SetAlertState(int AlertState)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AISeekerInterface.AISeekerInterface_C.IsRunningEnterRoom
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AISeekerInterface.AISeekerInterface_C.GetRoomSeekMode
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TEnumAsByte<RoomSeekMode_ERoomSeekMode>            SeekMode                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAISeekerInterface_C::GetRoomSeekMode(TEnumAsByte<RoomSeekMode_ERoomSeekMode>* SeekMode)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AISeekerInterface.AISeekerInterface_C.GetRecentRooms
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FRoomVisitInfo>                      RecentRooms                                                (Parm, OutParm, HasGetValueTypeHash)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AISeekerInterface.AISeekerInterface_C.OnEnterNewRoom
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AISeekerInterface.AISeekerInterface_C.IsSearchingPOI
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AISeekerInterface.AISeekerInterface_C.FindBestPOI
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ARoomAreaBase*                               Room                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                PointIndex                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAISeekerInterface_C::FindBestPOI(class ARoomAreaBase* Room, int* PointIndex, bool* Valid)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AISeekerInterface.AISeekerInterface_C.SearchPointOfInterest
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ARoomAreaBase*                               Room                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                PointIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAISeekerInterface_C::SearchPointOfInterest(class ARoomAreaBase* Room, int PointIndex)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AISeekerInterface.AISeekerInterface_C.SetChaseMode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AISeekerInterface.AISeekerInterface_C.GetShouldCheckHidingLocations
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AISeekerInterface.AISeekerInterface_C.GetRecentlySearchedActors
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class AActor*>                              RecentlySearched                                           (Parm, OutParm, HasGetValueTypeHash)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AISeekerInterface.AISeekerInterface_C.GetIsRunningSearchAnim
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AISeekerInterface.AISeekerInterface_C.SearchLocation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AISeekerInterface.AISeekerInterface_C.GetCurrentRoom
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAISeekerInterface_C.StaticClass
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

