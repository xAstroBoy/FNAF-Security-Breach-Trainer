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

// Function OGM_VannyBattle.OGM_VannyBattle_C.OnEnd
struct AOGM_VannyBattle_C_OnEnd_Params
{
	TEnumAsByte<E_EndMiniGameType_E_EndMiniGameType>   EndType;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OGM_VannyBattle.OGM_VannyBattle_C.On Start
struct AOGM_VannyBattle_C_On_Start_Params
{
};

// Function OGM_VannyBattle.OGM_VannyBattle_C.OnFailure_C3E8CEE64F273648654604A1E4026F01
struct AOGM_VannyBattle_C_OnFailure_C3E8CEE64F273648654604A1E4026F01_Params
{
};

// Function OGM_VannyBattle.OGM_VannyBattle_C.OnSuccess_C3E8CEE64F273648654604A1E4026F01
struct AOGM_VannyBattle_C_OnSuccess_C3E8CEE64F273648654604A1E4026F01_Params
{
};

// Function OGM_VannyBattle.OGM_VannyBattle_C.OnFailure_D8EC7FD343756DEFCAD9FBBDE672C6F4
struct AOGM_VannyBattle_C_OnFailure_D8EC7FD343756DEFCAD9FBBDE672C6F4_Params
{
	struct FName                                       WrittenAchievementName;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WrittenProgress;                                           // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WrittenUserTag;                                            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OGM_VannyBattle.OGM_VannyBattle_C.OnSuccess_D8EC7FD343756DEFCAD9FBBDE672C6F4
struct AOGM_VannyBattle_C_OnSuccess_D8EC7FD343756DEFCAD9FBBDE672C6F4_Params
{
	struct FName                                       WrittenAchievementName;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WrittenProgress;                                           // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WrittenUserTag;                                            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OGM_VannyBattle.OGM_VannyBattle_C.BndEvt__Drop Trigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct AOGM_VannyBattle_C_BndEvt__Drop_Trigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function OGM_VannyBattle.OGM_VannyBattle_C.Vanny Destroy
struct AOGM_VannyBattle_C_Vanny_Destroy_Params
{
};

// Function OGM_VannyBattle.OGM_VannyBattle_C.Vanny Redeem
struct AOGM_VannyBattle_C_Vanny_Redeem_Params
{
};

// Function OGM_VannyBattle.OGM_VannyBattle_C.ExecuteUbergraph_OGM_VannyBattle
struct AOGM_VannyBattle_C_ExecuteUbergraph_OGM_VannyBattle_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
