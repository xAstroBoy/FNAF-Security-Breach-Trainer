#include "pch.h"
#include "CheatsCode.h"
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
			//auto Savegame1 = CG::UObject::FindObjects<CG::ASaveGameActor_C>();
			//if (!Savegame1.empty())
			//{
			//	for (auto& mods : Savegame1)
			//	{
			//		if (mods != nullptr)
			//		{
			//			if (mods->PlayerTrigger != nullptr) // Shielded with Empty or Nullptr triggers.
			//			{
			//				mods->CanPlayerInteract(new bool(true), new CG::fnaf9_EConditionFailReason(CG::fnaf9_EConditionFailReason::EConditionFailReason__None));
			//				//mods->IsActive = true;
			//				//mods->Glitching = false;
			//			}
			//		}
			//	}
			//}
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

	void DisableJumpscares()
	{
		try
		{
			/*	auto Jumpscare1 = CG::UObject::FindObjects<CG::UAnimatronicJiggleABP_C>();
				if (!Jumpscare1.empty())
				{
					for (auto& mods : Jumpscare1)
					{
						if (mods != nullptr)
						{
							mods->canJumpscare = false;
						}
					}
				}
				auto Jumpscare2 = CG::UObject::FindObjects<CG::UAnimatronic_ABP_MASTER_C>();
				if (!Jumpscare2.empty())
				{
					for (auto& mods : Jumpscare2)
					{
						if (mods != nullptr)
						{
							mods->__CustomProperty_canJumpscare_4A98D0BF4A4FE0BE4AE282A8BE4A4087 = false;
							mods->__CustomProperty_canJumpscare_A7B4335C4CEF28D881FD46973C5B180B = false;
							mods->__CustomProperty_canJumpscare_36C8EED645279F9E89604C9B2DE3C578 = false;
							mods->__CustomProperty_canJumpscare_F15EA70C496B6393A39F2F97DAC31403 = false;
							mods->__CustomProperty_canJumpscare_3EDAFDCC4A84BB1E732F7B9A7CD159B9 = false;
							mods->canJumpscare = false;

						}
					}
				}
				auto Jumpscare3 = CG::UObject::FindObjects<CG::UMoonman_Daycare_ABP_C>();
				if (!Jumpscare3.empty())
				{
					for (auto& mods : Jumpscare3)
					{
						if (mods != nullptr)
						{
							mods->canJumpscare = false;
						}
					}
				}
				auto Jumpscare4 = CG::UObject::FindObjects<CG::URIG_DJ_Music_Man_ABP_C>();
				if (!Jumpscare4.empty())
				{
					for (auto& mods : Jumpscare4)
					{
						if (mods != nullptr)
						{
							mods->canJumpscare = false;
						}
					}
				}
				auto Jumpscare5 = CG::UObject::FindObjects<CG::URIG_Endo_Skeleton_ABP_C>();
				if (!Jumpscare5.empty())
				{
					for (auto& mods : Jumpscare5)
					{
						if (mods != nullptr)
						{
							mods->canJumpscare = false;
						}
					}
				}
				auto Jumpscare6 = CG::UObject::FindObjects<CG::URIG_Glamrock_Freddy_PartsServ_ABP_C>();
				if (!Jumpscare6.empty())
				{
					for (auto& mods : Jumpscare6)
					{
						if (mods != nullptr)
						{
							mods->canJumpscare = false;
						}
					}
				}
				auto Jumpscare7 = CG::UObject::FindObjects<CG::UStaffbot_ABP_C>();
				if (!Jumpscare7.empty())
				{
					for (auto& mods : Jumpscare7)
					{
						if (mods != nullptr)
						{
							mods->__CustomProperty_CanJumpscare_BCAB4F524DF88F3CDCCB3B8890C6DE16 = false;

							mods->__CustomProperty_CanJumpscare_41487E5C4BB83CC4B35EB7AB8EAFE4BB = false;
							mods->canJumpscare = false;
						}
					}
				}
				auto Jumpscare8 = CG::UObject::FindObjects<CG::UStaffbot_Security_LINK_C>();
				if (!Jumpscare8.empty())
				{
					for (auto& mods : Jumpscare8)
					{
						if (mods != nullptr)
						{
							mods->canJumpscare = false;
						}
					}
				}
				auto Jumpscare9 = CG::UObject::FindObjects<CG::UTentacle_ABP_C>();
				if (!Jumpscare9.empty())
				{
					for (auto& mods : Jumpscare9)
					{
						if (mods != nullptr)
						{
							mods->canJumpscare = false;
						}
					}
				}
				auto Jumpscare10 = CG::UObject::FindObjects<CG::UVanny_ABP_C>();
				if (!Jumpscare10.empty())
				{
					for (auto& mods : Jumpscare10)
					{
						if (mods != nullptr)
						{
							mods->canJumpscare = false;
						}
					}
				}
				auto Jumpscare11 = CG::UObject::FindObjects<CG::UVanessa_ABP_C>();
				if (!Jumpscare11.empty())
				{
					for (auto& mods : Jumpscare11)
					{
						if (mods != nullptr)
						{
							mods->canJumpscare = false;
						}
					}
				}*/
			auto Jumpscare12 = CG::UObject::FindObjects<CG::AAISeeker_C>();
			if (!Jumpscare12.empty())
			{
				for (auto& mods : Jumpscare12)
				{
					if (mods != nullptr)
					{
						if (mods->PlayerCaptureTrigger != nullptr)
						{
							//ConsoleWrite("Destroyed a PlayerCaptureTrigger!");
							mods->PlayerCaptureTrigger->K2_DestroyComponent(mods->PlayerCaptureTrigger);
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
						mods->HoldToCollectTime = 0;
						mods->CollectionTime = 0;
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
