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

// BlueprintGeneratedClass BFL_Post.BFL_Post_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBFL_Post_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BFL_Post.BFL_Post_C");
		return ptr;
	}



	void STATIC_PostEvent_EnsureConstants_MultiplePositions(class UAkAudioEvent* AkEvent, TArray<struct FTransform>* Positions, AkAudio_EAkMultiPositionType MultiPositionType, class UObject* __WorldContext, class UAkAudioEvent** Return_AkEvent, TArray<struct FTransform>* Return_Positions, AkAudio_EAkMultiPositionType* Return_MultiPositionType);
	void STATIC_PostEventWithSubtitles_EnsureConstants_MultiplePositions(class UAkAudioEvent* AkEvent, class AActor* Actor, bool Wait, float MaxRadiusPercent, bool SanitizeSubtitleKey, bool HighPriority, TArray<struct FTransform>* Positions, AkAudio_EAkMultiPositionType MultiPositionType, class UObject* __WorldContext, class UAkAudioEvent** Return_AkEvent, class AActor** Return_Actor, bool* Return_Wait, float* Return_MaxRadiusPercent, bool* Return_SanitizeSubtitleKey, bool* Return_HighPriority, TArray<struct FTransform>* Return_Positions, AkAudio_EAkMultiPositionType* Return_MultiPositionType);
	void STATIC_PostEventWithSubtitles_EnsureConstants(class UAkAudioEvent* AkEvent, class AActor* Actor, bool Wait, float MaxRadiusPercent, bool SanitizeSubtitleKey, bool HighPriority, class UObject* __WorldContext, class UAkAudioEvent** Return_AkEvent, class AActor** Return_Actor, bool* Return_Wait, float* Return_MaxRadiusPercent, bool* Return_SanitizeSubtitleKey, bool* Return_HighPriority);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
