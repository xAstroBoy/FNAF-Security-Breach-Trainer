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

// BlueprintGeneratedClass BPI_MainGameGM.BPI_MainGameGM_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_MainGameGM_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPI_MainGameGM.BPI_MainGameGM_C");
		return ptr;
	}



	void GetFlashlightManager(class AFlashlightRechargeStationManager_C** FlashlightManager);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
