#include "pch.h"
#include "CheatsCode.h"

#include <functional>
#include <sstream>
#include <thread>

#include "mem.h"
#include "ConsoleUtils.h"
using namespace ConsoleTools;

namespace Cheats
{
#pragma region Game Instances

	CG::UFNAFInventorySystem* Get_UFNAFInventorySystem() // This Uses A Parse mechanism to get the active and used array mechanism, instead of looping every time!
	{
		if (Active_UFNAFInventorySystem == nullptr)
		{
			auto FnafInventory = CG::UObject::FindObjects<CG::UFNAFInventorySystem>()[1];
			if (FnafInventory != nullptr)
			{
				Active_UFNAFInventorySystem = FnafInventory;
				return FnafInventory;
			}
		}
		return Active_UFNAFInventorySystem;
	}

#pragma endregion

	void Freddy_Always_CanCallFreddy()
	{
		try
		{
			auto FazBlasterAmmo = CG::UObject::FindObjects<CG::UWorldStateSystem>();
			if (!FazBlasterAmmo.empty())
			{
				for (auto& mods : FazBlasterAmmo)
				{
					if (mods != nullptr)
					{
						mods->SetCanCallFreddy(true);
					}
				}
			}

			//auto FazBlasterAmmo1 = CG::UObject::FindObjects<CG::FFNAFMissionTaskInfo>();
			//if (!FazBlasterAmmo1.empty())
			//{
			//	for (auto& mods : FazBlasterAmmo1)
			//	{
			//		if (mods != nullptr)
			//		{
			//			mods->FreddySettings.bCanCallFreddy = true;
			//		}
			//	}
			//}

		}
		catch (const std::exception& ex)
		{
			std::cout << "Thread exited with exception: " << ex.what() << "\n";
		}
	}

	void Freddy_Always_CanEnterExitFreddy()
	{
		try
		{
			auto FazBlasterAmmo = CG::UObject::FindObjects<CG::UWorldStateSystem>();
			if (!FazBlasterAmmo.empty())
			{
				for (auto& mods : FazBlasterAmmo)
				{
					if (mods != nullptr)
					{
						mods->SetCanEnterExitFreddy(true);
					}
				}
			}

			//auto FazBlasterAmmo1 = CG::UObject::FindObjects<CG::FFNAFMissionTaskInfo>();
			//if (!FazBlasterAmmo1.empty())
			//{
			//	for (auto& mods : FazBlasterAmmo1)
			//	{
			//		if (mods != nullptr)
			//		{
			//			mods->FreddySettings.bCanEnterExitFreddy = true;
			//		}
			//	}
			//}

		}
		catch (const std::exception& ex)
		{
			std::cout << "Thread exited with exception: " << ex.what() << "\n";
		}
	}

	void UnlimitedFazerBlasterLifes()
	{
		try
		{
			auto FazBlasterAmmo = CG::UObject::FindObjects<CG::UWI_Health_Fazerblast_C>();
			if (!FazBlasterAmmo.empty())
			{
				for (auto& mods : FazBlasterAmmo)
				{
					if (mods != nullptr)
					{
						mods->Health = 999999999;
						mods->MaxHealth = 999999999;
					}
				}
			}
		}
		catch (const std::exception& ex)
		{
			std::cout << "Thread exited with exception: " << ex.what() << "\n";
		}
	}

	void ToggleDebugMenuMiniGame()
	{
		auto FazBlasterAmmo = CG::UObject::FindObjects<CG::UTitleUI_C>();
		if (!FazBlasterAmmo.empty())
		{
			for (auto& mods : FazBlasterAmmo)
			{
				if (mods != nullptr)
				{
					mods->Debug_Visible_Menus();
				}
			}
		}
	}

	void ForceSaveGameFeature()
	{
		try
		{
			auto Savegame1 = CG::UObject::FindObjects<CG::ASaveGameActor_C>();
			if (!Savegame1.empty())
			{
				for (auto& mods : Savegame1)
				{
					if (mods != nullptr)
					{
						mods->CanPlayerInteract(new bool(true), new CG::fnaf9_EConditionFailReason(CG::fnaf9_EConditionFailReason::EConditionFailReason__None));
						mods->IsActive = true;
						mods->Glitching = false;
						if (mods->PlayerTrigger != nullptr)
						{
							mods->PlayerTrigger->SetActive(true, false);
						}
					}
				}
			}
			auto Savegame2 = CG::UObject::FindObjects<CG::UFNAFSaveGameSystem>();
			if (!Savegame2.empty())
			{
				for (auto& mods : Savegame2)
				{
					if (mods != nullptr)
					{
						mods->bIsSavingAllowed = true;
						mods->SetIsSavingAllowed(true);
					}
				}
			}
		}
		catch (const std::exception& ex)
		{
			std::cout << "Thread exited with exception: " << ex.what() << "\n";
		}
	}

	void NoChicaBeakCooldown()
	{
		try
		{
			auto FazBlasterAmmo = CG::UObject::FindObjects<CG::AFreddy_C>();
			if (!FazBlasterAmmo.empty())
			{
				for (auto& mods : FazBlasterAmmo)
				{
					if (mods != nullptr)
					{
						mods->ChicaVoiceCooldownOn_ = false;
						mods->ChicaVoiceCooldownTime = 0.1f;
					}
				}
			}
		}
		catch (const std::exception& ex)
		{
			std::cout << "Thread exited with exception: " << ex.what() << "\n";
		}
	}

	void UnlimitedJump()
	{
		try
		{
			auto FazBlasterAmmo = CG::UObject::FindObjects<CG::ACharacter>();
			if (!FazBlasterAmmo.empty())
			{
				for (auto& mods : FazBlasterAmmo)
				{
					if (mods != nullptr)
					{
						mods->JumpMaxCount = 999999999;
						mods->JumpMaxHoldTime = static_cast<float>(999999999);
					}
				}
			}
		}
		catch (const std::exception& ex)
		{
			std::cout << "Thread exited with exception: " << ex.what() << "\n";
		}
	}

	void MinigamesGodMode()
	{
		try
		{
			auto PrincessQuestUI = CG::UObject::FindObjects<CG::UPlayerUI_C>();
			if (!PrincessQuestUI.empty())
			{
				for (auto& mods : PrincessQuestUI)
				{
					if (mods != nullptr)
					{
						mods->HealFull();
					}
				}
			}
		}
		catch (const std::exception& ex)
		{
			std::cout << "Thread exited with exception: " << ex.what() << "\n";
		}
	}

	void DestroyUBoxComponent(CG::UBoxComponent* Actor)
	{
		if (Actor != nullptr)
		{
			Actor->K2_DestroyComponent(Actor);
		}
	}

	void SemiGodmode()
	{
		try
		{
			// This will Disable most of the AIs Jumpscares
			// Monty, Chica, Roxy, Vanessa, Vanny , Endos, Blob (God Mode Confirmed on them)

			// TODO: TEST Big MusicMan
			// TODO: ADD Option to include staffbots (excluding mapbots)
			// Moonman, Mini-music man Still unaffected
			// TODO: Figure out how moonman and mini-music man jumpscare mechanism works and disable it.

			auto GeneralAI = CG::UObject::FindObjects<CG::AAISeeker_C>();
			if (!GeneralAI.empty())
			{
				for (auto& mods : GeneralAI)
				{
					if (mods != nullptr)
					{
						if (mods->PlayerCaptureTrigger != nullptr)
						{
							if (mods->Owner != nullptr)
							{
								ConsoleWrite("Destroyed a PlayerCaptureTrigger in " + mods->Owner->GetName());
							}
							DestroyUBoxComponent(mods->PlayerCaptureTrigger);
						}

					}
				}
			}

			// IS this really required?
			//auto burntrap_freddy = CG::UObject::FindObjects<CG::ABurntrap_Freddy_C>();
			//if (!burntrap_freddy.empty())
			//{
			//	for (auto& mods : burntrap_freddy)
			//	{
			//		if (mods != nullptr)
			//		{
			//			if (mods->PlayerCaptureTrigger != nullptr)
			//			{
			//				//ConsoleWrite("Destroyed a Freddy BurnTrap PlayerCaptureTrigger!");
			//				mods->PlayerCaptureTrigger->K2_DestroyComponent(mods->PlayerCaptureTrigger);
			//			}

			//		}
			//	}
			//}

			// Possible game-breaking (Suspecting the triggers are the one that start the mission for repairing robot head)
			//auto DJMusicMan = CG::UObject::FindObjects<CG::ADJMusicMan_C>();
			//if (!DJMusicMan.empty())
			//{
			//	for (auto& mods : DJMusicMan)
			//	{
			//		if (mods != nullptr)
			//		{
			//			if (mods->PlayerCaptureTrigger1 != nullptr)
			//			{
			//				//ConsoleWrite("Destroyed a DJ Music Man PlayerCaptureTrigger1!");
			//				mods->PlayerCaptureTrigger1->K2_DestroyComponent(mods->PlayerCaptureTrigger1);
			//			}

			//			if (mods->PlayerCaptureTrigger2 != nullptr)
			//			{
			//				//ConsoleWrite("Destroyed a DJ Music Man PlayerCaptureTrigger2!");
			//				mods->PlayerCaptureTrigger2->K2_DestroyComponent(mods->PlayerCaptureTrigger2);
			//			}

			//			if (mods->PlayerCaptureTrigger3 != nullptr)
			//			{
			//				//ConsoleWrite("Destroyed a DJ Music Man PlayerCaptureTrigger3!");
			//				mods->PlayerCaptureTrigger3->K2_DestroyComponent(mods->PlayerCaptureTrigger3);
			//			}

			//			if (mods->PlayerCaptureTrigger4 != nullptr)
			//			{
			//				//ConsoleWrite("Destroyed a DJ Music Man PlayerCaptureTrigger4!");
			//				mods->PlayerCaptureTrigger4->K2_DestroyComponent(mods->PlayerCaptureTrigger4);
			//			}

			//		}
			//	}
			//}

			// Makes game crash (Suspiciously)
			//auto Moonman = CG::UObject::FindObjects<CG::AMoonman_C>();
			//if (!Moonman.empty())
			//{
			//	for (auto& mods : Moonman)
			//	{
			//		if (mods != nullptr)
			//		{
			//			if (mods->PlayerCaptureTrigger1 != nullptr)
			//			{
			//				//ConsoleWrite("Destroyed a MoonMan PlayerCaptureTrigger1!");
			//				mods->PlayerCaptureTrigger1->K2_DestroyComponent(mods->PlayerCaptureTrigger1);
			//			}

			//			if (mods->PlayerCaptureTrigger2 != nullptr)
			//			{
			//				//ConsoleWrite("Destroyed a MoonMan PlayerCaptureTrigger2!");
			//				mods->PlayerCaptureTrigger2->K2_DestroyComponent(mods->PlayerCaptureTrigger2);
			//			}

			//		}
			//	}
			//}

		}
		catch (const std::exception& ex)
		{
			std::cout << "Thread exited with exception: " << ex.what() << "\n";
		}
	}

	void UnlimitedFlashLight()
	{
		try
		{

			auto FazBlasterAmmo = CG::UObject::FindObjects<CG::AEQ_Flashlight_C>();
			if (!FazBlasterAmmo.empty())
			{
				for (auto& mods : FazBlasterAmmo)
				{
					if (mods != nullptr)
					{
						mods->PowerPerSecond = static_cast<float>(999999999);
						mods->hasPower = true;
					}
				}
			}
		}
		catch (const std::exception& ex)
		{
			std::cout << "Thread exited with exception: " << ex.what() << "\n";
		}

	}

	void UnlimitedFazBlasterAmmo()
	{
		try
		{
			auto FazBlasterAmmo = CG::UObject::FindObjects<CG::AEQ_LaserGun_C>();
			if (!FazBlasterAmmo.empty())
			{
				for (auto& mods : FazBlasterAmmo)
				{
					if (mods != nullptr)
					{
						mods->ShotsLeft = 999999999;
						mods->TotalShots = 999999999;
					}
				}
			}
			auto FazBlasterAmmo1 = CG::UObject::FindObjects<CG::UFazblasterChargeUI_C>();
			if (!FazBlasterAmmo1.empty())
			{
				for (auto& mods : FazBlasterAmmo1)
				{
					if (mods != nullptr)
					{
						mods->ShotsLeft = 999999999;
						mods->TotalShots = 999999999;
					}
				}
			}
		}
		catch (const std::exception& ex)
		{
			std::cout << "Thread exited with exception: " << ex.what() << "\n";
		}
	}

	void NoPowerDrainingDoors()
	{
		try
		{
			auto DoorDrain = CG::UObject::FindObjects<CG::ABP_PowerMeter_Door_C>();
			if (!DoorDrain.empty())
			{
				for (auto& mods : DoorDrain)
				{
					if (mods != nullptr)
					{
						mods->DrainPower = false;
						mods->DrainRate = 0;
					}
				}
			}
			//auto DoorDrain1 = CG::UObject::FindObjects<CG::ADoorLockSystem_C>();
			//if (!DoorDrain1.empty())
			//{
			//	for (auto& mods : DoorDrain1)
			//	{
			//		if (mods != nullptr)
			//		{
			//			mods->AmountToDrain = 0;
			//		}
			//	}
			//}
			auto DoorDrain2 = CG::UObject::FindObjects<CG::USecurityOfficeActivatableHandler_C>();
			if (!DoorDrain2.empty())
			{
				for (auto& mods : DoorDrain2)
				{
					if (mods != nullptr)
					{
						mods->PowerDrain = 0;
					}
				}
			}
			auto DoorDrain3 = CG::UObject::FindObjects<CG::AOGM_Underground_C>();
			if (!DoorDrain3.empty())
			{
				for (auto& mods : DoorDrain3)
				{
					if (mods != nullptr)
					{
						mods->DoorCurrentPower = static_cast<float>(999999999);
						mods->DoorPower = static_cast<float>(999999999);

						mods->VentCurrentPower = static_cast<float>(999999999);
						mods->VentPower = static_cast<float>(999999999);
					}
				}
			}
			auto DoorDrain4 = CG::UObject::FindObjects<CG::ABackstageOffice_Door_C>();
			if (!DoorDrain4.empty())
			{
				for (auto& mods : DoorDrain4)
				{
					if (mods != nullptr)
					{
						mods->DoorInitialPowerMax = static_cast<float>(999999999);
						mods->DoorInitialPower = static_cast<float>(999999999);
						mods->CurrentDoorPower = static_cast<float>(999999999);
						mods->OtherInitialPower = static_cast<float>(999999999);
					}
				}
			}
			auto DoorDrain5 = CG::UObject::FindObjects<CG::AOGM_Kitchen_C>();
			if (!DoorDrain5.empty())
			{
				for (auto& mods : DoorDrain5)
				{
					if (mods != nullptr)
					{
						mods->P_DoorPower = static_cast<float>(999999999);
						mods->InitialDoorPower = static_cast<float>(999999999);
					}
				}
			}
			auto DoorDrain6 = CG::UObject::FindObjects<CG::UAttackDoor_C>();
			if (!DoorDrain6.empty())
			{
				for (auto& mods : DoorDrain6)
				{
					if (mods != nullptr)
					{
						mods->CanDrainPower = false;
					}
				}
			}
		}
		catch (const std::exception& ex)
		{
			std::cout << "Thread exited with exception: " << ex.what() << "\n";
		}
	}

	int Get_CurrentFreddyPower()
	{
		if (Get_UFNAFInventorySystem() != nullptr)
		{
			return Get_UFNAFInventorySystem()->FreddyPowerLevel;
		}
		return 0;
	}
	void Set_CurrentFreddyPower(const int& value)
	{
		if (Get_UFNAFInventorySystem() != nullptr)
		{
			Get_UFNAFInventorySystem()->FreddyPowerLevel = value;
		}
	}

	int Get_MaxFreddyPower()
	{
		if (Get_UFNAFInventorySystem() != nullptr)
		{
			return Get_UFNAFInventorySystem()->FreddyMaxPowerLevel;
		}
		return 0;
	}
	void Set_MaxFreddyPower(const int& value)
	{
		if (Get_UFNAFInventorySystem() != nullptr)
		{
			Get_UFNAFInventorySystem()->FreddyMaxPowerLevel = value;
		}
	}
	bool Get_UnlimitedFazwatchPower()
	{
		if (Get_UFNAFInventorySystem() != nullptr)
		{
			return Get_UFNAFInventorySystem()->bUnlimitedFazwatchPower;
		}
		return false;
	}
	void Set_UnlimitedFazwatchPower(const bool& value)
	{
		if (Get_UFNAFInventorySystem() != nullptr)
		{
			Get_UFNAFInventorySystem()->bUnlimitedFazwatchPower = value;
		}
	}
	bool Get_UnlimitedStamina()
	{
		if (Get_UFNAFInventorySystem() != nullptr)
		{
			return Get_UFNAFInventorySystem()->bUnlimitedStamina;
		}
		return false;
	}
	void Set_UnlimitedStamina(const bool& value)
	{
		if (Get_UFNAFInventorySystem() != nullptr)
		{
			Get_UFNAFInventorySystem()->bUnlimitedStamina = value;
		}
	}
	void Get_AllArchievements()
	{
		auto TileDebugMenu = CG::UObject::FindObjects<CG::UTitleUI_C>();
		if (!TileDebugMenu.empty())
		{
			for (auto& mods : TileDebugMenu)
			{
				if (mods != nullptr)
				{
					mods->DebugMenu = true;
				}
			}
		}
		auto DebugMenu2 = CG::UObject::FindObjects<CG::ATitlePC_C>();
		if (!DebugMenu2.empty())
		{
			for (auto& mods : DebugMenu2)
			{
				if (mods != nullptr)
				{
					mods->EnableDebugFullMenu = true;
				}
			}
		}

		auto DebugMenu3 = CG::UObject::FindObjects<CG::AMainGamePC_C>();
		if (!DebugMenu3.empty())
		{
			for (auto& mods : DebugMenu3)
			{
				if (mods != nullptr)
				{
					mods->OnToggleDevUI();
				}
			}
		}
	}

	void ToggleDevUI()
	{
		auto TileDebugMenu = CG::UObject::FindObjects<CG::UTitleUI_C>();
		if (!TileDebugMenu.empty())
		{
			for (auto& mods : TileDebugMenu)
			{
				if (mods != nullptr)
				{
					mods->DebugMenu = true;
				}
			}
		}
		auto DebugMenu2 = CG::UObject::FindObjects<CG::ATitlePC_C>();
		if (!DebugMenu2.empty())
		{
			for (auto& mods : DebugMenu2)
			{
				if (mods != nullptr)
				{
					mods->EnableDebugFullMenu = true;
				}
			}
		}

		auto DebugMenu3 = CG::UObject::FindObjects<CG::AMainGamePC_C>();
		if (!DebugMenu3.empty())
		{
			for (auto& mods : DebugMenu3)
			{
				if (mods != nullptr)
				{
					mods->OnToggleDevUI();
				}
			}
		}
	}

	void RemoveCollectionTime()
	{
		try
		{
			auto FazerBlaster = CG::UObject::FindObjects<CG::UPlayerInteractHoldComponent_C>();
			if (!FazerBlaster.empty())
			{
				for (auto& mods : FazerBlaster)
				{
					if (mods != nullptr)
					{
						if (mods->HoldToCollectTime != 0)
						{
							mods->HoldToCollectTime = 0;
						}
						if (mods->CollectionTime != 0)
						{
							mods->CollectionTime = 0;
						}
					}
				}
			}
		}
		catch (const std::exception& ex)
		{
			std::cout << "Thread exited with exception: " << ex.what() << "\n";
		}
	}

	void RemoveBlasterCooldown()
	{
		try
		{
			auto GregoryMod = CG::UObject::FindObjects<CG::AGregory_C>();
			if (!GregoryMod.empty())
			{
				for (auto& mods : GregoryMod)
				{
					if (mods != nullptr)
					{
						mods->FazerBlasterRechargeTime = 0.1f;
					}
				}
			}
			auto FazerBlaster = CG::UObject::FindObjects<CG::AEQ_LaserGun_C>();
			if (!FazerBlaster.empty())
			{
				for (auto& mods : FazerBlaster)
				{
					if (mods != nullptr)
					{
						mods->RechargeTime = 0.1f;
					}
				}
			}
		}
		catch (const std::exception& ex)
		{
			std::cout << "Thread exited with exception: " << ex.what() << "\n";
		}
	}

	void RemoveFazCamCooldownTime()
	{
		try
		{
			auto GregoryMod = CG::UObject::FindObjects<CG::AGregory_C>();
			if (!GregoryMod.empty())
			{
				for (auto& mods : GregoryMod)
				{
					if (mods != nullptr)
					{
						mods->FazCamCooldownTime = 0.1f;
					}
				}
			}
			auto FlashBeacon = CG::UObject::FindObjects<CG::AEQ_Flashbeacon_C>();
			if (!FlashBeacon.empty())
			{
				for (auto& mods : FlashBeacon)
				{
					if (mods != nullptr)
					{
						mods->CanUse_ = true;
						mods->CoolDownTime = 0.1f;
					}
				}
			}

			if (Get_UFNAFInventorySystem() != nullptr)
			{
				Get_UFNAFInventorySystem()->NumAvailableFlash = 999999999;
			}

			auto powerlevel = CG::UObject::FindObjects<CG::UWI_PowerLevel_C>();
			if (!powerlevel.empty())
			{
				for (auto& mods : powerlevel)
				{
					if (mods != nullptr)
					{
						mods->CanUseFlash = true;
					}
				}
			}

			auto CamMod = CG::UObject::FindObjects<CG::UFazcamChargeUI_C>();
			if (!CamMod.empty())
			{
				for (auto& mods : CamMod)
				{
					if (mods != nullptr)
					{
						mods->RechargeTime = 0.1f;
					}
				}
			}
		}
		catch (const std::exception& ex)
		{
			std::cout << "Thread exited with exception: " << ex.what() << "\n";
		}
	}
}
