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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass C_Elevator_Audio.C_Elevator_Audio_C
	 * Size -> 0x004C (FullSize[0x00FC] - InheritedSize[0x00B0])
	 */
	class UC_Elevator_Audio_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<struct FElevatorAudioOption>                        AudioLines;                                              // 0x00B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              SaveBaseName;                                            // 0x00C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             PlayAudioEvent;                                          // 0x00D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      TimeInitated;                                            // 0x00E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxWaitTime;                                             // 0x00EC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AudioRequested;                                          // 0x00F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9QS7[0x3];                                   // 0x00F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RandomWaitMin;                                           // 0x00F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RandomWaitMax;                                           // 0x00F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetUnplayedAudio(TArray<struct FElevatorAudioOption>* AvailableLines);
		void GetAudioToPlay(struct FElevatorAudioOption* Output);
		void ReceiveTick(float DeltaSeconds);
		void PlayElevatorAudio();
		void BeginElevatorAudio();
		void ExecuteUbergraph_C_Elevator_Audio(int32_t EntryPoint);
		void PlayAudioEvent__DelegateSignature(TArray<struct FElevatorAudioData>* AudiotoPlay);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
