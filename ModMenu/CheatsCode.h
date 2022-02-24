#pragma once
#include "SDK.h"

namespace Cheats
{

	static bool UnlimitedJumpBool_Enabled = true;
	static bool UnlimitedFazBlasterAmmo_Enabled = true;
	static bool RemoveBlasterCooldown_Enabled = true;
	static bool RemoveRemoveFazCamCooldownTime_Enabled = true;
	static bool UnlimitedFlashLight_Enabled = true;
	static bool RemoveCollectionTime_Enabled = true;
	static bool NoPowerDrainingDoors_Enabled = true;
	static bool FazBlasterGodMode_Enabled = true;
	static bool NoChicaBeakCooldown_Enabled = true;
	static bool UnlimitedStaminaBool_Enabled = true;
	static bool UnlimitedFazWatchBool_Enabled = true;
	static bool NoJumpscares_Enabled = true;
	static bool PrincessQuestGodMode_Enabled = true;

	static bool AllowAlwaysSaving_Enabled = true;

	static bool FreddyCanBeAlwaysCalled_Enabled = true;
	static bool FreddyGregoryCanAlwaysEnter_Enabled = true;

	static bool FreezeFreddyPower_Enabled = false;
	static bool HasBackuppedFreddyPower = false;

	// Higher than that , the risk of jumpscare is there.
	static int MaxFreddyPower = 4500;
	static int CurrentFreddyPower = 4500;

	void UnlimitedFazerBlasterLifes();
	void ToggleDebugMenuMiniGame();
	void ForceSaveGameFeature();
	void NoChicaBeakCooldown();
	void UnlimitedJump();
	void UnlimitedFlashLight();
	void UnlimitedFazBlasterAmmo();
	void NoPowerDrainingDoors();
	void ToggleDevUI();
	void RemoveCollectionTime();
	void RemoveBlasterCooldown();
	void RemoveFazCamCooldownTime();
	void Freddy_Always_CanEnterExitFreddy();
	void Freddy_Always_CanCallFreddy();
	void PrincessQuestGodMode();

	int Get_MaxFreddyPower();
	void Set_MaxFreddyPower(const int& value);

	int Get_CurrentFreddyPower();
	void Set_CurrentFreddyPower(const int& value);

	bool Get_UnlimitedFazwatchPower();
	void Set_UnlimitedFazwatchPower(const bool& value);

	bool Get_UnlimitedStamina();
	void Set_UnlimitedStamina(const bool& value);

	void SemiGodmode();

	CG::UFNAFInventorySystem* Get_UFNAFInventorySystem();
	static CG::UFNAFInventorySystem* Active_UFNAFInventorySystem = nullptr;

	static bool isTrainerGuiActive = true;

	static CG::AGregory_C* Active_GregoryInstance = nullptr;

}
