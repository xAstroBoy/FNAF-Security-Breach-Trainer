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

// Function VannyController.VannyController_C.ReceiveBeginPlay
struct AVannyController_C_ReceiveBeginPlay_Params
{
};

// Function VannyController.VannyController_C.OnRoomChanged
struct AVannyController_C_OnRoomChanged_Params
{
	class ARoomAreaBase*                               Room;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VannyController.VannyController_C.UpdateRoomSetup
struct AVannyController_C_UpdateRoomSetup_Params
{
};

// Function VannyController.VannyController_C.OnPlayerEnteredRoom
struct AVannyController_C_OnPlayerEnteredRoom_Params
{
	class ARoomAreaBase*                               Room;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VannyController.VannyController_C.ExecuteUbergraph_VannyController
struct AVannyController_C_ExecuteUbergraph_VannyController_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
