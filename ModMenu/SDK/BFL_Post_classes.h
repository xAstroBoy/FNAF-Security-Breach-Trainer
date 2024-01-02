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
	 * BlueprintGeneratedClass BFL_Post.BFL_Post_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBFL_Post_C : public UBlueprintFunctionLibrary
	{
	public:
		void PostEvent_EnsureConstants_MultiplePositions(class UAkAudioEvent* AkEvent, TArray<struct FTransform>* Positions, EAkMultiPositionType MultiPositionType, class UObject* __WorldContext, class UAkAudioEvent** Return_AkEvent, TArray<struct FTransform>* Return_Positions, EAkMultiPositionType* Return_MultiPositionType);
		void PostEventWithSubtitles_EnsureConstants_MultiplePositions(class UAkAudioEvent* AkEvent, class AActor* Actor, bool Wait, float MaxRadiusPercent, bool SanitizeSubtitleKey, bool HighPriority, TArray<struct FTransform>* Positions, EAkMultiPositionType MultiPositionType, class UObject* __WorldContext, class UAkAudioEvent** Return_AkEvent, class AActor** Return_Actor, bool* Return_Wait, float* Return_MaxRadiusPercent, bool* Return_SanitizeSubtitleKey, bool* Return_HighPriority, TArray<struct FTransform>* Return_Positions, EAkMultiPositionType* Return_MultiPositionType);
		void PostEventWithSubtitles_EnsureConstants(class UAkAudioEvent* AkEvent, class AActor* Actor, bool Wait, float MaxRadiusPercent, bool SanitizeSubtitleKey, bool HighPriority, class UObject* __WorldContext, class UAkAudioEvent** Return_AkEvent, class AActor** Return_Actor, bool* Return_Wait, float* Return_MaxRadiusPercent, bool* Return_SanitizeSubtitleKey, bool* Return_HighPriority);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
