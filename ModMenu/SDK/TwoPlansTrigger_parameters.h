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

// Function TwoPlansTrigger.TwoPlansTrigger_C.ReceiveBeginPlay
struct ATwoPlansTrigger_C_ReceiveBeginPlay_Params
{
};

// Function TwoPlansTrigger.TwoPlansTrigger_C.OnTriggered
struct ATwoPlansTrigger_C_OnTriggered_Params
{
};

// Function TwoPlansTrigger.TwoPlansTrigger_C.On Skip
struct ATwoPlansTrigger_C_On_Skip_Params
{
	TArray<struct FName>                               SkippedTasks;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function TwoPlansTrigger.TwoPlansTrigger_C.ManualTrigger
struct ATwoPlansTrigger_C_ManualTrigger_Params
{
};

// Function TwoPlansTrigger.TwoPlansTrigger_C.ExecuteUbergraph_TwoPlansTrigger
struct ATwoPlansTrigger_C_ExecuteUbergraph_TwoPlansTrigger_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
