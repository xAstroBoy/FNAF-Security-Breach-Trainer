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
	 * Function Vanessa.Vanessa_C.RequestPlayerInformation
	 */
	struct AVanessa_C_RequestPlayerInformation_Params
	{
	public:
		struct FVector                                             PlayerLocation;                                          // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HasValidInfo;                                            // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Vanessa.Vanessa_C.GetAlertInfo
	 */
	struct AVanessa_C_GetAlertInfo_Params
	{
	public:
		TArray<fnaf9_EFNAFAISpawnType>                             TypesToAlert;                                            // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
		int                                                        NumberOfAlerts;                                          // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Vanessa.Vanessa_C.IsWarningFinished
	 */
	struct AVanessa_C_IsWarningFinished_Params
	{
	public:
		bool                                                       Finished;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Vanessa.Vanessa_C.GetAlertType
	 */
	struct AVanessa_C_GetAlertType_Params
	{
	public:
		fnaf9_EAlertType                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Vanessa.Vanessa_C.GetShouldCheckHidingLocations
	 */
	struct AVanessa_C_GetShouldCheckHidingLocations_Params
	{
	public:
		bool                                                       ShouldCheckHidingLocations;                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Vanessa.Vanessa_C.GetRoomSeekMode
	 */
	struct AVanessa_C_GetRoomSeekMode_Params
	{
	public:
		TEnumAsByte<RoomSeekMode_ERoomSeekMode>                    SeekMode;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Vanessa.Vanessa_C.OnNotifyEnd_FA4713CB499BFC26786D6E8E8597FB63
	 */
	struct AVanessa_C_OnNotifyEnd_FA4713CB499BFC26786D6E8E8597FB63_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Vanessa.Vanessa_C.OnNotifyBegin_FA4713CB499BFC26786D6E8E8597FB63
	 */
	struct AVanessa_C_OnNotifyBegin_FA4713CB499BFC26786D6E8E8597FB63_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Vanessa.Vanessa_C.OnInterrupted_FA4713CB499BFC26786D6E8E8597FB63
	 */
	struct AVanessa_C_OnInterrupted_FA4713CB499BFC26786D6E8E8597FB63_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Vanessa.Vanessa_C.OnBlendOut_FA4713CB499BFC26786D6E8E8597FB63
	 */
	struct AVanessa_C_OnBlendOut_FA4713CB499BFC26786D6E8E8597FB63_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Vanessa.Vanessa_C.OnCompleted_FA4713CB499BFC26786D6E8E8597FB63
	 */
	struct AVanessa_C_OnCompleted_FA4713CB499BFC26786D6E8E8597FB63_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Vanessa.Vanessa_C.On Leave AI
	 */
	struct AVanessa_C_On_Leave_AI_Params
	{
	public:
		class AAISeeker_C*                                         ActorLeaving;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Vanessa.Vanessa_C.On Encounter AI
	 */
	struct AVanessa_C_On_Encounter_AI_Params
	{
	public:
		class AAISeeker_C*                                         ActorEncountered;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Vanessa.Vanessa_C.On Jumpscare
	 */
	struct AVanessa_C_On_Jumpscare_Params
	{
	public:
		class AGregory_C*                                          Gregory;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Vanessa.Vanessa_C.On Non Lethal Complete
	 */
	struct AVanessa_C_On_Non_Lethal_Complete_Params
	{
	};

	/**
	 * Function Vanessa.Vanessa_C.OnCaptureOverlap
	 */
	struct AVanessa_C_OnCaptureOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBoxComponent*                                       CurrentCaptureTrigger;                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Vanessa.Vanessa_C.PlayerTeleportedToLostAndFound
	 */
	struct AVanessa_C_PlayerTeleportedToLostAndFound_Params
	{
	};

	/**
	 * Function Vanessa.Vanessa_C.Start Alert
	 */
	struct AVanessa_C_Start_Alert_Params
	{
	public:
		class FName                                                Alert;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Vanessa.Vanessa_C.Stop Alert
	 */
	struct AVanessa_C_Stop_Alert_Params
	{
	public:
		class FName                                                Alert;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Vanessa.Vanessa_C.ReceiveTick
	 */
	struct AVanessa_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Vanessa.Vanessa_C.Stop Warning
	 */
	struct AVanessa_C_Stop_Warning_Params
	{
	};

	/**
	 * Function Vanessa.Vanessa_C.Start Warning
	 */
	struct AVanessa_C_Start_Warning_Params
	{
	public:
		int                                                        WarningCount;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Vanessa.Vanessa_C.Blocked By AI Time Up
	 */
	struct AVanessa_C_Blocked_By_AI_Time_Up_Params
	{
	};

	/**
	 * Function Vanessa.Vanessa_C.PlayVoiceType
	 */
	struct AVanessa_C_PlayVoiceType_Params
	{
	public:
		TEnumAsByte<AIVoiceOverType_EAIVoiceOverType>              VoiceTag;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Vanessa.Vanessa_C.SetAlertInfo
	 */
	struct AVanessa_C_SetAlertInfo_Params
	{
	public:
		TArray<fnaf9_EFNAFAISpawnType>                             TypesToAlert;                                            // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		int                                                        NumberOfAlerts;                                          // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Vanessa.Vanessa_C.ExecuteUbergraph_Vanessa
	 */
	struct AVanessa_C_ExecuteUbergraph_Vanessa_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
