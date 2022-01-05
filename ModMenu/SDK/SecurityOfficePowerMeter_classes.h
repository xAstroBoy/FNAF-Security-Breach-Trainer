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
	 * BlueprintGeneratedClass SecurityOfficePowerMeter.SecurityOfficePowerMeter_C
	 * Size -> 0x004C (FullSize[0x0274] - InheritedSize[0x0228])
	 */
	class ASecurityOfficePowerMeter_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetComponent*                                    Widget;                                                  // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      TimeLeft;                                                // 0x0240(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OPUH[0x4];                                   // 0x0244(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              GameManger[0x28];                                        // 0x0244(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      TotalTime;                                               // 0x0270(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Update_Power_Display(float Percentage);
		void Update_Remaining_Time(float InputPin);
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void OnGameStart();
		void EndGame(TEnumAsByte<E_EndMiniGameType_E_EndMiniGameType> EndType);
		void ExecuteUbergraph_SecurityOfficePowerMeter(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
