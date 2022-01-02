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

// Function FlashlightCollectible.FlashlightCollectible_C.UpdateUIOnTick
struct AFlashlightCollectible_C_UpdateUIOnTick_Params
{
	bool                                               Output;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FlashlightCollectible.FlashlightCollectible_C.OnCollect
struct AFlashlightCollectible_C_OnCollect_Params
{
};

// Function FlashlightCollectible.FlashlightCollectible_C.CanPlayerInteract
struct AFlashlightCollectible_C_CanPlayerInteract_Params
{
	bool                                               CanInteract;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	fnaf9_EConditionFailReason                         CantReason;                                                // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FlashlightCollectible.FlashlightCollectible_C.OnPlayerInteract
struct AFlashlightCollectible_C_OnPlayerInteract_Params
{
	class APawn*                                       PlayerPawn;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                           PlayerController;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FlashlightCollectible.FlashlightCollectible_C.OnLoadCollected
struct AFlashlightCollectible_C_OnLoadCollected_Params
{
};

// Function FlashlightCollectible.FlashlightCollectible_C.ExecuteUbergraph_FlashlightCollectible
struct AFlashlightCollectible_C_ExecuteUbergraph_FlashlightCollectible_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
