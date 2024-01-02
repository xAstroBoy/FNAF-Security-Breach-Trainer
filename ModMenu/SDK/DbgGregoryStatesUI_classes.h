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
	 * WidgetBlueprintGeneratedClass DbgGregoryStatesUI.DbgGregoryStatesUI_C
	 * Size -> 0x0040 (FullSize[0x02A0] - InheritedSize[0x0260])
	 */
	class UDbgGregoryStatesUI_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCheckBoxUI_C*                                       CallFreddy_Checkbox;                                     // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBoxUI_C*                                       CanEnterExitFreddy_Checkbox;                             // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBoxUI_C*                                       ChicaBeak_Checkbox;                                      // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBoxUI_C*                                       GregoryCrouch_Checkbox;                                  // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBoxUI_C*                                       GregorySight_Checkbox;                                   // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBoxUI_C*                                       MontyClaws_Checkbox;                                     // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBoxUI_C*                                       RoxyEyes_Checkbox;                                       // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void UpdateCheckboxStates();
		void Construct();
		void BndEvt__DbgGregoryStatesUI_CallFreddy_Checkbox_K2Node_ComponentBoundEvent_0_CheckedStateChanged__DelegateSignature();
		void BndEvt__DbgGregoryStatesUI_CanEnterExitFreddy_Checkbox_K2Node_ComponentBoundEvent_2_CheckedStateChanged__DelegateSignature();
		void BndEvt__DbgGregoryStatesUI_MontyClaws_Checkbox_K2Node_ComponentBoundEvent_4_CheckedStateChanged__DelegateSignature();
		void BndEvt__DbgGregoryStatesUI_RoxyEyes_Checkbox_K2Node_ComponentBoundEvent_5_CheckedStateChanged__DelegateSignature();
		void BndEvt__DbgGregoryStatesUI_ChicaBeak_Checkbox_K2Node_ComponentBoundEvent_6_CheckedStateChanged__DelegateSignature();
		void BndEvt__DbgGregoryStatesUI_GregoryCrouch_Checkbox_K2Node_ComponentBoundEvent_7_CheckedStateChanged__DelegateSignature();
		void BndEvt__DbgGregoryStatesUI_GregorySight_Checkbox_K2Node_ComponentBoundEvent_8_CheckedStateChanged__DelegateSignature();
		void ExecuteUbergraph_DbgGregoryStatesUI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
