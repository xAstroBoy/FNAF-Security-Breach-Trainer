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
	 * BlueprintGeneratedClass Roxy.Roxy_C
	 * Size -> 0x001F (FullSize[0x0838] - InheritedSize[0x0819])
	 */
	class ARoxy_C : public AAISeeker_C
	{
	public:
		unsigned char                                              UnknownData_5ZF0[0x7];                                   // 0x0819(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0820(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class UAkAudioEvent*>                               RoxyHowl;                                                // 0x0828(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void ReceiveBeginPlay();
		void RandomHowling(bool enable);
		void ExecuteUbergraph_Roxy(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
