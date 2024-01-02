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
	 * BlueprintGeneratedClass StaffbotBPInterface.StaffbotBPInterface_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UStaffbotBPInterface_C : public UInterface
	{
	public:
		void CanPerformEvent(bool Off);
		void SecurityTurnEvent(float Time);
		void FazerblastDestroy_Event();
		void AlertEvent(bool isAlerting);
		void PlayerSpendsPartyPass_Event();
		void PlayerHasPartyPass_Event(bool HasPartyPass);
		void isStunnedEvent(bool IsStunned);
		void R_IK_Arm_Target_Event(const struct FVector& Target);
		void L_IK_Arm_Target_Event(const struct FVector& Target);
		void R_IK_Arm_Event(bool IsOn);
		void L_IK_Arm_Event(bool IsON);
		void AimAtPlayerEvent(bool AimAtPlayer);
		void TaskEvent(bool DoTask, class AStaffbotTaskPlacement_C* TargetTask);
		void PerformEvent();
		void SellEvent();
		void JumpscareEvent(bool CanJumpscare);
		void WarningEvent(bool IsWarning, int32_t WarningCount);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
