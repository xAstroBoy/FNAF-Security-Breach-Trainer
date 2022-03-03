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
	 * BlueprintGeneratedClass OGM_VannyBattle.OGM_VannyBattle_C
	 * Size -> 0x0150 (FullSize[0x0401] - InheritedSize[0x02B1])
	 */
	class AOGM_VannyBattle_C : public AMGM_OfficeGameManger_C
	{
	public:
		unsigned char                                              UnknownData_A3CE[0x7];                                   // 0x02B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       Drop_Trigger;                                            // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     Vanny_Drop;                                              // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     Roxy_Spawn;                                              // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     Monty_Spawn;                                             // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     Vanny_Spawn;                                             // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Spawn;                                                   // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Drop;                                                    // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              Vanny_Path[0x28];                                        // 0x02F8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Monty_Path[0x28];                                        // 0x0320(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Roxy_Path[0x28];                                         // 0x0348(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Vanny_Drop_Path[0x28];                                   // 0x0370(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Open_Door[0x28];                                         // 0x0398(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Lair_Door[0x28];                                         // 0x03C0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class AVanny_C*                                            Vanny;                                                   // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AShatteredRoxy_C*                                    Roxy;                                                    // 0x03F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AAISeeker_C*                                         Monty;                                                   // 0x03F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Active;                                                  // 0x0400(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnEnd(E_EndMiniGameType_E_EndMiniGameType EndType);
		void On_Start();
		void OnFailure_51304B0B49067B4078771F8EA879D31D();
		void OnSuccess_51304B0B49067B4078771F8EA879D31D();
		void OnFailure_09F97D64470242AC12A058B1AC7CE376(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnSuccess_09F97D64470242AC12A058B1AC7CE376(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnFailure_51304B0B49067B4078771F8E7573F813();
		void OnSuccess_51304B0B49067B4078771F8E7573F813();
		void OnFailure_09F97D64470242AC12A058B17176C878(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnSuccess_09F97D64470242AC12A058B17176C878(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void BndEvt__Drop_Trigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void Vanny_Destroy();
		void Vanny_Redeem();
		void ExecuteUbergraph_OGM_VannyBattle(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
