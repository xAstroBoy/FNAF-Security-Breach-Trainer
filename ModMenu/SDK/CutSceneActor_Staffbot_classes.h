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

// BlueprintGeneratedClass CutSceneActor_Staffbot.CutSceneActor_Staffbot_C
// 0x0012 (FullSize[0x0280] - InheritedSize[0x026E])
class ACutSceneActor_Staffbot_C : public ACutSceneActor_Base_C
{
public:
	unsigned char                                      UnknownData_OOQZ[0x2];                                     // 0x026E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaffbot_ABP_Cutscene_C*                    StaffbotABP;                                               // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass CutSceneActor_Staffbot.CutSceneActor_Staffbot_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_CutSceneActor_Staffbot(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif