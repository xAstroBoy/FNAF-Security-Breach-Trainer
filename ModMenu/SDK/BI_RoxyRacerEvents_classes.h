#pragma once

/**
 * Name: FNAF Security Breach
 * Version: 2
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
	 * BlueprintGeneratedClass BI_RoxyRacerEvents.BI_RoxyRacerEvents_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBI_RoxyRacerEvents_C : public UInterface
	{
	public:
		void GetCanMove(bool* CanMove);
		void GameEnd();
		void EndRace();
		void StartRace();
		void StartRaceCountdown(float TimeTillStart);
		void CanMove(bool New_Can_Move);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
