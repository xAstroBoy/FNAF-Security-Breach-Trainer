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

// BlueprintGeneratedClass SetupSplineMovement.SetupSplineMovement_C
// 0x004C (FullSize[0x00FC] - InheritedSize[0x00B0])
class USetupSplineMovement_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FName                                       ChaseStateVar;                                             // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       SplineManagerVar;                                          // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      SplineManager[0x28];                                       // 0x00C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FName                                       SplineMovementSpeedVar;                                    // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MovementSpeed;                                             // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass SetupSplineMovement.SetupSplineMovement_C");
		return ptr;
	}



	void Setup_Spline_Movement(class APawn* Pawn);
	void ExecuteUbergraph_SetupSplineMovement(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
