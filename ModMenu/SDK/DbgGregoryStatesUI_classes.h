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

// WidgetBlueprintGeneratedClass DbgGregoryStatesUI.DbgGregoryStatesUI_C
// 0x0040 (FullSize[0x0270] - InheritedSize[0x0230])
class UDbgGregoryStatesUI_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCheckBox*                                   ChicaBeak;                                                 // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                                   FreddyCall;                                                // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                                   FreddyEnterExit;                                           // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                                   Gregory_Sight;                                             // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                                   GregoryCrouch;                                             // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                                   MontyClaws;                                                // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                                   RoxyEyes;                                                  // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DbgGregoryStatesUI.DbgGregoryStatesUI_C");
		return ptr;
	}



	SlateCore_ECheckBoxState Get_GregoryCrouch_CheckedState_1();
	SlateCore_ECheckBoxState Get_FreddyEnterExit_CheckedState_1();
	SlateCore_ECheckBoxState Get_FreddyCall_CheckedState_1();
	SlateCore_ECheckBoxState Get_RoxyEyes_CheckedState_1();
	SlateCore_ECheckBoxState Get_ChicaBeak_CheckedState_1();
	SlateCore_ECheckBoxState Get_MontyClaws_CheckedState_1();
	void BndEvt__ChicaBeak_K2Node_ComponentBoundEvent_35_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__RoxyEyes_K2Node_ComponentBoundEvent_36_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__ClockRunning_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__FreddyCall_K2Node_ComponentBoundEvent_47_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__FreddyEnterExit_K2Node_ComponentBoundEvent_48_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__GregoryCrouch_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__Gregory_Sight_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void ExecuteUbergraph_DbgGregoryStatesUI(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
