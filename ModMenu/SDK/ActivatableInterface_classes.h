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

// BlueprintGeneratedClass ActivatableInterface.ActivatableInterface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UActivatableInterface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass ActivatableInterface.ActivatableInterface_C");
		return ptr;
	}



	void CanDeactivate(bool* CanDeactivate);
	void SetDeactivated();
	void DeactivateObject(class AActor* Deactivator);
	void SetActivated();
	void OnActivatorDone(class AActor* Activator);
	void CanActivate(class AActor* Activator, bool* CanActivate, fnaf9_EConditionFailReason* CantReason);
	void GetActivatableState(class AActor* Activator, TEnumAsByte<ActivatableState_EActivatableState>* CurrentState);
	void ActivateObject(class AActor* Activator);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
