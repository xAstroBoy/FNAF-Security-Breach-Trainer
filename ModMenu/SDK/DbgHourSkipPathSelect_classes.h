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

// WidgetBlueprintGeneratedClass DbgHourSkipPathSelect.DbgHourSkipPathSelect_C
// 0x0038 (FullSize[0x0268] - InheritedSize[0x0230])
class UDbgHourSkipPathSelect_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                     Button_2;                                                  // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_3;                                                  // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnPathSelected;                                            // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FDbgSkipOption>                      SkipInfo;                                                  // 0x0258(0x0010) (Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DbgHourSkipPathSelect.DbgHourSkipPathSelect_C");
		return ptr;
	}



	void GetSkipRoute(int Index, TEnumAsByte<DbgPlayerPaths_EDbgPlayerPaths>* SkipRoute);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_PrizeCounter_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_LoadingDock_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_DbgHourSkipPathSelect(int EntryPoint);
	void OnPathSelected__DelegateSignature(TEnumAsByte<DbgPlayerPaths_EDbgPlayerPaths> NewParam);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
