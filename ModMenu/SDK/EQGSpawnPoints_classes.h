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
	 * BlueprintGeneratedClass EQGSpawnPoints.EQGSpawnPoints_C
	 * Size -> 0x0001 (FullSize[0x0081] - InheritedSize[0x0080])
	 */
	class UEQGSpawnPoints_C : public UEnvQueryGenerator_BlueprintBase
	{
	public:
		EFNAFAISpawnType                                           SpawnType;                                               // 0x0080(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void DoItemGeneration(TArray<struct FVector> ContextLocations);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
