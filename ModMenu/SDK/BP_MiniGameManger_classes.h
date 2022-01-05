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
	 * BlueprintGeneratedClass BP_MiniGameManger.BP_MiniGameManger_C
	 * Size -> 0x0054 (FullSize[0x027C] - InheritedSize[0x0228])
	 */
	class ABP_MiniGameManger_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnGameStart;                                             // 0x0238(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       Started;                                                 // 0x0248(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NV4Q[0x7];                                   // 0x0249(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnGameEnd;                                               // 0x0250(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FName                                                ItemAward;                                               // 0x0260(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              Name;                                                    // 0x0268(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		fnaf9_EFNAFGameState                                       MiniGameCatagory;                                        // 0x0278(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Should_Quit_to_Main_Menu;                                // 0x0279(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       OnlyShowMissionCameras;                                  // 0x027A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Should_Clear_AI;                                         // 0x027B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void DestroyAllAISeeker();
		void PlayerRequestSkip();
		void On_Skip();
		void AwardItemToPlayer();
		void GetIsGameActive(bool* Active_);
		void PlayerCanEndGame(TEnumAsByte<E_EndMiniGameType_E_EndMiniGameType> EndType, bool* CanEnd);
		bool PlayerCanStartGame(fnaf9_ECantStartMinigameReason* reason);
		void PlayerRequestEnd(TEnumAsByte<E_EndMiniGameType_E_EndMiniGameType> EndType);
		void PlayerRequestStart(bool ForceStart, bool* Started, fnaf9_ECantStartMinigameReason* reason);
		void OnEnd(TEnumAsByte<E_EndMiniGameType_E_EndMiniGameType> EndType);
		void On_Start();
		void Handle_Misc();
		void HandlePlayer();
		void HandleComponents();
		void HandleAI();
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void QuitToMainMenu(TEnumAsByte<E_EndMiniGameType_E_EndMiniGameType> End_Type);
		void GregoryKilled();
		void ExecuteUbergraph_BP_MiniGameManger(int EntryPoint);
		void OnGameEnd__DelegateSignature(TEnumAsByte<E_EndMiniGameType_E_EndMiniGameType> EndType);
		void OnGameStart__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
