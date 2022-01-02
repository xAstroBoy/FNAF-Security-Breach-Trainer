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

// Function PresentCollectible.PresentCollectible_C.GetInteractibleType
struct APresentCollectible_C_GetInteractibleType_Params
{
	TEnumAsByte<InteractibleType_EInteractibleType>    Type;                                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<InteractiblePressType_EInteractiblePressType> PressType;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PresentCollectible.PresentCollectible_C.UserConstructionScript
struct APresentCollectible_C_UserConstructionScript_Params
{
};

// Function PresentCollectible.PresentCollectible_C.ReceiveBeginPlay
struct APresentCollectible_C_ReceiveBeginPlay_Params
{
};

// Function PresentCollectible.PresentCollectible_C.OnBeginCollect
struct APresentCollectible_C_OnBeginCollect_Params
{
};

// Function PresentCollectible.PresentCollectible_C.OnCollect
struct APresentCollectible_C_OnCollect_Params
{
};

// Function PresentCollectible.PresentCollectible_C.OnCancelCollect
struct APresentCollectible_C_OnCancelCollect_Params
{
};

// Function PresentCollectible.PresentCollectible_C.OnLoadCollected
struct APresentCollectible_C_OnLoadCollected_Params
{
};

// Function PresentCollectible.PresentCollectible_C.Reset Animation
struct APresentCollectible_C_Reset_Animation_Params
{
};

// Function PresentCollectible.PresentCollectible_C.ExecuteUbergraph_PresentCollectible
struct APresentCollectible_C_ExecuteUbergraph_PresentCollectible_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
