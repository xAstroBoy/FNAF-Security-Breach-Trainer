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

// BlueprintGeneratedClass LaserTag_Gun_Door.LaserTag_Gun_Door_C
// 0x000D (FullSize[0x0288] - InheritedSize[0x027B])
class ALaserTag_Gun_Door_C : public ALaserTag_Door_C
{
public:
	unsigned char                                      UnknownData_EPE0[0x5];                                     // 0x027B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass LaserTag_Gun_Door.LaserTag_Gun_Door_C");
		return ptr;
	}



	void PlayerPickedUpLaserGun(bool PickedUp);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_LaserTag_Gun_Door(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
