#pragma once

/**
 * Name: FNAF Security Breach
 * Version: 2
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
	{
	};

	/**
	 * Function AmbientAudio.AmbientAudio_C.PlaySound
	 */
	struct UAmbientAudio_C_PlaySound_Params
	{
	};

	/**
	 * Function AmbientAudio.AmbientAudio_C.ExecuteUbergraph_AmbientAudio
	 */
	struct UAmbientAudio_C_ExecuteUbergraph_AmbientAudio_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
