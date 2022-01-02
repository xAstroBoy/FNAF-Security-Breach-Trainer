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

// BlueprintGeneratedClass SplineFollowerUtil.SplineFollowerUtil_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USplineFollowerUtil_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass SplineFollowerUtil.SplineFollowerUtil_C");
		return ptr;
	}



	float STATIC_SplineDirectionToMult(TEnumAsByte<SplineFollowDirection_ESplineFollowDirection> Direction, class UObject* __WorldContext);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
