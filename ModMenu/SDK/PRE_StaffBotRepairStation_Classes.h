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
	 * BlueprintGeneratedClass PRE_StaffBotRepairStation.PRE_StaffBotRepairStation_C
	 * Size -> 0x0168 (FullSize[0x0390] - InheritedSize[0x0228])
	 */
	class APRE_StaffBotRepairStation_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAkComponent*                                        AkBlastDoor;                                             // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_Stove_Door_OLD_R4;                                    // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_Stove_Door_OLD_R3;                                    // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_Stove_Door_OLD_L2;                                    // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_Stove_Door_OLD_L1;                                    // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     BlastDoors;                                              // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Staffbot_Head_R;                                         // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     StaffbotHead_R;                                          // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Staffbot_Head_L;                                         // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     StaffbotHead_L;                                          // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        AkInterior;                                              // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        AkRight;                                                 // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        AkLeft;                                                  // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_StaffBotRepairStation_DepositDoor_I_R;               // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_StaffBotRepairStation_DepositDoor_I_L;               // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_StaffBotRepairStation_DepositDoor_E_R;               // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_StaffBotRepairStation_DoorR;                         // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_StaffBotRepairStation_DepositDoor_E_L;               // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_StaffBotRepairStation_DoorL;                         // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_StaffBotRepairStation;                               // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      BlastDoorsTimeline_TransZ_A2768B8347081D9BF5E56A884A65802C; // 0x02D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<Engine_ETimelineDirection>                     BlastDoorsTimeline__Direction_A2768B8347081D9BF5E56A884A65802C; // 0x02DC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LZUP[0x3];                                   // 0x02DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  BlastDoorsTimeline;                                      // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HeadDeposit_Exterior_R_Close_54B9F4394AC4B0150F44A593588569F4; // 0x02E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HeadDeposit_Exterior_R_Open_54B9F4394AC4B0150F44A593588569F4; // 0x02EC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<Engine_ETimelineDirection>                     HeadDeposit_Exterior_R__Direction_54B9F4394AC4B0150F44A593588569F4; // 0x02F0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_E6R5[0x7];                                   // 0x02F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  HeadDeposit_Exterior_R;                                  // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HeadDeposit_Interior_R_Close_2CADA45E409776C61B588A9B3478F464; // 0x0300(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HeadDeposit_Interior_R_Open_2CADA45E409776C61B588A9B3478F464; // 0x0304(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<Engine_ETimelineDirection>                     HeadDeposit_Interior_R__Direction_2CADA45E409776C61B588A9B3478F464; // 0x0308(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4VUL[0x7];                                   // 0x0309(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  HeadDeposit_Interior_R;                                  // 0x0310(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HeadDeposit_Exterior_L_Close_B30502CF4B65BE38C32601BFF101BECD; // 0x0318(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HeadDeposit_Exterior_L_Open_B30502CF4B65BE38C32601BFF101BECD; // 0x031C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<Engine_ETimelineDirection>                     HeadDeposit_Exterior_L__Direction_B30502CF4B65BE38C32601BFF101BECD; // 0x0320(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TM7F[0x7];                                   // 0x0321(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  HeadDeposit_Exterior_L;                                  // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HeadDeposit_Interior_L_Close_1CCEFFC14C5763DDD77C9E9D53A71BE3; // 0x0330(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HeadDeposit_Interior_L_Open_1CCEFFC14C5763DDD77C9E9D53A71BE3; // 0x0334(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<Engine_ETimelineDirection>                     HeadDeposit_Interior_L__Direction_1CCEFFC14C5763DDD77C9E9D53A71BE3; // 0x0338(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7T3R[0x7];                                   // 0x0339(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  HeadDeposit_Interior_L;                                  // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DoorR_movement_Close_45EADF63456DDD0865A50784B05B24B1;   // 0x0348(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DoorR_movement_Open_45EADF63456DDD0865A50784B05B24B1;    // 0x034C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<Engine_ETimelineDirection>                     DoorR_movement__Direction_45EADF63456DDD0865A50784B05B24B1; // 0x0350(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_17PQ[0x7];                                   // 0x0351(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  DoorR_movement;                                          // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DoorL_Movement_Close_CBF61E674C62E63E649FEEB4DC8BA951;   // 0x0360(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DoorL_Movement_Open_CBF61E674C62E63E649FEEB4DC8BA951;    // 0x0364(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<Engine_ETimelineDirection>                     DoorL_Movement__Direction_CBF61E674C62E63E649FEEB4DC8BA951; // 0x0368(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TUEZ[0x7];                                   // 0x0369(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  DoorL_Movement;                                          // 0x0370(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Open_;                                                   // 0x0378(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Used;                                                    // 0x0379(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Cycle_Complete;                                          // 0x037A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NCG3[0x5];                                   // 0x037B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCycleCompletedOpen;                                    // 0x0380(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void DoorL_Movement__FinishedFunc();
		void DoorL_Movement__UpdateFunc();
		void DoorR_movement__FinishedFunc();
		void DoorR_movement__UpdateFunc();
		void HeadDeposit_Exterior_L__FinishedFunc();
		void HeadDeposit_Exterior_L__UpdateFunc();
		void HeadDeposit_Exterior_L__Event__EventFunc();
		void HeadDeposit_Interior_L__FinishedFunc();
		void HeadDeposit_Interior_L__UpdateFunc();
		void HeadDeposit_Interior_R__FinishedFunc();
		void HeadDeposit_Interior_R__UpdateFunc();
		void HeadDeposit_Exterior_R__FinishedFunc();
		void HeadDeposit_Exterior_R__UpdateFunc();
		void HeadDeposit_Exterior_R__Event__EventFunc();
		void BlastDoorsTimeline__FinishedFunc();
		void BlastDoorsTimeline__UpdateFunc();
		void DoorLOpen(bool Open_);
		void DoorROpen(bool Open_);
		void HeadDeposit_Exterior_L_Open(bool Open_);
		void HeadDeposit_Interior_L_Open(bool Open_);
		void HeadDeposit_Interior_R_Open(bool Open_);
		void HeadDeposit_Exterior_R_Open(bool Open_);
		void Use_Station(bool Left);
		void On_Exterior_Closed(bool Left);
		void On_Exterior_Open(bool Left);
		void On_Interior_Open(bool Left);
		void On_Interior_Closed(bool Left);
		void BlastDoorsEvent();
		void ExecuteUbergraph_PRE_StaffBotRepairStation(int EntryPoint);
		void OnCycleCompletedOpen__DelegateSignature(bool Left);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
