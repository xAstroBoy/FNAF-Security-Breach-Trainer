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
	 * BlueprintGeneratedClass SpawnAISceneComponent.SpawnAISceneComponent_C
	 * Size -> 0x0010 (FullSize[0x0208] - InheritedSize[0x01F8])
	 */
	class USpawnAISceneComponent_C : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_YXVK[0x8];                                   // 0x01F8(0x0008) Fix Super Size
		class APawn*                                               SpawnedPawn;                                             // 0x0200(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Spawn(EFNAFAISpawnType AIType, bool ForceShattered, class APawn** Pawn);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
