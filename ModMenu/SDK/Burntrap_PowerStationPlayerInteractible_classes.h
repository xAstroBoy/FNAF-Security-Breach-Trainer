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

// BlueprintGeneratedClass Burntrap_PowerStationPlayerInteractible.Burntrap_PowerStationPlayerInteractible_C
// 0x000C (FullSize[0x02A0] - InheritedSize[0x0294])
class ABurntrap_PowerStationPlayerInteractible_C : public APowerStationPlayerInteractible_C
{
public:
	unsigned char                                      UnknownData_YR8B[0x4];                                     // 0x0294(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0298(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Burntrap_PowerStationPlayerInteractible.Burntrap_PowerStationPlayerInteractible_C");
		return ptr;
	}



	void OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController);
	void ExecuteUbergraph_Burntrap_PowerStationPlayerInteractible(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
