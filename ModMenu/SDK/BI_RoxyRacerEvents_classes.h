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

// BlueprintGeneratedClass BI_RoxyRacerEvents.BI_RoxyRacerEvents_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBI_RoxyRacerEvents_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BI_RoxyRacerEvents.BI_RoxyRacerEvents_C");
		return ptr;
	}



	void GetCanMove(bool* CanMove);
	void GameEnd();
	void EndRace();
	void StartRace();
	void StartRaceCountdown(float TimeTillStart);
	void CanMove(bool New_Can_Move);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
