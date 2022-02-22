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
	 * AnimBlueprintGeneratedClass Vanessa_ABP.Vanessa_ABP_C
	 * Size -> 0x31CC (FullSize[0x343C] - InheritedSize[0x0270])
	 */
	class UVanessa_ABP_C : public UAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_20;                         // 0x0278(0x0078)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum;                           // 0x02F0(0x00B0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_3;                        // 0x03A0(0x00E0)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x0480(0x00C8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_6;                           // 0x0548(0x0028)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_3;                        // 0x0570(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5;                           // 0x0630(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0x0658(0x00B8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_19;                         // 0x0710(0x0078)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2;                        // 0x0788(0x00C0)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_47;                       // 0x0848(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_46;                       // 0x0870(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_45;                       // 0x0898(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_44;                       // 0x08C0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_43;                       // 0x08E8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_42;                       // 0x0910(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_41;                       // 0x0938(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_40;                       // 0x0960(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_18;                         // 0x0988(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_24;                            // 0x0A00(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_17;                         // 0x0A30(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_23;                            // 0x0AA8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_16;                         // 0x0AD8(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_22;                            // 0x0B50(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_39;                       // 0x0B80(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_38;                       // 0x0BA8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_37;                       // 0x0BD0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_36;                       // 0x0BF8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_35;                       // 0x0C20(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_34;                       // 0x0C48(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_33;                       // 0x0C70(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_32;                       // 0x0C98(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_31;                       // 0x0CC0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_30;                       // 0x0CE8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_29;                       // 0x0D10(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_28;                       // 0x0D38(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_27;                       // 0x0D60(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_26;                       // 0x0D88(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_25;                       // 0x0DB0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_24;                       // 0x0DD8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_23;                       // 0x0E00(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_22;                       // 0x0E28(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_15;                         // 0x0E50(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_21;                            // 0x0EC8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_14;                         // 0x0EF8(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_20;                            // 0x0F70(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_21;                       // 0x0FA0(0x0028)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_2;                        // 0x0FC8(0x00E0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_19;                            // 0x10A8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_13;                         // 0x10D8(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_18;                            // 0x1150(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_12;                         // 0x1180(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_17;                            // 0x11F8(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_20;                       // 0x1228(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_11;                         // 0x1250(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_16;                            // 0x12C8(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_19;                       // 0x12F8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_18;                       // 0x1320(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_17;                       // 0x1348(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_16;                       // 0x1370(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_15;                       // 0x1398(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_14;                       // 0x13C0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_13;                       // 0x13E8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_12;                       // 0x1410(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_10;                         // 0x1438(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_15;                            // 0x14B0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0x14E0(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_14;                            // 0x1558(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x1588(0x00E0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_13;                            // 0x1668(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x1698(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_12;                            // 0x1710(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_4;                            // 0x1740(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_11;                            // 0x17F0(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0x1820(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x1848(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x1870(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x1898(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x18C0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x18E8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x1910(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x1938(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x1960(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x1988(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x19B0(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_10;                            // 0x1A28(0x0030)
		struct FAnimNode_RandomPlayer                              AnimGraphNode_RandomPlayer_2;                            // 0x1A58(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9;                             // 0x1AD0(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x1B00(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x1B28(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_8;                             // 0x1BA0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x1BD0(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x1C48(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x1C78(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x1CF0(0x0030)
		struct FAnimNode_RandomPlayer                              AnimGraphNode_RandomPlayer;                              // 0x1D20(0x0078)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x1D98(0x0078)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x1E10(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x1EB0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x1EE0(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x1F58(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_3;                            // 0x1F88(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x2038(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x2068(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x2118(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x2148(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x21C0(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x21F0(0x00B0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x22A0(0x0108)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x23A8(0x0020)
		unsigned char                                              UnknownData_2O01[0x8];                                   // 0x23C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_2;                               // 0x23D0(0x01E0)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK;                                 // 0x25B0(0x01E0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x2790(0x0108)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x2898(0x0030)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x28C8(0x00C0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x2988(0x0048)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x29D0(0x00B8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4;                           // 0x2A88(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x2AB0(0x0028)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x2AD8(0x0048)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x2B20(0x0020)
		struct FRotator                                            __CustomProperty_HeadAimRot_DC53091D4E6FCA691388C0990162EB0D; // 0x2B40(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_isTurning_DC53091D4E6FCA691388C0990162EB0D; // 0x2B4C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9AQZ[0x3];                                   // 0x2B4D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      __CustomProperty_Yaw_DC53091D4E6FCA691388C0990162EB0D;   // 0x2B50(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_39T6[0x4];                                   // 0x2B54(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_LinkedAnimGraph;                           // 0x2B58(0x00A0)
		unsigned char                                              UnknownData_S16X[0x8];                                   // 0x2BF8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_RigidBody                                 AnimGraphNode_RigidBody;                                 // 0x2C00(0x0590)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x3190(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x31B0(0x0020)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x31D0(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x31F8(0x00A0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x3298(0x0028)
		float                                                      DeltaTimeX;                                              // 0x32C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isMoving;                                                // 0x32C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LO50[0x3];                                   // 0x32C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MoveSpeedInput;                                          // 0x32C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsHeadAiming;                                            // 0x32CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IOJS[0x3];                                   // 0x32CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HeadAimAlpha;                                            // 0x32D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            HeadAimRot;                                              // 0x32D4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             PVTarget_L;                                              // 0x32E0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             IKEffector_L;                                            // 0x32EC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             IKEffector_R;                                            // 0x32F8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             PVTarget_R;                                              // 0x3304(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AAISeeker_C*                                         Pawn;                                                    // 0x3310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             HeadAimTarget;                                           // 0x3318(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IK_Interp_Speed;                                         // 0x3324(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsSpotted;                                               // 0x3328(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YGXO[0x3];                                   // 0x3329(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpottedDelayTime;                                        // 0x332C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        SpottedTimer;                                            // 0x3330(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AlertLevel;                                              // 0x3338(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ScanVariation;                                           // 0x333C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		fnaf9_EHideObjectType                                      HideType;                                                // 0x3340(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanScan;                                                 // 0x3341(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsSearching;                                             // 0x3342(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanJumpscare;                                            // 0x3343(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    RandomRunSelector;                                       // 0x3344(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RandomWalkSelector;                                      // 0x3348(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_K8GH[0x4];                                   // 0x334C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          NewVar_1;                                                // 0x3350(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      EarsAlphaBlend;                                          // 0x3380(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ChestAimAlpha;                                           // 0x3384(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isPreview;                                               // 0x3388(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanRun;                                                  // 0x3389(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0CZ6[0x2];                                   // 0x338A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WalkSpeed;                                               // 0x338C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanScanR;                                                // 0x3390(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanScanL;                                                // 0x3391(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OBW1[0x2];                                   // 0x3392(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    HidingSpaceType;                                         // 0x3394(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Stop_L;                                                  // 0x3398(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       EnableHairSimulation;                                    // 0x3399(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7GW7[0x2];                                   // 0x339A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RunSpeed;                                                // 0x339C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ScanTime;                                                // 0x33A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Scan_Direction_Float;                                    // 0x33A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         Scan_Curve;                                              // 0x33A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		AnimatronicModeEnum_EAnimatronicModeEnum                   AnimationMode;                                           // 0x33B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VSDZ[0x7];                                   // 0x33B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequenceBase*                                   CutSceneAnim;                                            // 0x33B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       LoopCutScene;                                            // 0x33C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CUOB[0x7];                                   // 0x33C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              Mesh;                                                    // 0x33C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Tightest_Profile;                                        // 0x33D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Tight_Profile;                                           // 0x33D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Default_Profile;                                         // 0x33E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IK_legs;                                                 // 0x33E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       TrackingPlayer;                                          // 0x33E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CKC3[0x2];                                   // 0x33EA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ScanMotionAlpha;                                         // 0x33EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ScanTimerSet;                                            // 0x33F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_W6M2[0x3];                                   // 0x33F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ScanTimeRandom;                                          // 0x33F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       OverrideScan;                                            // 0x33F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z34X[0x3];                                   // 0x33F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            TargetControlRotation;                                   // 0x33FC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SnapOrient;                                              // 0x3408(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G4XE[0x3];                                   // 0x3409(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TurnRotationDelta;                                       // 0x340C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            CurrentControlRotation;                                  // 0x3410(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsTurning;                                               // 0x341C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3EOB[0x3];                                   // 0x341D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            OldControlRotation;                                      // 0x3420(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       BlinkTimerSet;                                           // 0x342C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsStunned;                                               // 0x342D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanUpdate;                                               // 0x342E(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TABI[0x1];                                   // 0x342F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HairSimAlpha;                                            // 0x3430(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isOnScreen;                                              // 0x3434(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z52Y[0x3];                                   // 0x3435(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CutsceneAlpha;                                           // 0x3438(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool CanReceiveAlert();
		bool IsShatteredVersion();
		class FName GetCurrentPathName();
		fnaf9_EFNAFAISpawnType GetManagedAIType();
		void AnimGraph(struct FPoseLink* AnimGraph);
		void footstep();
		void HeadAimFunction();
		void ApplyControlRotation(class UObject* Pawn);
		void Procedural_Scan_();
		bool Perform_Scan_Trace(bool IsRight, Engine_EDrawDebugTrace DrawDebugType);
		void Perform_Foot_IK(bool IsRightFoot, Engine_EDrawDebugTrace DrawDebugType);
		void OnNotifyEnd_4DA5BD5F44BC73B8F401CBAC20AA502C(const class FName& NotifyName);
		void OnNotifyBegin_4DA5BD5F44BC73B8F401CBAC20AA502C(const class FName& NotifyName);
		void OnInterrupted_4DA5BD5F44BC73B8F401CBAC20AA502C(const class FName& NotifyName);
		void OnBlendOut_4DA5BD5F44BC73B8F401CBAC20AA502C(const class FName& NotifyName);
		void OnCompleted_4DA5BD5F44BC73B8F401CBAC20AA502C(const class FName& NotifyName);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_C926174F4DD7962A43DD818AC1EDF87A();
		void Spotlight_Aim_Actor(class AActor* AimActor);
		void CutsceneGrateEvent(class ULevelSequencePlayer* SequencePlayer);
		void CutSceneSpineBlender(bool Off, class ULevelSequencePlayer* Sequence);
		void FreddyEndIdle(bool Off);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_69CB370C4E540D69C9B9F497E8135E8A();
		void UpdateLeapInfo(const struct FVector& ActorLocation, const struct FVector& Destination, float Distance);
		void LeapLoopEvent(bool Off);
		void EndoBowlingCrawlEvent();
		void EndoSpawnInBowlingEvent();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_CD64B4ED42D901A2B093138A9A78B219();
		void CanDieEvent(bool Off);
		void CanHackEvent(bool Off);
		void VoAnimEvent(class UAkAudioEvent* AK_Event);
		void RoxyCrying(bool Off);
		void FreddyCorrupted(bool Off);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_3C76F8F34937EFBA0934B6A7587808DA();
		void EnterFreddyOverrideEvent(bool Off);
		void CanLeapEvent(bool Off);
		void CanLieDownEvent(bool OnOff);
		void IsSickEvent(bool OnOff);
		void CanWaveEvent(bool CanWave);
		void PoundDoorEvent(bool PoundDoor);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_ModifyBone_4691D8D34D12D0F4A8B7C2A2C50984F9();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TwoBoneIK_993BAAED4D157B0D87B48096B6529B7E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TwoBoneIK_70F82F6E480614776ED921B7A53F28E6();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_ModifyBone_50584A994F24F427A666108FC0674DAA();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_LinkedAnimGraph_DC53091D4E6FCA691388C0990162EB0D();
		void StopScan();
		void LandEvent();
		void JumpEvent(bool CanJump);
		void Breakthrough();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_BC3C93B8414987FAB2DAF783C900B253();
		void OnAnimInstanceSwap();
		void RummagingDoneEvent();
		void IsNotFirstPersonEvent();
		void IsFirstPersonEvent();
		void CanRummageEvent();
		void OpenDone();
		void Open();
		void SearchingDone();
		void TurnEvent(float TurnDegrees);
		void TeleportAI(const struct FVector& Location);
		void StartMoveTo(const struct FVector& Location);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_98CC3A6B46CD0A3E1DD39F843685C7EC();
		void SendPositionalAlert(const struct FVector& Location);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_7E5F755341809FE4E93AF385201F6A94();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_9F44644A42CF6825D540EAA16268FF3F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_FE7403C249C5DE46A7F19E9497EE2321();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_BCDBC404418D84D37FF9A2A31D6EBAD7();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_636B335844F5B28EA90431B77829735C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_56208E724ECE0F7C29BE1B91ECBFE3C1();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void BlueprintBeginPlay();
		void IsSpottedEvent();
		void AnimNotify_IsSpottedEvent();
		void SpottedTimerOverEvent();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_7298042A40BE2E43A86B7392E6F9AB5B();
		void AnimNotify_BeginWalk();
		void AnimNotify_BeginRun();
		void HeadAimEvent(bool OnOff);
		void CanJumpscareEvent();
		void StartScan();
		void Searching(fnaf9_EHideObjectType Hide_Type);
		void SetHeadAimTarget(const struct FVector& AimLocation);
		void CanRunEvent(bool CanRun);
		void ScanTimerEvent();
		void ScanWhileMoving();
		void StopScanEventLocal();
		void ForceTrackToPlayer();
		void EndTrackToPlayer();
		void ForceScanStates(bool OverrideScan, bool CanScan, bool CanScanL, bool CanScanR);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_623EE7424106F4C2D9D6158DCCF8DDA4();
		void BlinkTimerEvent();
		void BlinkEvent();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_E50FDA3D49E6F7319331B29D18CE9FCF();
		void SendVanessaAlert(class APawn* VanessaPawn);
		void Stun_Event(bool Is_Stunned);
		void AnimNotify_StunBlendComplete();
		void AnimNotify_TurnOffScan();
		void AnimNotify_LeftFootDown();
		void AnimNotify_RightFootDown();
		void ForceAnimOverride(bool enable);
		void ExecuteUbergraph_Vanessa_ABP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
