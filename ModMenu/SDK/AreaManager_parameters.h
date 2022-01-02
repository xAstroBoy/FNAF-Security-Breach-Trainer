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

// Function AreaManager.AreaManager_C.UserConstructionScript
struct AAreaManager_C_UserConstructionScript_Params
{
};

// Function AreaManager.AreaManager_C.ReceiveBeginPlay
struct AAreaManager_C_ReceiveBeginPlay_Params
{
};

// Function AreaManager.AreaManager_C.On Player Entered Room
struct AAreaManager_C_On_Player_Entered_Room_Params
{
	class ARoomAreaBase*                               Room;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AreaManager.AreaManager_C.ExecuteUbergraph_AreaManager
struct AAreaManager_C_ExecuteUbergraph_AreaManager_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AreaManager.AreaManager_C.OnPlayerEnteredArea__DelegateSignature
struct AAreaManager_C_OnPlayerEnteredArea__DelegateSignature_Params
{
	TEnumAsByte<Areas_EAreas>                          NewArea;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
