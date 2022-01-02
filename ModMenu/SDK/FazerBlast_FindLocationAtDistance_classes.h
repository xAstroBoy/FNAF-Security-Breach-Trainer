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

// BlueprintGeneratedClass FazerBlast_FindLocationAtDistance.FazerBlast_FindLocationAtDistance_C
// 0x00CC (FullSize[0x0174] - InheritedSize[0x00A8])
class UFazerBlast_FindLocationAtDistance_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      BB_TargetLocation;                                         // 0x00B0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      BB_VoiceTrigger;                                           // 0x00D8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      BB_LastKnownLocation;                                      // 0x0100(0x0028) (Edit, BlueprintVisible)
	float                                              SamplePointRadius;                                         // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SampleDistance;                                            // 0x012C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Direction;                                                 // 0x0130(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TraceLimit;                                                // 0x013C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FleeOrFollow;                                              // 0x0140(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Debug;                                                     // 0x0141(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_G04F[0x2];                                     // 0x0142(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DebugTime;                                                 // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxTiltZ;                                                  // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SurfacePadding;                                            // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Weight_Follow_Length;                                      // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Weight_Follow_DotProduct;                                  // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Weight_Follow_DotProduct_ActorForward;                     // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FleeRadius;                                                // 0x015C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Weight_Flee_Length;                                        // 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Weight_Flee_DotProduct;                                    // 0x0164(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Weight_Flee_DotProduct_ActorForward;                       // 0x0168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AverageLengths;                                            // 0x016C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FleeHeight;                                                // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass FazerBlast_FindLocationAtDistance.FazerBlast_FindLocationAtDistance_C");
		return ptr;
	}



	void SetBlackBoardKeys(const struct FVector& TargetLocation, const struct FVector& PlayerLocation);
	struct FVector GetBestLocation(class APawn** ControlledPawn, TArray<class AActor*>* ActorsToIgnore, struct FVector* PlayerLocation);
	void NavRays_Score(class APawn* ControlledPawn, const struct FVector& InDirection, const struct FVector& InStart, TArray<struct FVector>* NavRay_Ends, struct FVector* ReturnBestLocation);
	void NavRays_Correct(const struct FVector& InDirection, const struct FVector& InStart, TArray<struct FVector>* InNavRay_Ends, TArray<class AActor*> ActorsToIgnore, struct FVector* OutDirection, struct FVector* OutStart, TArray<struct FVector>* OutNavRay_Ends);
	void NavRays_Cast(class APawn* ControlledPawn, TArray<class AActor*>* ActorsToIgnore, struct FVector* Direction, struct FVector* Start, TArray<struct FVector>* NavRay_Ends);
	void Process(class APawn** ControlledPawn);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_FazerBlast_FindLocationAtDistance(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
