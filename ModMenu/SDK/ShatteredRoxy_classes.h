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
	 * BlueprintGeneratedClass ShatteredRoxy.ShatteredRoxy_C
	 * Size -> 0x000F (FullSize[0x0800] - InheritedSize[0x07F1])
	 */
	class AShatteredRoxy_C : public AAISeeker_C
	{
	public:
		unsigned char                                              UnknownData_BIYB[0x7];                                   // 0x07F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x07F8(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void ReceiveBeginPlay();
		void Handle_Sight(class AActor* Updated_Actor, bool Visible);
		void Stop_Investigating_Sound();
		void OnListenStarted();
		void ExecuteUbergraph_ShatteredRoxy(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
