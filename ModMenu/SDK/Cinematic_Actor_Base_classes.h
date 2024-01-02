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
	 * BlueprintGeneratedClass Cinematic_Actor_Base.Cinematic_Actor_Base_C
	 * Size -> 0x0024 (FullSize[0x024C] - InheritedSize[0x0228])
	 */
	class ACinematic_Actor_Base_C : public AActor
	{
	public:
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Scene;                                                   // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FSeekerHourlyUpdate>                         HourlyMaterials;                                         // 0x0238(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    IndexToUse;                                              // 0x0248(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetUpMaterials();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
