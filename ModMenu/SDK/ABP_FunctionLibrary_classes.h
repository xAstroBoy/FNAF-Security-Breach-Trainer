#pragma once

/**
 * Name: FNAFSB
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass ABP_FunctionLibrary.ABP_FunctionLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UABP_FunctionLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void CheckifOnscreen(class UAnimInstance* TargetAnimInstance, float Tolerance, bool isJumpscaring, bool Override, class UObject* __WorldContext, bool* isOnScreen1);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
