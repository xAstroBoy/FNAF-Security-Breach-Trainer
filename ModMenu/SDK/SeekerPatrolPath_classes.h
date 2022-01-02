#pragma once

// Name: FNAF Security Breach, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SeekerPatrolPath.SeekerPatrolPath_C
// 0x0014 (FullSize[0x026C] - InheritedSize[0x0258])
class ASeekerPatrolPath_C : public APatrolPath_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0258(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	fnaf9_EFNAFAISpawnType                             PathType;                                                  // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_YT0Z[0x3];                                     // 0x0261(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       PathName;                                                  // 0x0264(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass SeekerPatrolPath.SeekerPatrolPath_C");
		return ptr;
	}



	struct FName GetPathName();
	fnaf9_EFNAFAISpawnType GetSpawnType();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_SeekerPatrolPath(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
