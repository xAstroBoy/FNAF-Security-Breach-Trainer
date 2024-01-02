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
	 * 		Name   -> Function RoomSystem.HideCueObjectInterface.SetupWorldCue
	 * 		Flags  -> ()
	 */
	void UHideCueObjectInterface::SetupWorldCue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.HideCueObjectInterface.SetupWorldCue");
		
		UHideCueObjectInterface_SetupWorldCue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.HideCueObjectInterface.ResetWorldCue
	 * 		Flags  -> ()
	 */
	void UHideCueObjectInterface::ResetWorldCue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.HideCueObjectInterface.ResetWorldCue");
		
		UHideCueObjectInterface_ResetWorldCue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHideCueObjectInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHideCueObjectInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RoomSystem.HideCueObjectInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.AIHideLocationInterface.IsPlayerInAttackRange
	 * 		Flags  -> ()
	 */
	bool UAIHideLocationInterface::IsPlayerInAttackRange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.AIHideLocationInterface.IsPlayerInAttackRange");
		
		UAIHideLocationInterface_IsPlayerInAttackRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.AIHideLocationInterface.GetHideLocationAndRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAIHideLocationInterface::GetHideLocationAndRotation(struct FVector* Location, struct FRotator* Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.AIHideLocationInterface.GetHideLocationAndRotation");
		
		UAIHideLocationInterface_GetHideLocationAndRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
		if (Rotation != nullptr)
			*Rotation = params.Rotation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.AIHideLocationInterface.GetHideCueActor
	 * 		Flags  -> ()
	 */
	class AActor* UAIHideLocationInterface::GetHideCueActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.AIHideLocationInterface.GetHideCueActor");
		
		UAIHideLocationInterface_GetHideCueActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.AIHideLocationInterface.GetAIEjectLocationAndRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAIHideLocationInterface::GetAIEjectLocationAndRotation(struct FVector* Location, struct FRotator* Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.AIHideLocationInterface.GetAIEjectLocationAndRotation");
		
		UAIHideLocationInterface_GetAIEjectLocationAndRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
		if (Rotation != nullptr)
			*Rotation = params.Rotation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIHideLocationInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIHideLocationInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RoomSystem.AIHideLocationInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.DoorInterface.SetSecurityLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewSecurityLevel                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDoorInterface::SetSecurityLevel(int32_t NewSecurityLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.DoorInterface.SetSecurityLevel");
		
		UDoorInterface_SetSecurityLevel_Params params {};
		params.NewSecurityLevel = NewSecurityLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.DoorInterface.SetDoorRequiredItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDoorInterface::SetDoorRequiredItem(const class FName& ItemName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.DoorInterface.SetDoorRequiredItem");
		
		UDoorInterface_SetDoorRequiredItem_Params params {};
		params.ItemName = ItemName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.DoorInterface.SetDoorLockPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Lock                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDoorInterface::SetDoorLockPlayer(bool Lock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.DoorInterface.SetDoorLockPlayer");
		
		UDoorInterface_SetDoorLockPlayer_Params params {};
		params.Lock = Lock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.DoorInterface.SetDoorLockAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Lock                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDoorInterface::SetDoorLockAI(bool Lock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.DoorInterface.SetDoorLockAI");
		
		UDoorInterface_SetDoorLockAI_Params params {};
		params.Lock = Lock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.DoorInterface.IsDoorOpen
	 * 		Flags  -> ()
	 */
	bool UDoorInterface::IsDoorOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.DoorInterface.IsDoorOpen");
		
		UDoorInterface_IsDoorOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.DoorInterface.IsDoorLockedForPlayer
	 * 		Flags  -> ()
	 */
	bool UDoorInterface::IsDoorLockedForPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.DoorInterface.IsDoorLockedForPlayer");
		
		UDoorInterface_IsDoorLockedForPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.DoorInterface.IsDoorLockedForAI
	 * 		Flags  -> ()
	 */
	bool UDoorInterface::IsDoorLockedForAI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.DoorInterface.IsDoorLockedForAI");
		
		UDoorInterface_IsDoorLockedForAI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.DoorInterface.HasDoorInitialized
	 * 		Flags  -> ()
	 */
	bool UDoorInterface::HasDoorInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.DoorInterface.HasDoorInitialized");
		
		UDoorInterface_HasDoorInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.DoorInterface.ForceDoorOpen
	 * 		Flags  -> ()
	 */
	void UDoorInterface::ForceDoorOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.DoorInterface.ForceDoorOpen");
		
		UDoorInterface_ForceDoorOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.DoorInterface.ForceDoorClose
	 * 		Flags  -> ()
	 */
	void UDoorInterface::ForceDoorClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.DoorInterface.ForceDoorClose");
		
		UDoorInterface_ForceDoorClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDoorInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDoorInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RoomSystem.DoorInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.POIBlueprintLibrary.SetPOIVisited
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPOIIndex                                   Index                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UPOIBlueprintLibrary::SetPOIVisited(const struct FPOIIndex& Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.POIBlueprintLibrary.SetPOIVisited");
		
		UPOIBlueprintLibrary_SetPOIVisited_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.POIBlueprintLibrary.IsValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPOIIndex                                   Index                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UPOIBlueprintLibrary::IsValid(const struct FPOIIndex& Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.POIBlueprintLibrary.IsValid");
		
		UPOIBlueprintLibrary_IsValid_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.POIBlueprintLibrary.HasPOIBeenVisited
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPOIIndex                                   Index                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UPOIBlueprintLibrary::HasPOIBeenVisited(const struct FPOIIndex& Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.POIBlueprintLibrary.HasPOIBeenVisited");
		
		UPOIBlueprintLibrary_HasPOIBeenVisited_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.POIBlueprintLibrary.GetPOIResultsFromIndices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FPOIIndex>                           Indices                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPOIResult>                          Results                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UPOIBlueprintLibrary::GetPOIResultsFromIndices(TArray<struct FPOIIndex> Indices, TArray<struct FPOIResult>* Results)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.POIBlueprintLibrary.GetPOIResultsFromIndices");
		
		UPOIBlueprintLibrary_GetPOIResultsFromIndices_Params params {};
		params.Indices = Indices;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Results != nullptr)
			*Results = params.Results;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.POIBlueprintLibrary.GetPOIInfoFromIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPOIIndex                                   Index                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FPointOfInterestRuntimeInfo UPOIBlueprintLibrary::GetPOIInfoFromIndex(const struct FPOIIndex& Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.POIBlueprintLibrary.GetPOIInfoFromIndex");
		
		UPOIBlueprintLibrary_GetPOIInfoFromIndex_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.POIBlueprintLibrary.CreatePOIIndicesFromResults
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FPOIResult>                          Results                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPOIIndex>                           Indices                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UPOIBlueprintLibrary::CreatePOIIndicesFromResults(TArray<struct FPOIResult> Results, TArray<struct FPOIIndex>* Indices)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.POIBlueprintLibrary.CreatePOIIndicesFromResults");
		
		UPOIBlueprintLibrary_CreatePOIIndicesFromResults_Params params {};
		params.Results = Results;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Indices != nullptr)
			*Indices = params.Indices;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPOIBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPOIBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RoomSystem.POIBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.POIResultBlueprintLibrary.HasPOIBeenVisited
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointOfInterestRuntimeInfo                 Info                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UPOIResultBlueprintLibrary::HasPOIBeenVisited(const struct FPointOfInterestRuntimeInfo& Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.POIResultBlueprintLibrary.HasPOIBeenVisited");
		
		UPOIResultBlueprintLibrary_HasPOIBeenVisited_Params params {};
		params.Info = Info;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPOIResultBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPOIResultBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RoomSystem.POIResultBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.RoomAreaBase.SetPOIVisited
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARoomAreaBase::SetPOIVisited(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.RoomAreaBase.SetPOIVisited");
		
		ARoomAreaBase_SetPOIVisited_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.RoomAreaBase.ResetPOIHeat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARoomAreaBase::ResetPOIHeat(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.RoomAreaBase.ResetPOIHeat");
		
		ARoomAreaBase_ResetPOIHeat_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.RoomAreaBase.IsLocationInRoom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ARoomAreaBase::IsLocationInRoom(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.RoomAreaBase.IsLocationInRoom");
		
		ARoomAreaBase_IsLocationInRoom_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.RoomAreaBase.GetTotalRoomArea
	 * 		Flags  -> ()
	 */
	float ARoomAreaBase::GetTotalRoomArea()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.RoomAreaBase.GetTotalRoomArea");
		
		ARoomAreaBase_GetTotalRoomArea_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.RoomAreaBase.GetRoomPoints
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              PointDelta                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FVector> ARoomAreaBase::GetRoomPoints(float PointDelta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.RoomAreaBase.GetRoomPoints");
		
		ARoomAreaBase_GetRoomPoints_Params params {};
		params.PointDelta = PointDelta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.RoomAreaBase.GetRoomEntryPoints
	 * 		Flags  -> ()
	 */
	TMap<int32_t, struct FVector> ARoomAreaBase::GetRoomEntryPoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.RoomAreaBase.GetRoomEntryPoints");
		
		ARoomAreaBase_GetRoomEntryPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.RoomAreaBase.GetRoomEntryPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector ARoomAreaBase::GetRoomEntryPoint(int32_t EntryIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.RoomAreaBase.GetRoomEntryPoint");
		
		ARoomAreaBase_GetRoomEntryPoint_Params params {};
		params.EntryIndex = EntryIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.RoomAreaBase.GetRoomAdjacency
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARoomAreaBase*                               Room                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FRoomAdjacencyInfo> ARoomAreaBase::GetRoomAdjacency(class ARoomAreaBase* Room)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.RoomAreaBase.GetRoomAdjacency");
		
		ARoomAreaBase_GetRoomAdjacency_Params params {};
		params.Room = Room;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.RoomAreaBase.GetRandomLocationInRoom
	 * 		Flags  -> ()
	 */
	struct FVector ARoomAreaBase::GetRandomLocationInRoom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.RoomAreaBase.GetRandomLocationInRoom");
		
		ARoomAreaBase_GetRandomLocationInRoom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.RoomAreaBase.GetPointsOfInterestInfo
	 * 		Flags  -> ()
	 */
	TArray<struct FPointOfInterestRuntimeInfo> ARoomAreaBase::GetPointsOfInterestInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.RoomAreaBase.GetPointsOfInterestInfo");
		
		ARoomAreaBase_GetPointsOfInterestInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.RoomAreaBase.GetPointsOfInterest
	 * 		Flags  -> ()
	 */
	TArray<struct FVector> ARoomAreaBase::GetPointsOfInterest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.RoomAreaBase.GetPointsOfInterest");
		
		ARoomAreaBase_GetPointsOfInterest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.RoomAreaBase.GetPointOfInterestInfoByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPointOfInterestRuntimeInfo ARoomAreaBase::GetPointOfInterestInfoByIndex(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.RoomAreaBase.GetPointOfInterestInfoByIndex");
		
		ARoomAreaBase_GetPointOfInterestInfoByIndex_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.RoomAreaBase.GetPlayerHeat
	 * 		Flags  -> ()
	 */
	float ARoomAreaBase::GetPlayerHeat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.RoomAreaBase.GetPlayerHeat");
		
		ARoomAreaBase_GetPlayerHeat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.RoomAreaBase.GetMapName
	 * 		Flags  -> ()
	 */
	class FName ARoomAreaBase::GetMapName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.RoomAreaBase.GetMapName");
		
		ARoomAreaBase_GetMapName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.RoomAreaBase.GetDoors
	 * 		Flags  -> ()
	 */
	TArray<class AActor*> ARoomAreaBase::GetDoors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.RoomAreaBase.GetDoors");
		
		ARoomAreaBase_GetDoors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.RoomAreaBase.GetDetectors
	 * 		Flags  -> ()
	 */
	TArray<class UBoxComponent*> ARoomAreaBase::GetDetectors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.RoomAreaBase.GetDetectors");
		
		ARoomAreaBase_GetDetectors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.RoomAreaBase.GetCharacterDetectorRoot
	 * 		Flags  -> ()
	 */
	class USceneComponent* ARoomAreaBase::GetCharacterDetectorRoot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.RoomAreaBase.GetCharacterDetectorRoot");
		
		ARoomAreaBase_GetCharacterDetectorRoot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.RoomAreaBase.GetAllHideActors
	 * 		Flags  -> ()
	 */
	TArray<class AActor*> ARoomAreaBase::GetAllHideActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.RoomAreaBase.GetAllHideActors");
		
		ARoomAreaBase_GetAllHideActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.RoomAreaBase.GetAllAIHideActors
	 * 		Flags  -> ()
	 */
	TArray<class AActor*> ARoomAreaBase::GetAllAIHideActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.RoomAreaBase.GetAllAIHideActors");
		
		ARoomAreaBase_GetAllAIHideActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.RoomAreaBase.GetAllAdjacentRooms
	 * 		Flags  -> ()
	 */
	TArray<struct FRoomAdjacencyInfo> ARoomAreaBase::GetAllAdjacentRooms()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.RoomAreaBase.GetAllAdjacentRooms");
		
		ARoomAreaBase_GetAllAdjacentRooms_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.RoomAreaBase.GetAllAdjacentRoomInfos
	 * 		Flags  -> ()
	 */
	TArray<struct FRoomAdjacencyInfo> ARoomAreaBase::GetAllAdjacentRoomInfos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.RoomAreaBase.GetAllAdjacentRoomInfos");
		
		ARoomAreaBase_GetAllAdjacentRoomInfos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.RoomAreaBase.GetAIHeat
	 * 		Flags  -> ()
	 */
	float ARoomAreaBase::GetAIHeat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.RoomAreaBase.GetAIHeat");
		
		ARoomAreaBase_GetAIHeat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.RoomAreaBase.GetAdjacentInfoFromDoor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Door                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRoomAdjacencyInfo ARoomAreaBase::GetAdjacentInfoFromDoor(class AActor* Door)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.RoomAreaBase.GetAdjacentInfoFromDoor");
		
		ARoomAreaBase_GetAdjacentInfoFromDoor_Params params {};
		params.Door = Door;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.RoomAreaBase.ClearPOIVisited
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARoomAreaBase::ClearPOIVisited(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.RoomAreaBase.ClearPOIVisited");
		
		ARoomAreaBase_ClearPOIVisited_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.RoomAreaBase.AdjustPOIHeat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARoomAreaBase::AdjustPOIHeat(int32_t Index, float Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.RoomAreaBase.AdjustPOIHeat");
		
		ARoomAreaBase_AdjustPOIHeat_Params params {};
		params.Index = Index;
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARoomAreaBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARoomAreaBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RoomSystem.RoomAreaBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.RoomSystem.StartRoomSystem
	 * 		Flags  -> ()
	 */
	void URoomSystem::StartRoomSystem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.RoomSystem.StartRoomSystem");
		
		URoomSystem_StartRoomSystem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.RoomSystem.RemovePOIsFromArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FPOIIndex>                           POIsToRemove                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPOIResult>                          POIArray                                                   (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TArray<struct FPOIResult> URoomSystem::RemovePOIsFromArray(TArray<struct FPOIIndex>* POIsToRemove, TArray<struct FPOIResult>* POIArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.RoomSystem.RemovePOIsFromArray");
		
		URoomSystem_RemovePOIsFromArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (POIsToRemove != nullptr)
			*POIsToRemove = params.POIsToRemove;
		if (POIArray != nullptr)
			*POIArray = params.POIArray;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.RoomSystem.PlayerExitedRoom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARoomAreaBase*                               RoomExited                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URoomSystem::PlayerExitedRoom(class ARoomAreaBase* RoomExited)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.RoomSystem.PlayerExitedRoom");
		
		URoomSystem_PlayerExitedRoom_Params params {};
		params.RoomExited = RoomExited;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.RoomSystem.PlayerEnteredRoom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARoomAreaBase*                               RoomEntered                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URoomSystem::PlayerEnteredRoom(class ARoomAreaBase* RoomEntered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.RoomSystem.PlayerEnteredRoom");
		
		URoomSystem_PlayerEnteredRoom_Params params {};
		params.RoomEntered = RoomEntered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.RoomSystem.IsPlayerInRoom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Room                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URoomSystem::IsPlayerInRoom(class AActor* Room)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.RoomSystem.IsPlayerInRoom");
		
		URoomSystem_IsPlayerInRoom_Params params {};
		params.Room = Room;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.RoomSystem.GetWeightedRandomPOIFromArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FPOIResult>                          POIArray                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bOutValid                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPOIResult                                  OutResult                                                  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void URoomSystem::GetWeightedRandomPOIFromArray(TArray<struct FPOIResult> POIArray, bool* bOutValid, struct FPOIResult* OutResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.RoomSystem.GetWeightedRandomPOIFromArray");
		
		URoomSystem_GetWeightedRandomPOIFromArray_Params params {};
		params.POIArray = POIArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOutValid != nullptr)
			*bOutValid = params.bOutValid;
		if (OutResult != nullptr)
			*OutResult = params.OutResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.RoomSystem.GetRoomAtLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ARoomAreaBase* URoomSystem::GetRoomAtLocation(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.RoomSystem.GetRoomAtLocation");
		
		URoomSystem_GetRoomAtLocation_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.RoomSystem.GetPOIsInRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     WorldLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPOIResult>                          OutPointIndices                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void URoomSystem::GetPOIsInRange(const struct FVector& WorldLocation, float Radius, TArray<struct FPOIResult>* OutPointIndices)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.RoomSystem.GetPOIsInRange");
		
		URoomSystem_GetPOIsInRange_Params params {};
		params.WorldLocation = WorldLocation;
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPointIndices != nullptr)
			*OutPointIndices = params.OutPointIndices;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.RoomSystem.GetPOIsInNavigableRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       NavigationPawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPOIResult>                          OutPOIs                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentActionInfo                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void URoomSystem::GetPOIsInNavigableRange(class APawn* NavigationPawn, float Radius, TArray<struct FPOIResult>* OutPOIs, const struct FLatentActionInfo& LatentActionInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.RoomSystem.GetPOIsInNavigableRange");
		
		URoomSystem_GetPOIsInNavigableRange_Params params {};
		params.NavigationPawn = NavigationPawn;
		params.Radius = Radius;
		params.LatentActionInfo = LatentActionInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPOIs != nullptr)
			*OutPOIs = params.OutPOIs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.RoomSystem.GetPlayerVisitAgeForRoom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Room                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float URoomSystem::GetPlayerVisitAgeForRoom(class AActor* Room)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.RoomSystem.GetPlayerVisitAgeForRoom");
		
		URoomSystem_GetPlayerVisitAgeForRoom_Params params {};
		params.Room = Room;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.RoomSystem.GetPlayerTimeInRoom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Room                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float URoomSystem::GetPlayerTimeInRoom(class AActor* Room)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.RoomSystem.GetPlayerTimeInRoom");
		
		URoomSystem_GetPlayerTimeInRoom_Params params {};
		params.Room = Room;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.RoomSystem.GetPlayerRoomInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Room                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPlayerRoomInfo                             RoomInfo                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               Found                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URoomSystem::GetPlayerRoomInfo(class AActor* Room, struct FPlayerRoomInfo* RoomInfo, bool* Found)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.RoomSystem.GetPlayerRoomInfo");
		
		URoomSystem_GetPlayerRoomInfo_Params params {};
		params.Room = Room;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RoomInfo != nullptr)
			*RoomInfo = params.RoomInfo;
		if (Found != nullptr)
			*Found = params.Found;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.RoomSystem.GetPlayerCurrentRooms
	 * 		Flags  -> ()
	 */
	TArray<class ARoomAreaBase*> URoomSystem::GetPlayerCurrentRooms()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.RoomSystem.GetPlayerCurrentRooms");
		
		URoomSystem_GetPlayerCurrentRooms_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.RoomSystem.GetHighestHeatPOIFromArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FPOIResult>                          POIArray                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bValid                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPOIResult                                  OutResult                                                  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void URoomSystem::GetHighestHeatPOIFromArray(TArray<struct FPOIResult> POIArray, bool* bValid, struct FPOIResult* OutResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.RoomSystem.GetHighestHeatPOIFromArray");
		
		URoomSystem_GetHighestHeatPOIFromArray_Params params {};
		params.POIArray = POIArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bValid != nullptr)
			*bValid = params.bValid;
		if (OutResult != nullptr)
			*OutResult = params.OutResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.RoomSystem.GetClosestPointOfInterest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     WorldLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOutValid                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPOIResult                                  OutResult                                                  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void URoomSystem::GetClosestPointOfInterest(const struct FVector& WorldLocation, bool* bOutValid, struct FPOIResult* OutResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.RoomSystem.GetClosestPointOfInterest");
		
		URoomSystem_GetClosestPointOfInterest_Params params {};
		params.WorldLocation = WorldLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOutValid != nullptr)
			*bOutValid = params.bOutValid;
		if (OutResult != nullptr)
			*OutResult = params.OutResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.RoomSystem.GetAllRoomDistancesFromRoom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARoomAreaBase*                               Room                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TMap<class ARoomAreaBase*, int32_t> URoomSystem::GetAllRoomDistancesFromRoom(class ARoomAreaBase* Room)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.RoomSystem.GetAllRoomDistancesFromRoom");
		
		URoomSystem_GetAllRoomDistancesFromRoom_Params params {};
		params.Room = Room;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.RoomSystem.GetAllRoomDistancesFromPlayerRoom
	 * 		Flags  -> ()
	 */
	TMap<class ARoomAreaBase*, int32_t> URoomSystem::GetAllRoomDistancesFromPlayerRoom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.RoomSystem.GetAllRoomDistancesFromPlayerRoom");
		
		URoomSystem_GetAllRoomDistancesFromPlayerRoom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoomSystem.RoomSystem.AdjustClosestPointOfInterestHeat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     WorldLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URoomSystem::AdjustClosestPointOfInterestHeat(const struct FVector& WorldLocation, float Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoomSystem.RoomSystem.AdjustClosestPointOfInterestHeat");
		
		URoomSystem_AdjustClosestPointOfInterestHeat_Params params {};
		params.WorldLocation = WorldLocation;
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URoomSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URoomSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RoomSystem.RoomSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URoomSystemSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URoomSystemSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RoomSystem.RoomSystemSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URoomVisibilityData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URoomVisibilityData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RoomSystem.RoomVisibilityData");
		return ptr;
	}

}


