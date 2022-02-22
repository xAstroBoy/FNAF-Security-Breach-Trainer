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
	 * BlueprintGeneratedClass ShatteredMonty_PlayMontage.ShatteredMonty_PlayMontage_C
	 * Size -> 0x0009 (FullSize[0x00B1] - InheritedSize[0x00A8])
	 */
	class UShatteredMonty_PlayMontage_C : public UBTTask_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		Engine_EMovementMode                                       OldMoveMode;                                             // 0x00B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnNotifyEnd_346277884B529EC47D005089EEA3225A(const class FName& NotifyName);
		void OnNotifyBegin_346277884B529EC47D005089EEA3225A(const class FName& NotifyName);
		void OnInterrupted_346277884B529EC47D005089EEA3225A(const class FName& NotifyName);
		void OnBlendOut_346277884B529EC47D005089EEA3225A(const class FName& NotifyName);
		void OnCompleted_346277884B529EC47D005089EEA3225A(const class FName& NotifyName);
		void OnNotifyEnd_6A1833664A5861686F7AB89310EA782D(const class FName& NotifyName);
		void OnNotifyBegin_6A1833664A5861686F7AB89310EA782D(const class FName& NotifyName);
		void OnInterrupted_6A1833664A5861686F7AB89310EA782D(const class FName& NotifyName);
		void OnBlendOut_6A1833664A5861686F7AB89310EA782D(const class FName& NotifyName);
		void OnCompleted_6A1833664A5861686F7AB89310EA782D(const class FName& NotifyName);
		void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ExecuteUbergraph_ShatteredMonty_PlayMontage(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
