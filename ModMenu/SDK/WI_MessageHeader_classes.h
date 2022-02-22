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
	 * WidgetBlueprintGeneratedClass WI_MessageHeader.WI_MessageHeader_C
	 * Size -> 0x0038 (FullSize[0x0268] - InheritedSize[0x0230])
	 */
	class UWI_MessageHeader_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UExpandableArea*                                     ExpandableArea_787;                                      // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWI_GenericHeader_C*                                 Header;                                                  // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        MessageBox;                                              // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          MessageDetails;                                          // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UWidget*>                                     Children;                                                // 0x0258(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash

	public:
		void RemoveFocus();
		UMG_ESlateVisibility Get_MessageBox_Visibility_1();
		void InuputNext();
		void InputPrevious();
		void InputClose();
		void InputBack();
		void InputPrimary();
		void InputSecondary();
		void InputTertiary();
		void InputMoveAxis(const struct FVector2D& Axis);
		void InputLookAxis(const struct FVector2D& Axis);
		void InputOptionAxis(const struct FVector2D& Axis);
		void InputOpen();
		void InputZoom(const struct FVector2D& Axis);
		void InputCycle(int32_t Increment);
		void InputDpadDirection(const struct FVector2D& Direction);
		void Reset();
		void InputAccept();
		void BndEvt__ExpandableArea_786_K2Node_ComponentBoundEvent_1_OnExpandableAreaExpansionChanged__DelegateSignature(class UExpandableArea* Area, bool bIsExpanded);
		void ExecuteUbergraph_WI_MessageHeader(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
