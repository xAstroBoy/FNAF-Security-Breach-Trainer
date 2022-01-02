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

// BlueprintGeneratedClass PlayerControlledStaffBot.PlayerControlledStaffBot_C
// 0x0034 (FullSize[0x0504] - InheritedSize[0x04D0])
class APlayerControlledStaffBot_C : public AFNAFBasePlayerCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                           Capsule;                                                   // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ULevelStreamViewpoint*                       LevelStreamViewpoint;                                      // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPlayerInteractComponent_C*                  PlayerInteractComponent;                                   // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       PreviousPawn;                                              // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     StartLocation;                                             // 0x04F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass PlayerControlledStaffBot.PlayerControlledStaffBot_C");
		return ptr;
	}



	void InpActEvt_Interact_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Interact_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceivePossessed(class AController* NewController);
	void Release_Player_Control();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_PlayerControlledStaffBot(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif