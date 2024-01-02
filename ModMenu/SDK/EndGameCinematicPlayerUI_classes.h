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
	 * WidgetBlueprintGeneratedClass EndGameCinematicPlayerUI.EndGameCinematicPlayerUI_C
	 * Size -> 0x0441 (FullSize[0x06A1] - InheritedSize[0x0260])
	 */
	class UEndGameCinematicPlayerUI_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    PromptCassieHold;                                        // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    FadeOut;                                                 // 0x0270(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              Background_Image;                                        // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_TextAndIcons_C*                                  TextSurroundingKeyIcon;                                  // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWI_Cassie_Interact_C*                               WI_Cassie_Interact;                                      // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FCinematicCutscene                                  BurntrapEnding;                                          // 0x0290(0x0040) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		class UAudioComponent*                                     Sound;                                                   // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMediaPlayer*                                        MediaPlayer;                                             // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanFade;                                                 // 0x02E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T435[0x3];                                   // 0x02E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Time;                                                    // 0x02E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FadeDuration;                                            // 0x02E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsChowdaMode;                                            // 0x02EC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanStop;                                                 // 0x02ED(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_96KY[0x2];                                   // 0x02EE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAudioComponent*                                     Controllersound;                                         // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PlayingIntroVideo;                                       // 0x02F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7I6G[0x3];                                   // 0x02F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HoldTimeToSkip;                                          // 0x02FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsHoldingSkipButton;                                     // 0x0300(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanFadeOut;                                              // 0x0301(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6TO1[0x2];                                   // 0x0302(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Volume;                                                  // 0x0304(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FCinematicCutscene                                  VannyEndingDestroy;                                      // 0x0308(0x0040) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FCinematicCutscene                                  VIPEnding;                                               // 0x0348(0x0040) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FCinematicCutscene                                  LoadingDockEnding;                                       // 0x0388(0x0040) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FCinematicCutscene                                  GregoryInAlleyEnding;                                    // 0x03C8(0x0040) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FCinematicCutscene                                  VannyEndingRedeem;                                       // 0x0408(0x0040) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              PostVideoWwiseState;                                     // 0x0448(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class ASequencerVO_C*                                      SequencerVO;                                             // 0x0458(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        DialogueTimer;                                           // 0x0460(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      CollectionTime;                                          // 0x0468(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HitSuccess;                                              // 0x046C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_R50Q[0x3];                                   // 0x046D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HoldToCollectTime;                                       // 0x0470(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Percentage;                                              // 0x0474(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsHolding;                                               // 0x0478(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8HH9[0x7];                                   // 0x0479(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ComicBookKey;                                            // 0x0480(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              VideoWwiseState;                                         // 0x0490(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		struct FCinematicCutscene                                  CreditsOnly;                                             // 0x04A0(0x0040) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FCinematicCutscene                                  CreditsOnly_xbox;                                        // 0x04E0(0x0040) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FCinematicCutscene                                  BurntrapEnding_xbox;                                     // 0x0520(0x0040) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FCinematicCutscene                                  VannyEndingDestroy_xbox;                                 // 0x0560(0x0040) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FCinematicCutscene                                  VannyEndingRedeem_xbox;                                  // 0x05A0(0x0040) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FCinematicCutscene                                  GregoryInAlleyEnding_xbox;                               // 0x05E0(0x0040) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FCinematicCutscene                                  LoadingDockEnding_xbox;                                  // 0x0620(0x0040) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FCinematicCutscene                                  VIPEnding_xbox;                                          // 0x0660(0x0040) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		EChowdaEndings                                             ChowdaEndingType;                                        // 0x06A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void DisplayComicbookSubtitle(const class FText& Subtitle);
		void SetupComicbookSubtitles();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void EndGameVideoCredits();
		void StopVideo();
		void MakeTextVisibleAgain();
		void StartTextFadeAway();
		void SetText();
		void PlayFazerblastDialogue();
		void StartHoldTimer();
		void StopHoldTimer();
		void OnMediaOpened(const class FString& OpenedUrl);
		void StartLoadingDockSubtitles();
		void StartFireEscapeSubtitles();
		void StartGregoryEscapesSubtitles();
		void StartVannyDestroyedSubtitles();
		void StartVannyRedeemedSubtitles();
		void Construct();
		void ExecuteUbergraph_EndGameCinematicPlayerUI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
