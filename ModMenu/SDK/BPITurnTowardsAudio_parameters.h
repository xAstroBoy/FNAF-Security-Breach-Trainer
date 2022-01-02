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

// Function BPITurnTowardsAudio.BPITurnTowardsAudio_C.GetEndTurnTowardsEvent
struct UBPITurnTowardsAudio_C_GetEndTurnTowardsEvent_Params
{
	class UAkAudioEvent*                               EndTurnTowards;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPITurnTowardsAudio.BPITurnTowardsAudio_C.GetStartTurnTowardsEvent
struct UBPITurnTowardsAudio_C_GetStartTurnTowardsEvent_Params
{
	class UAkAudioEvent*                               StartTurnTowards;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
