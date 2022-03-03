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
	 * BlueprintGeneratedClass ActivatableSpotLight.ActivatableSpotLight_C
	 * Size -> 0x0008 (FullSize[0x0248] - InheritedSize[0x0240])
	 */
	class AActivatableSpotLight_C : public ASpotLight
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void GetActivatableState(class AActor* Activator, ActivatableState_EActivatableState* CurrentState);
		void CanActivate(class AActor* Activator, bool* CanActivate, fnaf9_EConditionFailReason* CantReason);
		void CanDeactivate(bool* CanDeactivate);
		void OnActivatorDone(class AActor* Activator);
		void SetActivated();
		void DeactivateObject(class AActor* Deactivator);
		void SetDeactivated();
		void ReceiveBeginPlay();
		void ActivateObject(class AActor* Activator);
		void ExecuteUbergraph_ActivatableSpotLight(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
