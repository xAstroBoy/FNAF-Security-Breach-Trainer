#pragma once

/**
 * Name: FNAFSB
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function AmbientAudio.AmbientAudio_C.ReceiveBeginPlay
	 */
	struct UAmbientAudio_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function AmbientAudio.AmbientAudio_C.PlaySound
	 */
	struct UAmbientAudio_C_PlaySound_Params
	{	};

	/**
	 * Function AmbientAudio.AmbientAudio_C.ExecuteUbergraph_AmbientAudio
	 */
	struct UAmbientAudio_C_ExecuteUbergraph_AmbientAudio_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JA3I[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
