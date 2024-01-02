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
	 * AnimBlueprintGeneratedClass Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C
	 * Size -> 0x1CC7 (FullSize[0x1F7F] - InheritedSize[0x02B8])
	 */
	class UGreg_FirstPerson_ABP_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_LSR6[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0x02F8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x0320(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x0348(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x0370(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x0398(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x03C0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x03E8(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_22;                         // 0x0410(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_10;                            // 0x0490(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_21;                         // 0x04C0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9;                             // 0x0540(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_20;                         // 0x0570(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_8;                             // 0x05F0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_19;                         // 0x0620(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_18;                         // 0x06A0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_17;                         // 0x0720(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_16;                         // 0x07A0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_15;                         // 0x0820(0x0080)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_4;                         // 0x08A0(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x0950(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_14;                         // 0x0980(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_13;                         // 0x0A00(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_12;                         // 0x0A80(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_11;                         // 0x0B00(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_10;                         // 0x0B80(0x0080)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_3;                         // 0x0C00(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x0CB0(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_4;                        // 0x0CE0(0x00E8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_3;                        // 0x0DC8(0x00E8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_2;                        // 0x0EB0(0x00E8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0x0F98(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x1018(0x0080)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_2;                         // 0x1098(0x00B0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x1148(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x11E8(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x1268(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x12E8(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x1368(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x13E8(0x0080)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum;                           // 0x1468(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x1518(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x1548(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_4;                                    // 0x15F8(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2;                        // 0x1640(0x00C0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x1700(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x1858(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x1880(0x0028)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_3;                                    // 0x18A8(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x18F0(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x1938(0x00A0)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x19D8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x1A00(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x1A28(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x1A50(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x1A78(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x1AF8(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x1B28(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x1C10(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x1C40(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x1CC0(0x0030)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator;                         // 0x1CF0(0x0050)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x1D40(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x1D70(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x1E20(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x1E68(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x1F28(0x0028)
		EGregoryAnimItemEnum                                       ItemEnum;                                                // 0x1F50(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasFazWatch;                                             // 0x1F51(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bFazwatchUP;                                             // 0x1F52(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UAGT[0x1];                                   // 0x1F53(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpeedInput;                                              // 0x1F54(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isMoving;                                                // 0x1F58(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JUUH[0x7];                                   // 0x1F59(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AGregory_C*                                          GregPawn;                                                // 0x1F60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SwitchItem;                                              // 0x1F68(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isDown;                                                  // 0x1F69(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WCPU[0x6];                                   // 0x1F6A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AEquippable_C*                                       NewEquip;                                                // 0x1F70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanPlayFazWatchAnim;                                     // 0x1F78(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsPuttingAwayItem;                                       // 0x1F79(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsPullingOutItem;                                        // 0x1F7A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsFullyDown;                                             // 0x1F7B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isDLC;                                                   // 0x1F7C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bHasFlashlightDLC;                                       // 0x1F7D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UPDLC;                                                   // 0x1F7E(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void OnNotifyEnd_1905C0E149E72E0A807FA2837C37C760(const class FName& NotifyName);
		void OnNotifyBegin_1905C0E149E72E0A807FA2837C37C760(const class FName& NotifyName);
		void OnInterrupted_1905C0E149E72E0A807FA2837C37C760(const class FName& NotifyName);
		void OnBlendOut_1905C0E149E72E0A807FA2837C37C760(const class FName& NotifyName);
		void OnCompleted_1905C0E149E72E0A807FA2837C37C760(const class FName& NotifyName);
		void OnCompleted_8D2B4437468C1DB561D00F804E4F270D(const class FName& NotifyName);
		void OnBlendOut_8D2B4437468C1DB561D00F804E4F270D(const class FName& NotifyName);
		void OnInterrupted_8D2B4437468C1DB561D00F804E4F270D(const class FName& NotifyName);
		void OnNotifyBegin_8D2B4437468C1DB561D00F804E4F270D(const class FName& NotifyName);
		void OnNotifyEnd_8D2B4437468C1DB561D00F804E4F270D(const class FName& NotifyName);
		void OnCompleted_D232091C479C4B482C932B8A8823732D(const class FName& NotifyName);
		void OnBlendOut_D232091C479C4B482C932B8A8823732D(const class FName& NotifyName);
		void OnInterrupted_D232091C479C4B482C932B8A8823732D(const class FName& NotifyName);
		void OnNotifyBegin_D232091C479C4B482C932B8A8823732D(const class FName& NotifyName);
		void OnNotifyEnd_D232091C479C4B482C932B8A8823732D(const class FName& NotifyName);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Greg_FirstPerson_ABP_AnimGraphNode_TransitionResult_E92FEE9547B3B852C95240BFFEE8C92A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Greg_FirstPerson_ABP_AnimGraphNode_TransitionResult_12C4D10D45645D38BABB3A97876B83D1();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Greg_FirstPerson_ABP_AnimGraphNode_TransitionResult_9BFBF4AA4EF8791FF9DE388807B07B4A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Greg_FirstPerson_ABP_AnimGraphNode_TransitionResult_5AFCD48643B368CE6FA1D3AF4C68FED8();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ChangeEquipped(class AEquippable_C* NewEquip);
		void PutAway();
		void PropSwap(bool Flashlight);
		void SetItemDown();
		void PrimaryActionAnimEvent();
		void FazWatchEvent(bool Reset);
		void BlueprintBeginPlay();
		void AnimNotify_IsFullyDownEvent();
		void AnimNotify_FinishingItemUp();
		void AnimNotify_StartItemUp();
		void ChangeItem(class AEquippable_C* NewEquipment);
		void ExecuteUbergraph_Greg_FirstPerson_ABP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
