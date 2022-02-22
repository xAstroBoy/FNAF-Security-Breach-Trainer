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
	 * BlueprintGeneratedClass SeekerPatrolPath.SeekerPatrolPath_C
	 * Size -> 0x0014 (FullSize[0x026C] - InheritedSize[0x0258])
	 */
	class ASeekerPatrolPath_C : public APatrolPath_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0258(0x0008) ZeroConstructor, Transient, DuplicateTransient
		fnaf9_EFNAFAISpawnType                                     PathType;                                                // 0x0260(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JILO[0x3];                                   // 0x0261(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                PathName;                                                // 0x0264(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class FName GetPathName();
		fnaf9_EFNAFAISpawnType GetSpawnType();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_SeekerPatrolPath(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
