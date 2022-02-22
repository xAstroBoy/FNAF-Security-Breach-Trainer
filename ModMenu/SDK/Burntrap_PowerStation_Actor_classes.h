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
	 * BlueprintGeneratedClass Burntrap_PowerStation_Actor.Burntrap_PowerStation_Actor_C
	 * Size -> 0x000C (FullSize[0x0300] - InheritedSize[0x02F4])
	 */
	class ABurntrap_PowerStation_Actor_C : public APowerStation_Actor_C
	{
	public:
		unsigned char                                              UnknownData_I6KU[0x4];                                   // 0x02F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02F8(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void ReceiveBeginPlay();
		void ExecuteUbergraph_Burntrap_PowerStation_Actor(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
