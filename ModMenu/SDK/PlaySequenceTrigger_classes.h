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
	 * BlueprintGeneratedClass PlaySequenceTrigger.PlaySequenceTrigger_C
	 * Size -> 0x0119 (FullSize[0x0391] - InheritedSize[0x0278])
	 */
	class APlaySequenceTrigger_C : public APlayerTriggerWithConditionComps
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTimeCheckComponent_C*                               TimeCheckComponent;                                      // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        LeadingEmitter;                                          // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGameTypeCheckDestroy*                               GameTypeCheckDestroy;                                    // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCameraOverrideComponent_C*                          CameraOverrideComponent;                                 // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              Sequence[0x28];                                          // 0x02A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FScriptMulticastDelegate                             On_Sequence_Stop;                                        // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                              CineCamera[0x28];                                        // 0x02D8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class AActor*                                              PlayerCam;                                               // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                sequence_key;                                            // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DisablePlayerInput;                                      // 0x0310(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QXCJ[0x3];                                   // 0x0311(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                WwiseCinematicState;                                     // 0x0314(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                WwiseCinematicStateGroup;                                // 0x031C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OX39[0x4];                                   // 0x0324(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              LMMSplineFollowerActor[0x28];                            // 0x0324(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       DestroyAI;                                               // 0x0350(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HXZ6[0x7];                                   // 0x0351(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              LMMSplineFollowerManager[0x28];                          // 0x0351(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       PlayLeadingEmitter;                                      // 0x0380(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4GAX[0x7];                                   // 0x0381(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       EmitterStopEvent;                                        // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Hide_Hud;                                                // 0x0390(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void OnFailure_D36A04E9448D6961DBDCAA8A29E6DAD3();
		void OnSuccess_D36A04E9448D6961DBDCAA8A29E6DAD3();
		void OnFailure_1FFE06E54298CB19BCF15CA245E7FD55(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnSuccess_1FFE06E54298CB19BCF15CA245E7FD55(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnTriggered();
		void Take_Over_Camera();
		void On_Sequence_Stop_Event();
		void On_Sequence_Finished_Event();
		void ReceiveBeginPlay();
		void On_Sequence_Starting();
		void OnCheckpointLoad(class UFNAFSaveData* SaveDataObject);
		void ExecuteUbergraph_PlaySequenceTrigger(int32_t EntryPoint);
		void On_Sequence_Stop__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
