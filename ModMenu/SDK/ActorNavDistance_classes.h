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

// BlueprintGeneratedClass ActorNavDistance.ActorNavDistance_C
// 0x0030 (FullSize[0x00F0] - InheritedSize[0x00C0])
class UActorNavDistance_C : public UNavDistanceServiceBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      Actor;                                                     // 0x00C8(0x0028) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass ActorNavDistance.ActorNavDistance_C");
		return ptr;
	}



	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void Update_Distance(class AActor* InputPin);
	void ExecuteUbergraph_ActorNavDistance(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
