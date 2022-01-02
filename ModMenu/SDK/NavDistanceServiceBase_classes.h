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

// BlueprintGeneratedClass NavDistanceServiceBase.NavDistanceServiceBase_C
// 0x0028 (FullSize[0x00C0] - InheritedSize[0x0098])
class UNavDistanceServiceBase_C : public UBTService_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      NavDistanceKey;                                            // 0x0098(0x0028) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass NavDistanceServiceBase.NavDistanceServiceBase_C");
		return ptr;
	}



	void NavDistance(class AActor* AIPawn, class APawn* OtherPawn, float* OutDistance);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
