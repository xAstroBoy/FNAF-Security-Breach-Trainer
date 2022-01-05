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
	 * BlueprintGeneratedClass PowerStationManager.PowerStationManager_C
	 * Size -> 0x0049 (FullSize[0x0271] - InheritedSize[0x0228])
	 */
	class APowerStationManager_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              PowerStations[0x10];                                     // 0x0238(0x0010) UNKNOWN PROPERTY: ArrayProperty
		class FScriptMulticastDelegate                             OnPowerStationEntered;                                   // 0x0248(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       FreddyWaveTriggerEnable;                                 // 0x0258(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0H8C[0x7];                                   // 0x0259(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APowerStation_Actor_C*                               PlayersPowerStation;                                     // 0x0260(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             NextPowerStationEvent;                                   // 0x0268(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AllowTimeAdvance;                                        // 0x0270(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetPowerStationEvent();
		bool IsPlayerInPowerStation();
		void GetPowerStationID(class APowerStation_Actor_C* PowerStation, int* PowerStationID);
		void GetPowerStationByID(int PowerStationID, class APowerStation_Actor_C** PowerStation);
		void Finish_Power_Station_Event();
		void Power_Station_Entered(class APowerStation_Actor_C* PowerStation);
		void ExecuteUbergraph_PowerStationManager(int EntryPoint);
		void OnPowerStationEntered__DelegateSignature(class APowerStation_Actor_C* PowerStation, int PowerStationID);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
