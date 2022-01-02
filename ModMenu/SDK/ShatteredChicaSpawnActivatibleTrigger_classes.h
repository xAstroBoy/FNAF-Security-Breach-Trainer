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

// BlueprintGeneratedClass ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C
// 0x0010 (FullSize[0x0331] - InheritedSize[0x0321])
class AShatteredChicaSpawnActivatibleTrigger_C : public AShatteredChicaSpawnTrigger_C
{
public:
	unsigned char                                      UnknownData_S5FD[0x7];                                     // 0x0321(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               Activated;                                                 // 0x0330(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass ShatteredChicaSpawnActivatibleTrigger.ShatteredChicaSpawnActivatibleTrigger_C");
		return ptr;
	}



	void CanDeactivate(bool* CanDeactivate);
	void GetActivatableState(class AActor* Activator, TEnumAsByte<ActivatableState_EActivatableState>* CurrentState);
	void CanActivate(class AActor* Activator, bool* CanActivate, fnaf9_EConditionFailReason* CantReason);
	void OnActivatorDone(class AActor* Activator);
	void SetActivated();
	void SetDeactivated();
	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ActivateObject(class AActor* Activator);
	void OnTriggered();
	void DeactivateObject(class AActor* Deactivator);
	void ExecuteUbergraph_ShatteredChicaSpawnActivatibleTrigger(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
