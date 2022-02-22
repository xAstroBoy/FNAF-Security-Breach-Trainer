#pragma once

/**
 * Name: FNAF Security Breach
 * Version: 2
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
	 * BlueprintGeneratedClass ActivatableInterface.ActivatableInterface_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UActivatableInterface_C : public UInterface
	{
	public:
		void CanDeactivate(bool* CanDeactivate);
		void SetDeactivated();
		void DeactivateObject(class AActor* Deactivator);
		void SetActivated();
		void OnActivatorDone(class AActor* Activator);
		void CanActivate(class AActor* Activator, bool* CanActivate, fnaf9_EConditionFailReason* CantReason);
		void GetActivatableState(class AActor* Activator, ActivatableState_EActivatableState* CurrentState);
		void ActivateObject(class AActor* Activator);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
