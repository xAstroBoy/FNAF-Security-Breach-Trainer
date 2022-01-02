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

// BlueprintGeneratedClass StaffbotBPInterface.StaffbotBPInterface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStaffbotBPInterface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass StaffbotBPInterface.StaffbotBPInterface_C");
		return ptr;
	}



	void CanPerformEvent(bool Off);
	void SecurityTurnEvent(float Time);
	void FazerblastDestroy_Event();
	void AlertEvent(bool IsAlerting);
	void PlayerSpendsPartyPass_Event();
	void PlayerHasPartyPass_Event(bool HasPartyPass);
	void isStunnedEvent(bool IsStunned);
	void R_IK_Arm_Target_Event(const struct FVector& Target);
	void L_IK_Arm_Target_Event(const struct FVector& Target);
	void R_IK_Arm_Event(bool Is_ON);
	void L_IK_Arm_Event(bool IsON);
	void AimAtPlayerEvent(bool AimAtPlayer);
	void TaskEvent(bool DoTask, class AStaffbotTaskPlacement_C* TargetTask);
	void PerformEvent();
	void SellEvent();
	void JumpscareEvent(bool canJumpscare);
	void WarningEvent(bool IsWarning, int WarningCount);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
