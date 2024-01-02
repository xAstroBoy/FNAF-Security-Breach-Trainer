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
	 * BlueprintGeneratedClass OGM_GatorGolf.OGM_GatorGolf_C
	 * Size -> 0x009F (FullSize[0x0350] - InheritedSize[0x02B1])
	 */
	class AOGM_GatorGolf_C : public AMGM_OfficeGameManger_C
	{
	public:
		unsigned char                                              UnknownData_Y0Z7[0x7];                                   // 0x02B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaffBotSpawnerComponent_C*                         StaffBotSpawnerComponent;                                // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USetupSplineMovement_C*                              SetupSplineMovement;                                     // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              SpawnLocation[0x28];                                     // 0x02D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class APawn*                                               AiBot;                                                   // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              BadgeHolder[0x28];                                       // 0x0300(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              MontySeekerPath[0x28];                                   // 0x0328(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		void OnStart();
		void SpawnMonty();
		void ReceiveBeginPlay();
		void OnCollectSecurityBadge();
		void ExecuteUbergraph_OGM_GatorGolf(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
