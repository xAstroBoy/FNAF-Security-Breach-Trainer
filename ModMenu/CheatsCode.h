#pragma once
#include "SDK.h"

namespace Cheats
{
	static bool isTrainerGuiActive = false;


	static bool HasBackuppedFreddyPower = false;
	static bool UnlimitedJumpBool_Enabled = false;
	static bool UnlimitedFazBlasterAmmo_Enabled = false;
	static bool RemoveBlasterCooldown_Enabled = false;
	static bool RemoveRemoveFazCamCooldownTime_Enabled = false;
	static bool UnlimitedFlashLight_Enabled = false;
	static bool RemoveCollectionTime_Enabled = false;
	static bool NoPowerDrainingDoors_Enabled = false;
	static bool FazBlasterGodMode_Enabled = false;
	static bool NoChicaBeakCooldown_Enabled = false;
	static bool FreezeFreddyPower_Enabled = false;
	static bool UnlimitedStaminaBool_Enabled = false;
	static bool UnlimitedFazWatchBool_Enabled = false;

	static bool FreddyCanBeAlwaysCalled_Enabled = false;
	static bool FreddyGregoryCanAlwaysEnter_Enabled = false;

	static CG::UFNAFInventorySystem* Active_UFNAFInventorySystem = nullptr;



	static int MaxFreddyPower = 0;
	static int CurrentFreddyPower = 0;



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

	int Get_MaxFreddyPower();
	void Set_MaxFreddyPower(int& value);


	int Get_CurrentFreddyPower();
	void Set_CurrentFreddyPower(int& value);

	bool Get_UnlimitedFazwatchPower();
	void Set_UnlimitedFazwatchPower(bool& value);

	bool Get_UnlimitedStamina();
	void Set_UnlimitedStamina(bool& value);

	CG::UFNAFInventorySystem* Get_UFNAFInventorySystem();
}
