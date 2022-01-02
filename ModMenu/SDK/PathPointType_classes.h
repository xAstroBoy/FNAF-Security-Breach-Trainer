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

// BlueprintGeneratedClass PathPointType.PathPointType_C
// 0x0051 (FullSize[0x00F1] - InheritedSize[0x00A0])
class UPathPointType_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      PatrolPathKey;                                             // 0x00A0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      PatrolPointIndexKey;                                       // 0x00C8(0x0028) (Edit, BlueprintVisible)
	TEnumAsByte<PatrolPointType_EPatrolPointType>      PointType;                                                 // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass PathPointType.PathPointType_C");
		return ptr;
	}



	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
