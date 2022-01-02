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

// BlueprintGeneratedClass BasicButton.BasicButton_C
// 0x0016 (FullSize[0x02EE] - InheritedSize[0x02D8])
class ABasicButton_C : public AButtonBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Button_Mesh;                                               // 0x02E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int                                                Color;                                                     // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Slanted;                                                   // 0x02EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SFXInitialized;                                            // 0x02ED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BasicButton.BasicButton_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ChangeColor(int ChangeColor);
	void OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController);
	void Set_Can_Use(bool CanUse);
	void ActivateObject(class AActor* Activator);
	void SetActivated();
	void ExecuteUbergraph_BasicButton(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
