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

// Function FNAFGameInstanceInterface.FNAFGameInstanceInterface_C.GetGameType
struct UFNAFGameInstanceInterface_C_GetGameType_Params
{
	fnaf9_EFNAFGameType                                GameType;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FNAFGameInstanceInterface.FNAFGameInstanceInterface_C.ChangeHourlyActivity
struct UFNAFGameInstanceInterface_C_ChangeHourlyActivity_Params
{
	int                                                HourIndex;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
