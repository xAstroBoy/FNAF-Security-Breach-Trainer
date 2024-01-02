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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function EQG_AlertAI_SpawnPoints.EQG_AlertAI_SpawnPoints_C.Sort
	 */
	struct UEQG_AlertAI_SpawnPoints_C_Sort_Params
	{
	public:
		TArray<class AFNAFAISpawnPoint*>                           Points;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FVector                                             Location;                                                // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7HWR[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FVector>                                     Locations;                                               // 0x0020(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function EQG_AlertAI_SpawnPoints.EQG_AlertAI_SpawnPoints_C.Construct Point List
	 */
	struct UEQG_AlertAI_SpawnPoints_C_ConstructPointList_Params
	{
	public:
		TArray<class ASpawn_Helper_C*>                             AlertHelpers;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class AFNAFAISpawnPoint*>                           PointList;                                               // 0x0010(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function EQG_AlertAI_SpawnPoints.EQG_AlertAI_SpawnPoints_C.GetOverlappingSpawnHelpers
	 */
	struct UEQG_AlertAI_SpawnPoints_C_GetOverlappingSpawnHelpers_Params
	{
	public:
		TArray<class ASpawn_Helper_C*>                             AlertHelpers;                                            // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function EQG_AlertAI_SpawnPoints.EQG_AlertAI_SpawnPoints_C.DoItemGeneration
	 */
	struct UEQG_AlertAI_SpawnPoints_C_DoItemGeneration_Params
	{
	public:
		TArray<struct FVector>                                     ContextLocations;                                        // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
