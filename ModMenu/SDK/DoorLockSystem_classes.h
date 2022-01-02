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

// BlueprintGeneratedClass DoorLockSystem.DoorLockSystem_C
// 0x004F (FullSize[0x02B8] - InheritedSize[0x0269])
class ADoorLockSystem_C : public AActivatableBase_C
{
public:
	unsigned char                                      UnknownData_U3UU[0x7];                                     // 0x0269(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                         Billboard;                                                 // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Door[0x28];                                                // 0x0280(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FTimerHandle                                UnlockTimer;                                               // 0x02A8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                              DoorLockTime;                                              // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AmountToDrain;                                             // 0x02B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass DoorLockSystem.DoorLockSystem_C");
		return ptr;
	}



	void GetPowerDrainRate(float* DrainRate);
	void GetRemainingLockedTime(float* RemainingTime);
	void CanActivate(class AActor* Activator, bool* CanActivate, fnaf9_EConditionFailReason* CantReason);
	void ActivateObject(class AActor* Activator);
	void On_Unlock_Timer_Up();
	void PerformPowerTasks(class ASecurityOfficeManager_C* OfficeManager);
	void ExecuteUbergraph_DoorLockSystem(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
