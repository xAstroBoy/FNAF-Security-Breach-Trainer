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

// BlueprintGeneratedClass RoxyAIController.RoxyAIController_C
// 0x0008 (FullSize[0x03E0] - InheritedSize[0x03D8])
class ARoxyAIController_C : public AAISeekerController_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass RoxyAIController.RoxyAIController_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_RoxyAIController(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
