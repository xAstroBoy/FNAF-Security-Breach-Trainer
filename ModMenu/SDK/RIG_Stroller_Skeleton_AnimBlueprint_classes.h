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
	 * AnimBlueprintGeneratedClass RIG_Stroller_Skeleton_AnimBlueprint.RIG_Stroller_Skeleton_AnimBlueprint_C
	 * Size -> 0x02D1 (FullSize[0x0541] - InheritedSize[0x0270])
	 */
	class URIG_Stroller_Skeleton_AnimBlueprint_C : public UAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0278(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x02A8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x02D0(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x02F8(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0370(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x03A0(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0418(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0448(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x04F8(0x0048)
		bool                                                       IsBeingSearched;                                         // 0x0540(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void SetPeek(bool ShouldPeek);
		void SetAnim(class UAnimSequence* Animation);
		void SetEnterRotation(class APawn* PlayerPawn);
		void AnimNotify_DoneSearching();
		void StartSearch(class APawn* SearcherPawn);
		void AnimNotify_SearchOver();
		void ExecuteUbergraph_RIG_Stroller_Skeleton_AnimBlueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
