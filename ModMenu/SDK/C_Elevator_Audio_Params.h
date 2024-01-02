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
	 * Function C_Elevator_Audio.C_Elevator_Audio_C.GetUnplayedAudio
	 */
	struct UC_Elevator_Audio_C_GetUnplayedAudio_Params
	{
	public:
		TArray<struct FElevatorAudioOption>                        AvailableLines;                                          // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function C_Elevator_Audio.C_Elevator_Audio_C.GetAudioToPlay
	 */
	struct UC_Elevator_Audio_C_GetAudioToPlay_Params
	{
	public:
		struct FElevatorAudioOption                                Output;                                                  // 0x0000(0x0028)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function C_Elevator_Audio.C_Elevator_Audio_C.ReceiveTick
	 */
	struct UC_Elevator_Audio_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function C_Elevator_Audio.C_Elevator_Audio_C.PlayElevatorAudio
	 */
	struct UC_Elevator_Audio_C_PlayElevatorAudio_Params
	{	};

	/**
	 * Function C_Elevator_Audio.C_Elevator_Audio_C.BeginElevatorAudio
	 */
	struct UC_Elevator_Audio_C_BeginElevatorAudio_Params
	{	};

	/**
	 * Function C_Elevator_Audio.C_Elevator_Audio_C.ExecuteUbergraph_C_Elevator_Audio
	 */
	struct UC_Elevator_Audio_C_ExecuteUbergraph_C_Elevator_Audio_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HCTJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function C_Elevator_Audio.C_Elevator_Audio_C.PlayAudioEvent__DelegateSignature
	 */
	struct UC_Elevator_Audio_C_PlayAudioEvent__DelegateSignature_Params
	{
	public:
		TArray<struct FElevatorAudioData>                          AudiotoPlay;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
