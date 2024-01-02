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
	 * BlueprintGeneratedClass MultiInputActivator.MultiInputActivator_C
	 * Size -> 0x0038 (FullSize[0x02C8] - InheritedSize[0x0290])
	 */
	class AMultiInputActivator_C : public AActivatorBase_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0290(0x0008) ZeroConstructor, Transient, DuplicateTransient
		unsigned char                                              Activators[0x10];                                        // 0x0298(0x0010) UNKNOWN PROPERTY: ArrayProperty
		class FScriptMulticastDelegate                             OnCantActivate;                                          // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnCanActivate;                                           // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void SetActivationStateOfAllActivators(EActivatableState NewParam);
		void CheckAllActivatorsOff(bool* AllOff, int32_t* Count);
		void GetNumberActivated(int32_t* NumberActivated);
		void CheckAllActivatorsOn(bool* AllOn, int32_t* Count);
		void ReceiveBeginPlay();
		void ActivateObject(class AActor* Activator);
		void DeactivateObject(class AActor* Deactivator);
		void DeactivateInputs();
		void ExecuteUbergraph_MultiInputActivator(int32_t EntryPoint);
		void OnCanActivate__DelegateSignature(int32_t Count, class AActor* Activator);
		void OnCantActivate__DelegateSignature(int32_t Count, class AActor* Activator);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
