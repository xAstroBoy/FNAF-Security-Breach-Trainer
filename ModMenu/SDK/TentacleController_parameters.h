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

// Function TentacleController.TentacleController_C.FindClosestTentacle
struct ATentacleController_C_FindClosestTentacle_Params
{
	class APRE_Ventilation_BustOpen_C*                 Closest_Tentacle;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TentacleController.TentacleController_C.SetActivated
struct ATentacleController_C_SetActivated_Params
{
};

// Function TentacleController.TentacleController_C.On Activate
struct ATentacleController_C_On_Activate_Params
{
};

// Function TentacleController.TentacleController_C.Activate Tentacle Closest To Player
struct ATentacleController_C_Activate_Tentacle_Closest_To_Player_Params
{
};

// Function TentacleController.TentacleController_C.SetDeactivated
struct ATentacleController_C_SetDeactivated_Params
{
};

// Function TentacleController.TentacleController_C.ExecuteUbergraph_TentacleController
struct ATentacleController_C_ExecuteUbergraph_TentacleController_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
