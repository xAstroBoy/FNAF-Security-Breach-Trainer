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
	 * BlueprintGeneratedClass BPI_SettingsUpdates.BPI_SettingsUpdates_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_SettingsUpdates_C : public UInterface
	{
	public:
		void GetCrouchToggle(bool* CrouchToggle);
		void GetHelpiBlurbTime(float* Time);
		void UpdateHelpiBlurbTime(float Time);
		void GetShowInstructionCards(bool* ShowInstructionCards);
		void SetMappingsFromSaved(TMap<class FName, struct FKeyBinding_Struct> SavedMappings);
		void UpdateSavedMappings();
		void GetStealthToggle(bool* ShowStealthIcon);
		void GetSprintToggles(bool* KeyboardSprintToggle, bool* GamepadSprintToggle);
		void UpdateSprintAndStealthToggles(bool Keyboard_Sprint, bool Gamepad_Sprint, bool CrouchIcon, bool CrouchToggle);
		void UpdateSensitivitySettings();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
