#pragma once

// Name: FNAF Security Breach, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C
// 0x1509 (FullSize[0x1771] - InheritedSize[0x0268])
class UGreg_FirstPerson_ABP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_E088[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0278(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7;                          // 0x02A8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                          // 0x02D0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                          // 0x02F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                          // 0x0320(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                          // 0x0348(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                          // 0x0370(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                            // 0x0398(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_20;                           // 0x03C0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6;                               // 0x0438(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_19;                           // 0x0468(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5;                               // 0x04E0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_18;                           // 0x0510(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                               // 0x0588(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_17;                           // 0x05B8(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_16;                           // 0x0630(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_15;                           // 0x06A8(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_14;                           // 0x0720(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_13;                           // 0x0798(0x0078)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_4;                           // 0x0810(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                               // 0x08C0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_12;                           // 0x08F0(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_11;                           // 0x0968(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_10;                           // 0x09E0(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9;                            // 0x0A58(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8;                            // 0x0AD0(0x0078)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_3;                           // 0x0B48(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                               // 0x0BF8(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_3;                          // 0x0C28(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2;                          // 0x0D08(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer;                            // 0x0DE8(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7;                            // 0x0EC8(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6;                            // 0x0F40(0x0078)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_2;                           // 0x0FB8(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                             // 0x1068(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                            // 0x1108(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                            // 0x1180(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                            // 0x11F8(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                            // 0x1270(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x12E8(0x0078)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum;                             // 0x1360(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x1410(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x1440(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2;                                      // 0x14F0(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                            // 0x1538(0x00C0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                              // 0x15F8(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                             // 0x16B0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                               // 0x16D8(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                        // 0x1700(0x0048)
	TEnumAsByte<GregoryAnimItemEnum_EGregoryAnimItemEnum> ItemEnum;                                                  // 0x1748(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasFazWatch;                                               // 0x1749(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bFazwatchUP;                                               // 0x174A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TPXL[0x1];                                     // 0x174B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SpeedInput;                                                // 0x174C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isMoving;                                                  // 0x1750(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DBP6[0x7];                                     // 0x1751(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AGregory_C*                                  GregPawn;                                                  // 0x1758(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SwitchItem;                                                // 0x1760(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               isDown;                                                    // 0x1761(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_B8OM[0x6];                                     // 0x1762(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AEquippable_C*                               NewEquip;                                                  // 0x1768(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanPlayFazWatchAnim;                                       // 0x1770(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void OnNotifyEnd_D232091C479C4B482C932B8A8823732D(const struct FName& NotifyName);
	void OnNotifyBegin_D232091C479C4B482C932B8A8823732D(const struct FName& NotifyName);
	void OnInterrupted_D232091C479C4B482C932B8A8823732D(const struct FName& NotifyName);
	void OnBlendOut_D232091C479C4B482C932B8A8823732D(const struct FName& NotifyName);
	void OnCompleted_D232091C479C4B482C932B8A8823732D(const struct FName& NotifyName);
	void OnNotifyEnd_8D2B4437468C1DB561D00F804E4F270D(const struct FName& NotifyName);
	void OnNotifyBegin_8D2B4437468C1DB561D00F804E4F270D(const struct FName& NotifyName);
	void OnInterrupted_8D2B4437468C1DB561D00F804E4F270D(const struct FName& NotifyName);
	void OnBlendOut_8D2B4437468C1DB561D00F804E4F270D(const struct FName& NotifyName);
	void OnCompleted_8D2B4437468C1DB561D00F804E4F270D(const struct FName& NotifyName);
	void OnNotifyEnd_1905C0E149E72E0A807FA2837C37C760(const struct FName& NotifyName);
	void OnNotifyBegin_1905C0E149E72E0A807FA2837C37C760(const struct FName& NotifyName);
	void OnInterrupted_1905C0E149E72E0A807FA2837C37C760(const struct FName& NotifyName);
	void OnBlendOut_1905C0E149E72E0A807FA2837C37C760(const struct FName& NotifyName);
	void OnCompleted_1905C0E149E72E0A807FA2837C37C760(const struct FName& NotifyName);
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
	void ExecuteUbergraph_Greg_FirstPerson_ABP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
