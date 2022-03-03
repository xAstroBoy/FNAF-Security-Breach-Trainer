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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass TimeTrigger.TimeTrigger_C
	 * Size -> 0x0028 (FullSize[0x00D8] - InheritedSize[0x00B0])
	 */
	class UTimeTrigger_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                    Previous_Minute;                                         // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TimeRunOutHour;                                          // 0x00BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TimeRunOutMinute;                                        // 0x00C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FXYM[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             TimerInvoked;                                            // 0x00C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void Start_Timer(int32_t Current_Time_Hour, int32_t Current_Time_Minute, int32_t TImer_End_Hour, int32_t Timer_End_Minute, const class FScriptDelegate& Timer_End_Event);
		void Handle_Minute_Check(int32_t CurrentMinute);
		void ReceiveBeginPlay();
		void On_Timer_Started();
		void On_Game_Clock_TIme_Has_Changed(int32_t Hour, int32_t Minute);
		void On_Clock_State_Changed(bool bIsRunning);
		void ExecuteUbergraph_TimeTrigger(int32_t EntryPoint);
		void TimerInvoked__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
