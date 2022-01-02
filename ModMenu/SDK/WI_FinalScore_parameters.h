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

// Function WI_FinalScore.WI_FinalScore_C.LaserHit
struct UWI_FinalScore_C_LaserHit_Params
{
	class AEQ_LaserGun_C*                              Gun;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  HitResult;                                                 // 0x0008(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function WI_FinalScore.WI_FinalScore_C.ForceKill
struct UWI_FinalScore_C_ForceKill_Params
{
	bool                                               Animate_;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WI_FinalScore.WI_FinalScore_C.GameStart
struct UWI_FinalScore_C_GameStart_Params
{
};

// Function WI_FinalScore.WI_FinalScore_C.GameEnd
struct UWI_FinalScore_C_GameEnd_Params
{
};

// Function WI_FinalScore.WI_FinalScore_C.GameExit
struct UWI_FinalScore_C_GameExit_Params
{
};

// Function WI_FinalScore.WI_FinalScore_C.PlayerHit
struct UWI_FinalScore_C_PlayerHit_Params
{
	struct FHitResult                                  Hit;                                                       // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function WI_FinalScore.WI_FinalScore_C.Construct
struct UWI_FinalScore_C_Construct_Params
{
};

// Function WI_FinalScore.WI_FinalScore_C.ExecuteUbergraph_WI_FinalScore
struct UWI_FinalScore_C_ExecuteUbergraph_WI_FinalScore_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
