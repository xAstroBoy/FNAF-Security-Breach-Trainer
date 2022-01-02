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

// BlueprintGeneratedClass SplineFollowerInterface.SplineFollowerInterface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USplineFollowerInterface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass SplineFollowerInterface.SplineFollowerInterface_C");
		return ptr;
	}



	void SetSplineFollowerContext(const struct FSplineFollowerContext& SplineFollowerContext);
	void GetSplineFollowerContext(struct FSplineFollowerContext* SplineFollowerContext);
	void GetPossibleSplinePaths(TArray<class ASplinePathway_C*>* PossiblePaths);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
