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
	 * BlueprintGeneratedClass EnableFreddyCallTrigger.EnableFreddyCallTrigger_C
	 * Size -> 0x0031 (FullSize[0x02A1] - InheritedSize[0x0270])
	 */
	class AEnableFreddyCallTrigger_C : public APlayerTrigger
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       CanCallFreddy;                                           // 0x0278(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       ShouldUpdateEnterExitFreddy;                             // 0x0279(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       CanEnterExitFreddy;                                      // 0x027A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5R2Q[0x5];                                   // 0x027B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTimeCheckValues_Struct>                     InvalidTimes;                                            // 0x0280(0x0010) Edit, BlueprintVisible
		TArray<class UTimeCheckComponent_C*>                       InvalidTimesAsComponents;                                // 0x0290(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       IsDuringInvalidTime;                                     // 0x02A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnTriggered();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_EnableFreddyCallTrigger(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
