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
	 * BlueprintGeneratedClass Play_Sound.Play_Sound_C
	 * Size -> 0x0014 (FullSize[0x0130] - InheritedSize[0x011C])
	 */
	class UPlay_Sound_C : public UPlayVO_C
	{
	public:
		unsigned char                                              UnknownData_RQPZ[0x4];                                   // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0120(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAkAudioEvent*                                       Sound;                                                   // 0x0128(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveExecute(class AActor* OwnerActor);
		void ExecuteUbergraph_Play_Sound(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
