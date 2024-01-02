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
	 * BlueprintGeneratedClass EQG_AlertAI_SpawnPoints.EQG_AlertAI_SpawnPoints_C
	 * Size -> 0x0005 (FullSize[0x0085] - InheritedSize[0x0080])
	 */
	class UEQG_AlertAI_SpawnPoints_C : public UEnvQueryGenerator_BlueprintBase
	{
	public:
		int32_t                                                    Max;                                                     // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DualWorld;                                               // 0x0084(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void Sort(TArray<class AFNAFAISpawnPoint*>* Points, const struct FVector& Location, TArray<struct FVector>* Locations);
		void ConstructPointList(TArray<class ASpawn_Helper_C*>* AlertHelpers, TArray<class AFNAFAISpawnPoint*>* PointList);
		void GetOverlappingSpawnHelpers(TArray<class ASpawn_Helper_C*>* AlertHelpers);
		void DoItemGeneration(TArray<struct FVector> ContextLocations);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
