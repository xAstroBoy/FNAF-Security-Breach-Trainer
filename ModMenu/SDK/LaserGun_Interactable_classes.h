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

// BlueprintGeneratedClass LaserGun_Interactable.LaserGun_Interactable_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULaserGun_Interactable_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass LaserGun_Interactable.LaserGun_Interactable_C");
		return ptr;
	}



	void PlayerHit(const struct FHitResult& Hit);
	void GameExit();
	void GameEnd();
	void GameStart();
	void ForceKill(bool Animate_);
	void LaserHit(class AEQ_LaserGun_C* Gun, const struct FHitResult& HitResult);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
