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
	 * BlueprintGeneratedClass StaffBotSpawnerComponent.StaffBotSpawnerComponent_C
	 * Size -> 0x0047 (FullSize[0x00F7] - InheritedSize[0x00B0])
	 */
	class UStaffBotSpawnerComponent_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		unsigned char                                              SplineManagers[0x10];                                    // 0x00B8(0x0010) UNKNOWN PROPERTY: ArrayProperty
		TArray<class AStaffBotBase_C*>                             SpawnedStaffBots;                                        // 0x00C8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       DestroyStaffbotsWhenDestroyed;                           // 0x00D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       UseRandomPositions;                                      // 0x00D9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_934U[0x6];                                   // 0x00DA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<fnaf9_EFNAFAISpawnType>                             TypesToAlert;                                            // 0x00E0(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash
		int32_t                                                    NumberToAlert;                                           // 0x00F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       OverrideMaterials;                                       // 0x00F4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		StaffbotMaterial_Enum_EStaffbotMaterial_Enum               BotMaterialOverride;                                     // 0x00F5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		StaffBotType_EStaffBotType                                 StaffBotType;                                            // 0x00F6(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class AStaffBotBase_C* SpawnBot(const struct FVector& SpawnTransform_Location, class ASplinePathwayManager_C* SplineManager);
		void Spawn_Staff_Bots();
		void Destroy_Staff_Bots();
		void ReceiveEndPlay(Engine_EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_StaffBotSpawnerComponent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
