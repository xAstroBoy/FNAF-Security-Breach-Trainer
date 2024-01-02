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
	 * BlueprintGeneratedClass FNAFGameInstanceInterface.FNAFGameInstanceInterface_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFNAFGameInstanceInterface_C : public UInterface
	{
	public:
		void HideLoadingScreenDLC();
		void DisplayLoadingScreenDLC();
		void SetSkipSystemUsed(bool isUsed);
		void GetIfSkipSystemUsed(bool* outUsed);
		void SetTempHapticFeedback(float Value);
		void SetHapticFeedback(float Value);
		float GetTempHapticFeedbackIntensityMultiplier();
		float GetHapticFeedbackIntensityMultiplier();
		void CheckForTrophyTimeAchievement();
		void GetSpawnAllSurvivalPackages(bool* SpawnAll);
		void GetShowSurvivalPackages(bool* Show);
		void GetGameType(EFNAFGameType* GameType);
		void ChangeHourlyActivity(int32_t HourIndex);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
