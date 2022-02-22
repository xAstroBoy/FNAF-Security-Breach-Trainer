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
	 * BlueprintGeneratedClass Act1.Act1_C
	 * Size -> 0x0260 (FullSize[0x0490] - InheritedSize[0x0230])
	 */
	class AAct1_C : public ALevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      Timeline_0_NewTrack_0_4F2B9D4D47C166EFF67CC99BD3BD337D;  // 0x0238(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		Engine_ETimelineDirection                                  Timeline_0__Direction_4F2B9D4D47C166EFF67CC99BD3BD337D;  // 0x023C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BIPK[0x3];                                   // 0x023D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NewVar_1;                                                // 0x0248(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CN66[0x4];                                   // 0x024C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ATorchBP_C*                                          Grave00_Torch;                                           // 0x0250(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ATorchBP_C*                                          Grave01_Torch;                                           // 0x0258(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ATorchBP_C*                                          Grave02_Torch;                                           // 0x0260(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ATorchBP_C*                                          Grave03_Torch;                                           // 0x0268(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ATorchBP_C*                                          Grave04_Torch;                                           // 0x0270(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ATorchBP_C*                                          Grave05_Torch;                                           // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TorchCount;                                              // 0x0280(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MZZM[0x4];                                   // 0x0284(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADoorBP_C*                                           Room01_Door_ExecuteUbergraph_Act1_RefProperty;           // 0x0288(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ATorchBP_C*                                          Room01_Torch01_ExecuteUbergraph_Act1_RefProperty;        // 0x0290(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ATorchBP_C*                                          Room01_Torch02_ExecuteUbergraph_Act1_RefProperty;        // 0x0298(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ATorchBP_C*                                          BridgeTorch_ExecuteUbergraph_Act1_RefProperty;           // 0x02A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABridgeBP_C*                                         BridgeBP_2_ExecuteUbergraph_Act1_RefProperty;            // 0x02A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ATorchBP_C*                                          BatRoomTorch05_ExecuteUbergraph_Act1_RefProperty;        // 0x02B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ATorchBP_C*                                          BatRoomTorch04_ExecuteUbergraph_Act1_RefProperty;        // 0x02B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ATorchBP_C*                                          BatRoomTorch03_ExecuteUbergraph_Act1_RefProperty;        // 0x02C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ATorchBP_C*                                          BatRoomTorch01_ExecuteUbergraph_Act1_RefProperty;        // 0x02C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ATorchBP_C*                                          BatRoomTorch02_ExecuteUbergraph_Act1_RefProperty;        // 0x02D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADoorBP_C*                                           BatRoomDoor_ExecuteUbergraph_Act1_RefProperty;           // 0x02D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ATorchBP_C*                                          LageRoomTorch01_ExecuteUbergraph_Act1_RefProperty;       // 0x02E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ATorchBP_C*                                          LageRoomTorch02_ExecuteUbergraph_Act1_RefProperty;       // 0x02E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ATorchBP_C*                                          LageRoomTorch03_ExecuteUbergraph_Act1_RefProperty;       // 0x02F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ATorchBP_C*                                          LageRoomTorch04_ExecuteUbergraph_Act1_RefProperty;       // 0x02F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ATorchBP_C*                                          LageRoomTorch05_ExecuteUbergraph_Act1_RefProperty;       // 0x0300(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ATorchBP_C*                                          LageRoomTorch06_ExecuteUbergraph_Act1_RefProperty;       // 0x0308(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ATorchBP_C*                                          LageRoomTorch07_ExecuteUbergraph_Act1_RefProperty;       // 0x0310(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADoorBP_C*                                           LargeRoomDoor_ExecuteUbergraph_Act1_RefProperty;         // 0x0318(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABlockingVolume*                                     BridgeBlocker_ExecuteUbergraph_Act1_RefProperty;         // 0x0320(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AWallTorchBP_C*                                      WallTorchBP2_ExecuteUbergraph_Act1_RefProperty;          // 0x0328(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AChestBP_C*                                          ChestBP3_8_ExecuteUbergraph_Act1_RefProperty;            // 0x0330(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AWallTorchBP_C*                                      WallTorchBP9_ExecuteUbergraph_Act1_RefProperty;          // 0x0338(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AWallTorchBP_C*                                      WallTorchBP20_21_ExecuteUbergraph_Act1_RefProperty;      // 0x0340(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AWallTorchBP_C*                                      WallTorchBP21_22_ExecuteUbergraph_Act1_RefProperty;      // 0x0348(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AWallTorchBP_C*                                      WallTorchBP24_ExecuteUbergraph_Act1_RefProperty;         // 0x0350(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AWallTorchBP_C*                                      WallTorchBP25_ExecuteUbergraph_Act1_RefProperty;         // 0x0358(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AWallTorchBP_C*                                      WallTorchBP19_ExecuteUbergraph_Act1_RefProperty;         // 0x0360(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AWallTorchBP_C*                                      WallTorchBP10_ExecuteUbergraph_Act1_RefProperty;         // 0x0368(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AWallTorchBP_C*                                      WallTorchBP15_ExecuteUbergraph_Act1_RefProperty;         // 0x0370(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AWallTorchBP_C*                                      WallTorchBP16_ExecuteUbergraph_Act1_RefProperty;         // 0x0378(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ATriggerVolume*                                      LongRoomTriggerVolume_ExecuteUbergraph_Act1_RefProperty; // 0x0380(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AGraveBP_C*                                          GraveBP2_ExecuteUbergraph_Act1_RefProperty;              // 0x0388(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AGraveBP_C*                                          GraveBP3_ExecuteUbergraph_Act1_RefProperty;              // 0x0390(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AGraveBP_C*                                          GraveBP4_ExecuteUbergraph_Act1_RefProperty;              // 0x0398(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AGraveBP_C*                                          GraveBP5_ExecuteUbergraph_Act1_RefProperty;              // 0x03A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AGraveBP_C*                                          GraveBP6_ExecuteUbergraph_Act1_RefProperty;              // 0x03A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASpotLight*                                          SpotLight14_ExecuteUbergraph_Act1_RefProperty;           // 0x03B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ATorchBP_C*                                          BossRoomTorch_ExecuteUbergraph_Act1_RefProperty;         // 0x03B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABossBP_C*                                           BossBP_2_ExecuteUbergraph_Act1_RefProperty;              // 0x03C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AAmbientSound*                                       Thunder_Cue_5_ExecuteUbergraph_Act1_RefProperty;         // 0x03C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AFenceBP_C*                                          FenceBP_2_ExecuteUbergraph_Act1_RefProperty;             // 0x03D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AEnemyChild_Basic_C*                                 EnemyChild_Basic2_ExecuteUbergraph_Act1_RefProperty;     // 0x03D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AEnemyChild_Basic_C*                                 EnemyChild_Basic4_ExecuteUbergraph_Act1_RefProperty;     // 0x03E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AEnemyChild_Basic_C*                                 EnemyChild_Basic17_ExecuteUbergraph_Act1_RefProperty;    // 0x03E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AEnemyChild_Basic_C*                                 EnemyChild_Basic5_ExecuteUbergraph_Act1_RefProperty;     // 0x03F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AEnemyChild_Basic_C*                                 EnemyChild_Basic6_ExecuteUbergraph_Act1_RefProperty;     // 0x03F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AAmbientSound*                                       CAS_Ambience_Rain_2_ExecuteUbergraph_Act1_RefProperty;   // 0x0400(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ATriggerVolume*                                      TriggerVolume_7_ExecuteUbergraph_Act1_RefProperty;       // 0x0408(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABridgeBP_C*                                         BridgeBP2_ExecuteUbergraph_Act1_RefProperty;             // 0x0410(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABlockingVolume*                                     GraveyardBlocker_ExecuteUbergraph_Act1_RefProperty;      // 0x0418(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AAmbientSound*                                       BossEntryCue_8_ExecuteUbergraph_Act1_RefProperty;        // 0x0420(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AAmbientSound*                                       BossRoom_Reveal_11_ExecuteUbergraph_Act1_RefProperty;    // 0x0428(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ATriggerVolume*                                      BossRoomTriggerVolume_ExecuteUbergraph_Act1_RefProperty; // 0x0430(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AAmbientSound*                                       BossRoom_Reveal_Drone_Loop_14_ExecuteUbergraph_Act1_RefProperty; // 0x0438(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABlockingVolume*                                     BossBlocker_ExecuteUbergraph_Act1_RefProperty;           // 0x0440(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APaperSpriteActor*                                   BossBGTendrils_Spritesheet_Sprite_82_ExecuteUbergraph_Act1_RefProperty; // 0x0448(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APaperSpriteActor*                                   BossBGTendrils_Spritesheet_Sprite_14_ExecuteUbergraph_Act1_RefProperty; // 0x0450(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AAmbientSound*                                       PuzzleSolve_Cue_2_ExecuteUbergraph_Act1_RefProperty;     // 0x0458(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AAmbientSound*                                       CAS_Boss_Voice_Glitched_2_ExecuteUbergraph_Act1_RefProperty; // 0x0460(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AAmbientSound*                                       CAS_Boss_Laugh_Glitched_5_ExecuteUbergraph_Act1_RefProperty; // 0x0468(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AAmbientSound*                                       CAS_Boss_Outro_Impact_2_ExecuteUbergraph_Act1_RefProperty; // 0x0470(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APaperSpriteActor*                                   Castle_TileSets_Sprite_346_ExecuteUbergraph_Act1_RefProperty; // 0x0478(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AAkAmbientSound*                                     Cought_in_a_Loop_ExecuteUbergraph_Act1_RefProperty;      // 0x0480(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AGraveBP_C*                                          GraveBP_2_ExecuteUbergraph_Act1_RefProperty;             // 0x0488(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void Room01Trigger();
		void BridgeRoomTrigger();
		void BatRoomTrigger();
		void LargeRoomTrigger();
		void LongRoomTrigger();
		void UnlightGraveTorches();
		void OnGraveTorchLit_2();
		void OnGraveTorchLit_3();
		void OnGraveTorchLit_4();
		void OnGraveTrochLit_5();
		void OnGraveTrochLit_6();
		void GraveyardTrigger();
		void LongRoomEnemySpawn();
		void PuzzleSolveSFX();
		void ReceiveEndPlay(Engine_EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_Act1(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
