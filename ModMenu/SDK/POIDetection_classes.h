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

// BlueprintGeneratedClass POIDetection.POIDetection_C
// 0x0098 (FullSize[0x0130] - InheritedSize[0x0098])
class UPOIDetection_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              POIDetectionRadius;                                        // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              POIHeatThreshold;                                          // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      PointOfInterestIndexKey;                                   // 0x00A8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      PointOfInterestRoomKey;                                    // 0x00D0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      PointOfInterestLocationKey;                                // 0x00F8(0x0028) (Edit, BlueprintVisible)
	TArray<struct FPOIResult>                          POIs;                                                      // 0x0120(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass POIDetection.POIDetection_C");
		return ptr;
	}



	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void Clear_Values();
	void ExecuteUbergraph_POIDetection(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
