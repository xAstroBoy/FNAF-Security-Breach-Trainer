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

// BlueprintGeneratedClass MultiInputActivator.MultiInputActivator_C
// 0x0038 (FullSize[0x02C8] - InheritedSize[0x0290])
class AMultiInputActivator_C : public AActivatorBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      Activators[0x10];                                          // 0x0298(0x0010) UNKNOWN PROPERTY: ArrayProperty
	struct FScriptMulticastDelegate                    OnCantActivate;                                            // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnCanActivate;                                             // 0x02B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass MultiInputActivator.MultiInputActivator_C");
		return ptr;
	}



	void GetNumberActivated(int* NumberActivated);
	void CheckAllActivatorsOn(bool* AllOn, int* Count);
	void ReceiveBeginPlay();
	void ActivateObject(class AActor* Activator);
	void DeactivateObject(class AActor* Deactivator);
	void Deactivate_Inputs();
	void ExecuteUbergraph_MultiInputActivator(int EntryPoint);
	void OnCanActivate__DelegateSignature(int Count, class AActor* Activator);
	void OnCantActivate__DelegateSignature(int Count, class AActor* Activator);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
