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

// Function MGM_OfficeGameManger.MGM_OfficeGameManger_C.SetDoorsLock
struct AMGM_OfficeGameManger_C_SetDoorsLock_Params
{
	bool                                               Lock;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MGM_OfficeGameManger.MGM_OfficeGameManger_C.Can Spawn AI
struct AMGM_OfficeGameManger_C_Can_Spawn_AI_Params
{
	bool                                               Can_Spawn;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MGM_OfficeGameManger.MGM_OfficeGameManger_C.CheckIfPlayerLeave
struct AMGM_OfficeGameManger_C_CheckIfPlayerLeave_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function MGM_OfficeGameManger.MGM_OfficeGameManger_C.OnPlayerEnter
struct AMGM_OfficeGameManger_C_OnPlayerEnter_Params
{
};

// Function MGM_OfficeGameManger.MGM_OfficeGameManger_C.OnEnd
struct AMGM_OfficeGameManger_C_OnEnd_Params
{
	TEnumAsByte<E_EndMiniGameType_E_EndMiniGameType>   EndType;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MGM_OfficeGameManger.MGM_OfficeGameManger_C.On Start
struct AMGM_OfficeGameManger_C_On_Start_Params
{
};

// Function MGM_OfficeGameManger.MGM_OfficeGameManger_C.CheckIfPlayer
struct AMGM_OfficeGameManger_C_CheckIfPlayer_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MGM_OfficeGameManger.MGM_OfficeGameManger_C.OnPlayerLeave
struct AMGM_OfficeGameManger_C_OnPlayerLeave_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MGM_OfficeGameManger.MGM_OfficeGameManger_C.SetScreensToRender
struct AMGM_OfficeGameManger_C_SetScreensToRender_Params
{
};

// Function MGM_OfficeGameManger.MGM_OfficeGameManger_C.SetScreensToStatic
struct AMGM_OfficeGameManger_C_SetScreensToStatic_Params
{
};

// Function MGM_OfficeGameManger.MGM_OfficeGameManger_C.UserConstructionScript
struct AMGM_OfficeGameManger_C_UserConstructionScript_Params
{
};

// Function MGM_OfficeGameManger.MGM_OfficeGameManger_C.ReceiveBeginPlay
struct AMGM_OfficeGameManger_C_ReceiveBeginPlay_Params
{
};

// Function MGM_OfficeGameManger.MGM_OfficeGameManger_C.ExecuteUbergraph_MGM_OfficeGameManger
struct AMGM_OfficeGameManger_C_ExecuteUbergraph_MGM_OfficeGameManger_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
