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

// BlueprintGeneratedClass BasePatrolCharacter.BasePatrolCharacter_C
// 0x0014 (FullSize[0x04EC] - InheritedSize[0x04D8])
class ABasePatrolCharacter_C : public ADebuggableAICharacter_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class APatrolPath_C*                               PatrolPoints;                                              // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StartingPoint;                                             // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BasePatrolCharacter.BasePatrolCharacter_C");
		return ptr;
	}



	int GetCurrentPatrolPointIndex();
	void GetPatrolPath();
	void SetCurrentPatrolPointIndex(int PatrolPointIndex);
	void SetPatrolPath();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BasePatrolCharacter(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
