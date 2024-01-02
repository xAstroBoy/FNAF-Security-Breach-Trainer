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
	 * WidgetBlueprintGeneratedClass WI_SubtitlesManager.WI_SubtitlesManager_C
	 * Size -> 0x0038 (FullSize[0x0298] - InheritedSize[0x0260])
	 */
	class UWI_SubtitlesManager_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVerticalBox*                                        SubtitlesContainerBox;                                   // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       EnableDebug;                                             // 0x0270(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WV2P[0x3];                                   // 0x0271(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LinesToDisplay;                                          // 0x0274(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TextLarge;                                               // 0x0278(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_852H[0x7];                                   // 0x0279(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSubtitlePoolItem>                           SubtitlePool;                                            // 0x0280(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class FName                                                DLCDialogueInfoTable;                                    // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void FixOnomatopoeiaFormatting(const class FString& Subtitle, class FString* SubtitleWithOnomatopeia);
		void AdjustSpacing(float SubtitleSpacing, float LastSubtitleSpacing);
		void GetFreeSubtitleFromPool(struct FSubtitlePoolItem* SubtitleItem);
		void UpdateDisplay();
		void EndVoiceOverDisplay(const class FString& reason);
		void RemoveSubtitles();
		void CreateNewSubtitle(class UWI_Subtitles_C** Subtitle, struct FSubtitlePoolItem* SubtitlePoolItem);
		void SetSubtitleStates(TArray<struct FS_SubtitleState>* States);
		void GetSubtitleStates(TArray<struct FS_SubtitleState>* SubtitleStates);
		void ExtractSubtitleVariable(const class FString& SourceString, const class FString& CharStart, const class FString& CharEnd, class FString* Variable, class FString* String);
		void PrintDebug(const class FString& inString);
		void BeginVoiceOverDisplay(const class FString& Key, class AActor* Actor, const class FString& FallbackSourceString, float FallbackDuration, float MaxRadiusPercent, bool SanitizeKey, bool HightPriority);
		void SubtitleEnd(class UWI_Subtitles_C* SubtitleWidget);
		void ExecuteUbergraph_WI_SubtitlesManager(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
