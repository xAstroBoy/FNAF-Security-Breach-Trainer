#pragma once

/**
 * Name: FNAF Security Breach
 * Version: 2
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
	 * BlueprintGeneratedClass ShatteredMontyPile.ShatteredMontyPile_C
	 * Size -> 0x00D0 (FullSize[0x02F8] - InheritedSize[0x0228])
	 */
	class AShatteredMontyPile_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UChildActorComponent*                                MontyClawsCollectible;                                   // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_MontyGlasses;                                        // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Sparks1;                                                 // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Sparks;                                                  // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                ShatteredLegs;                                           // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UUpdateMissionComponent*                             UpdateMission_ThrillSeeker;                              // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGameTypeCheckDestroy*                               GameTypeCheckDestroy;                                    // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              ShatteredMonty;                                          // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       Is_Sparking;                                             // 0x0278(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SOAJ[0x7];                                   // 0x0279(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Beam1[0x28];                                             // 0x0279(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Beam2[0x28];                                             // 0x02A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Beam3[0x28];                                             // 0x02D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		void OnFailure_B1B69CE74ABD96C5F5032986CB0300E2();
		void OnSuccess_B1B69CE74ABD96C5F5032986CB0300E2();
		void OnFailure_58B7ED6B4FD53D679070E8A8EA58ADE3(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnSuccess_58B7ED6B4FD53D679070E8A8EA58ADE3(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnFailure_BE8F1D784F4D64083536E28939128882(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnSuccess_BE8F1D784F4D64083536E28939128882(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnFailure_784BAEFD4B25502D92084086769DB95B();
		void OnSuccess_784BAEFD4B25502D92084086769DB95B();
		void ReceiveBeginPlay();
		void On_Monty_Claws_Collected();
		void Set_State(bool Enabled);
		void Sparks_Delay_Loop();
		void Mark_Monty_Shattered();
		void ExecuteUbergraph_ShatteredMontyPile(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
