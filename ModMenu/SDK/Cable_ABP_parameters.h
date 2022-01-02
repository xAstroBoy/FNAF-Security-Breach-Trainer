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

// Function Cable_ABP.Cable_ABP_C.AnimGraph
struct UCable_ABP_C_AnimGraph_Params
{
	struct FPoseLink                                   AnimGraph;                                                 // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
};

// Function Cable_ABP.Cable_ABP_C.Off
struct UCable_ABP_C_Off_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Cable_ABP.Cable_ABP_C.Close
struct UCable_ABP_C_Close_Params
{
	bool                                               close;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Cable_ABP.Cable_ABP_C.TestButton_G
struct UCable_ABP_C_TestButton_G_Params
{
};

// Function Cable_ABP.Cable_ABP_C.TestButton_Y
struct UCable_ABP_C_TestButton_Y_Params
{
};

// Function Cable_ABP.Cable_ABP_C.TestButton_B
struct UCable_ABP_C_TestButton_B_Params
{
};

// Function Cable_ABP.Cable_ABP_C.VoiceBoxSwap
struct UCable_ABP_C_VoiceBoxSwap_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Cable_ABP.Cable_ABP_C.TestButton_R
struct UCable_ABP_C_TestButton_R_Params
{
};

// Function Cable_ABP.Cable_ABP_C.PartsAndServiceGame
struct UCable_ABP_C_PartsAndServiceGame_Params
{
	TEnumAsByte<PartsAndServiceAnimEnum_EPartsAndServiceAnimEnum> GameEnum;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cable_ABP.Cable_ABP_C.ResetFreddy
struct UCable_ABP_C_ResetFreddy_Params
{
};

// Function Cable_ABP.Cable_ABP_C.BlueprintUpdateAnimation
struct UCable_ABP_C_BlueprintUpdateAnimation_Params
{
	float                                              DeltaTimeX;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cable_ABP.Cable_ABP_C.BlueprintBeginPlay
struct UCable_ABP_C_BlueprintBeginPlay_Params
{
};

// Function Cable_ABP.Cable_ABP_C.Out
struct UCable_ABP_C_Out_Params
{
	bool                                               In;                                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Cable_ABP.Cable_ABP_C.ExecuteUbergraph_Cable_ABP
struct UCable_ABP_C_ExecuteUbergraph_Cable_ABP_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
