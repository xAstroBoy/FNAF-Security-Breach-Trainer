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
	 * 		Name   -> Function EQG_AlertAI_SpawnPoints.EQG_AlertAI_SpawnPoints_C.Sort
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AFNAFAISpawnPoint*>                   Points                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FVector>                             Locations                                                  (Parm, OutParm)
	 */
	void UEQG_AlertAI_SpawnPoints_C::Sort(TArray<class AFNAFAISpawnPoint*>* Points, const struct FVector& Location, TArray<struct FVector>* Locations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQG_AlertAI_SpawnPoints.EQG_AlertAI_SpawnPoints_C.Sort");
		
		UEQG_AlertAI_SpawnPoints_C_Sort_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Points != nullptr)
			*Points = params.Points;
		if (Locations != nullptr)
			*Locations = params.Locations;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQG_AlertAI_SpawnPoints.EQG_AlertAI_SpawnPoints_C.Construct Point List
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ASpawn_Helper_C*>                     AlertHelpers                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class AFNAFAISpawnPoint*>                   PointList                                                  (Parm, OutParm)
	 */
	void UEQG_AlertAI_SpawnPoints_C::ConstructPointList(TArray<class ASpawn_Helper_C*>* AlertHelpers, TArray<class AFNAFAISpawnPoint*>* PointList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQG_AlertAI_SpawnPoints.EQG_AlertAI_SpawnPoints_C.Construct Point List");
		
		UEQG_AlertAI_SpawnPoints_C_ConstructPointList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AlertHelpers != nullptr)
			*AlertHelpers = params.AlertHelpers;
		if (PointList != nullptr)
			*PointList = params.PointList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQG_AlertAI_SpawnPoints.EQG_AlertAI_SpawnPoints_C.GetOverlappingSpawnHelpers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ASpawn_Helper_C*>                     AlertHelpers                                               (Parm, OutParm)
	 */
	void UEQG_AlertAI_SpawnPoints_C::GetOverlappingSpawnHelpers(TArray<class ASpawn_Helper_C*>* AlertHelpers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQG_AlertAI_SpawnPoints.EQG_AlertAI_SpawnPoints_C.GetOverlappingSpawnHelpers");
		
		UEQG_AlertAI_SpawnPoints_C_GetOverlappingSpawnHelpers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AlertHelpers != nullptr)
			*AlertHelpers = params.AlertHelpers;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EQG_AlertAI_SpawnPoints.EQG_AlertAI_SpawnPoints_C.DoItemGeneration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVector>                             ContextLocations                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UEQG_AlertAI_SpawnPoints_C::DoItemGeneration(TArray<struct FVector> ContextLocations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQG_AlertAI_SpawnPoints.EQG_AlertAI_SpawnPoints_C.DoItemGeneration");
		
		UEQG_AlertAI_SpawnPoints_C_DoItemGeneration_Params params {};
		params.ContextLocations = ContextLocations;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEQG_AlertAI_SpawnPoints_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEQG_AlertAI_SpawnPoints_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EQG_AlertAI_SpawnPoints.EQG_AlertAI_SpawnPoints_C");
		return ptr;
	}

}


