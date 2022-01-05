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
	 * BlueprintGeneratedClass TimeCheckComponent.TimeCheckComponent_C
	 * Size -> 0x0068 (FullSize[0x0118] - InheritedSize[0x00B0])
	 */
	class UTimeCheckComponent_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FFNAFTime                                           StartTime;                                               // 0x00B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FFNAFTime                                           EndTime;                                                 // 0x00C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnTimeStart;                                             // 0x00C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnTimeEnd;                                               // 0x00D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       UseTimeRange;                                            // 0x00E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       ExcludeMoonManTimes;                                     // 0x00E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0NXW[0x6];                                   // 0x00EA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             MoonManTimeHit;                                          // 0x00F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       UseTimeChangeEvent;                                      // 0x0100(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       StartTriggered;                                          // 0x0101(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       EndTriggered;                                            // 0x0102(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_O1VR[0x5];                                   // 0x0103(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FConditionResultDelegates                           ConditionalsDelegates;                                   // 0x0108(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		bool ConditionsMet();
		void SendConditionUpdate();
		void CheckTime();
		bool HasMetTimeConditions();
		void On_Time_Hit();
		void On_Time_End();
		void On_World_State_Changed(fnaf9_EFNAFGameState NewState, fnaf9_EFNAFGameState PreviousState);
		void On_Time_Changed(int Hour, int Minute);
		void ReceiveBeginPlay();
		void BindConditionUpdatedDelegate(const class FScriptDelegate& OnConditionResultUpdated);
		void UnbindConditionUpdatedDelegate(const class FScriptDelegate& OnConditionResultUpdated);
		void ExecuteUbergraph_TimeCheckComponent(int EntryPoint);
		void MoonManTimeHit__DelegateSignature();
		void OnTimeEnd__DelegateSignature();
		void OnTimeStart__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
