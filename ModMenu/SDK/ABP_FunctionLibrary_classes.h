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

// BlueprintGeneratedClass ABP_FunctionLibrary.ABP_FunctionLibrary_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UABP_FunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass ABP_FunctionLibrary.ABP_FunctionLibrary_C");
		return ptr;
	}



	void STATIC_Check_if_Onscreen(class UAnimInstance* TargetAnimInstance, float Tolerance, bool isJumpscaring, bool Override, class UObject* __WorldContext, bool* isOnScreen1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
