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
	 * BlueprintGeneratedClass FazerBlast_CaptureFlag.FazerBlast_CaptureFlag_C
	 * Size -> 0x0030 (FullSize[0x00D8] - InheritedSize[0x00A8])
	 */
	class UFazerBlast_CaptureFlag_C : public UBTTask_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FBlackboardKeySelector                              FlagToCapture;                                           // 0x00B0(0x0028) Edit, BlueprintVisible

	public:
		void Set(class AAIController* OwnerController, class APawn* ControlledPawn);
		void OnNotifyEnd_A5776C054CA2FE15A95E72ACB4658B88(const class FName& NotifyName);
		void OnNotifyBegin_A5776C054CA2FE15A95E72ACB4658B88(const class FName& NotifyName);
		void OnInterrupted_A5776C054CA2FE15A95E72ACB4658B88(const class FName& NotifyName);
		void OnBlendOut_A5776C054CA2FE15A95E72ACB4658B88(const class FName& NotifyName);
		void OnCompleted_A5776C054CA2FE15A95E72ACB4658B88(const class FName& NotifyName);
		void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ExecuteUbergraph_FazerBlast_CaptureFlag(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
