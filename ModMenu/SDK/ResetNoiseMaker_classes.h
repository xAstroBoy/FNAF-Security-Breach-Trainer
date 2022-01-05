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
	 * BlueprintGeneratedClass ResetNoiseMaker.ResetNoiseMaker_C
	 * Size -> 0x0049 (FullSize[0x00F1] - InheritedSize[0x00A8])
	 */
	class UResetNoiseMaker_C : public UBTTask_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FBlackboardKeySelector                              BBNoiseMaker;                                            // 0x00B0(0x0028) Edit, BlueprintVisible
		class AAISeeker_C*                                         Pawn;                                                    // 0x00D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int                                                        Phase;                                                   // 0x00E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Pre_Anim_Setup;                                          // 0x00E4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DUQL[0x3];                                   // 0x00E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMoonman_Daycare_ABP_C*                              MoonManABP;                                              // 0x00E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WasForcedDown;                                           // 0x00F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnNotifyEnd_52DACB3D4C1E9C31CB369CA0ECF78BBC(const class FName& NotifyName);
		void OnNotifyBegin_52DACB3D4C1E9C31CB369CA0ECF78BBC(const class FName& NotifyName);
		void OnInterrupted_52DACB3D4C1E9C31CB369CA0ECF78BBC(const class FName& NotifyName);
		void OnBlendOut_52DACB3D4C1E9C31CB369CA0ECF78BBC(const class FName& NotifyName);
		void OnCompleted_52DACB3D4C1E9C31CB369CA0ECF78BBC(const class FName& NotifyName);
		void OnNotifyEnd_045391104E786D0782FC81B37147B034(const class FName& NotifyName);
		void OnNotifyBegin_045391104E786D0782FC81B37147B034(const class FName& NotifyName);
		void OnInterrupted_045391104E786D0782FC81B37147B034(const class FName& NotifyName);
		void OnBlendOut_045391104E786D0782FC81B37147B034(const class FName& NotifyName);
		void OnCompleted_045391104E786D0782FC81B37147B034(const class FName& NotifyName);
		void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ExecuteUbergraph_ResetNoiseMaker(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
