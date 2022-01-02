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

// BlueprintGeneratedClass HeadAimingInterface.HeadAimingInterface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UHeadAimingInterface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass HeadAimingInterface.HeadAimingInterface_C");
		return ptr;
	}



	void GetHeadAimTargetActor(class AActor** AimActor);
	void GetHeadAimTargetLocation(struct FVector* HeadAimLocation);
	void SetHeadAimTarget(class AActor* TargetActor, const struct FVector& TargetLocation, bool OffsetByViewHeight);
	void SetHeadAimEnabled(bool enable);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
