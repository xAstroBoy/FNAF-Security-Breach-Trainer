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
	 * BlueprintGeneratedClass BPI_MainGameGM.BPI_MainGameGM_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_MainGameGM_C : public UInterface
	{
	public:
		void GetNavigationData(class ANavigationData** NavigationData);
		void GetGMPowerStationManager(class APowerStationManager_C** PowerStationManager);
		void GetGMTextFormatter(class UMissionTextFormatterFactory_C** MissionTextFormatter);
		void GetPlayerHUD(class UPlayerHUD_C** PlayerHUD);
		void SetPlayerHUD(class UPlayerHUD_C* PlayerHUD);
		void GetGregoryRef(class AGregory_C** Gregory);
		void SetGregoryRef(class AGregory_C* Gregory);
		void OnGMCallFreddy();
		void HasGMLoaded(bool* HasLoaded);
		void SetFreddyRef(class AFreddy_C* Freddy);
		void GetFreddyRef(class AFreddy_C** Freddy);
		void GetFlashlightManager(class AFlashlightRechargeStationManager_C** FlashlightManager);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
