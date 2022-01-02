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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TimeCheckComponent.TimeCheckComponent_C
// 0x0068 (FullSize[0x0118] - InheritedSize[0x00B0])
class UTimeCheckComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FFNAFTime                                   StartTime;                                                 // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FFNAFTime                                   EndTime;                                                   // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnTimeStart;                                               // 0x00C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnTimeEnd;                                                 // 0x00D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               UseTimeRange;                                              // 0x00E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ExcludeMoonManTimes;                                       // 0x00E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OMQF[0x6];                                     // 0x00EA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    MoonManTimeHit;                                            // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               UseTimeChangeEvent;                                        // 0x0100(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               StartTriggered;                                            // 0x0101(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               EndTriggered;                                              // 0x0102(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Y9RF[0x5];                                     // 0x0103(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FConditionResultDelegates                   ConditionalsDelegates;                                     // 0x0108(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TimeCheckComponent.TimeCheckComponent_C");
		return ptr;
	}



	bool ConditionsMet();
	void SendConditionUpdate();
	void CheckTime();
	bool HasMetTimeConditions();
	void On_Time_Hit();
	void On_Time_End();
	void On_World_State_Changed(fnaf9_EFNAFGameState NewState, fnaf9_EFNAFGameState PreviousState);
	void On_Time_Changed(int Hour, int Minute);
	void ReceiveBeginPlay();
	void BindConditionUpdatedDelegate(const struct FScriptDelegate& OnConditionResultUpdated);
	void UnbindConditionUpdatedDelegate(const struct FScriptDelegate& OnConditionResultUpdated);
	void ExecuteUbergraph_TimeCheckComponent(int EntryPoint);
	void MoonManTimeHit__DelegateSignature();
	void OnTimeEnd__DelegateSignature();
	void OnTimeStart__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
