﻿#pragma once

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

// BlueprintGeneratedClass ViewInformationService.ViewInformationService_C
// 0x006F (FullSize[0x0110] - InheritedSize[0x00A1])
class UViewInformationService_C : public USightDetectionService_C
{
public:
	unsigned char                                      UnknownData_FY87[0x7];                                     // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class AActor*>                              VisibleInformationProviders;                               // 0x00B0(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      ClosestInformationProviderKey;                             // 0x00C0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      InformationProviderDistance;                               // 0x00E8(0x0028) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass ViewInformationService.ViewInformationService_C");
		return ptr;
	}



	void On_Sight_Changed(class AActor* UpdatedActor, bool bVisible);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_ViewInformationService(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif