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

// BlueprintGeneratedClass RoxyLoadingDockTrigger.RoxyLoadingDockTrigger_C
// 0x0010 (FullSize[0x0288] - InheritedSize[0x0278])
class ARoxyLoadingDockTrigger_C : public APlayerTriggerWithConditionComps
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0278(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AAkAmbientSound*                             VOSource;                                                  // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass RoxyLoadingDockTrigger.RoxyLoadingDockTrigger_C");
		return ptr;
	}



	void OnTriggered();
	void ExecuteUbergraph_RoxyLoadingDockTrigger(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif