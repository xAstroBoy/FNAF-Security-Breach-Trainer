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

// Function Cinematic_Actor_Monty.Cinematic_Actor_Monty_C.ReceiveBeginPlay
struct ACinematic_Actor_Monty_C_ReceiveBeginPlay_Params
{
};

// Function Cinematic_Actor_Monty.Cinematic_Actor_Monty_C.PlayVO
struct ACinematic_Actor_Monty_C_PlayVO_Params
{
	class UAkAudioEvent*                               SubtitleEvent;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SanitizeSubtitleKey;                                       // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UAkAudioEvent*                               AudioEvent;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cinematic_Actor_Monty.Cinematic_Actor_Monty_C.ExecuteUbergraph_Cinematic_Actor_Monty
struct ACinematic_Actor_Monty_C_ExecuteUbergraph_Cinematic_Actor_Monty_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
