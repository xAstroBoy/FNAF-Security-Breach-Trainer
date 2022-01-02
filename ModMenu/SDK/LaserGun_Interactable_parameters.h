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
// Parameters
//---------------------------------------------------------------------------

// Function LaserGun_Interactable.LaserGun_Interactable_C.PlayerHit
struct ULaserGun_Interactable_C_PlayerHit_Params
{
	struct FHitResult                                  Hit;                                                       // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function LaserGun_Interactable.LaserGun_Interactable_C.GameExit
struct ULaserGun_Interactable_C_GameExit_Params
{
};

// Function LaserGun_Interactable.LaserGun_Interactable_C.GameEnd
struct ULaserGun_Interactable_C_GameEnd_Params
{
};

// Function LaserGun_Interactable.LaserGun_Interactable_C.GameStart
struct ULaserGun_Interactable_C_GameStart_Params
{
};

// Function LaserGun_Interactable.LaserGun_Interactable_C.ForceKill
struct ULaserGun_Interactable_C_ForceKill_Params
{
	bool                                               Animate_;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LaserGun_Interactable.LaserGun_Interactable_C.LaserHit
struct ULaserGun_Interactable_C_LaserHit_Params
{
	class AEQ_LaserGun_C*                              Gun;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  HitResult;                                                 // 0x0008(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
