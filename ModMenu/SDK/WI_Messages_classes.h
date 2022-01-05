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
	 * WidgetBlueprintGeneratedClass WI_Messages.WI_Messages_C
	 * Size -> 0x00F8 (FullSize[0x0328] - InheritedSize[0x0230])
	 */
	class UWI_Messages_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVerticalBox*                                        HeaderBox;                                               // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          ScrollBox_400;                                           // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TMap<class FName, struct FFNAFMessageTableStruct>          Read;                                                    // 0x0248(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class FName, struct FFNAFMessageTableStruct>          New;                                                     // 0x0298(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       HasUnread;                                               // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RDXZ[0x3];                                   // 0x02E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           Current_input;                                           // 0x02EC(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           axisInput;                                               // 0x02F4(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           CurentIndex;                                             // 0x02FC(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_F1EN[0x4];                                   // 0x0304(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UWI_GenericHeader_C*>                         SelectList;                                              // 0x0308(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		int                                                        CurrentIndex;                                            // 0x0318(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FGSM[0x4];                                   // 0x031C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWidget*                                             CurrentSelection;                                        // 0x0320(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetCurrentMessageList();
		void Move_Menu(const struct FVector2D& InVec);
		void CheckUnread(bool* unread);
		void ParseReadMessage(const class FName& Name, const struct FFNAFMessageTableStruct& Data);
		void Check_Read();
		void PopulateList();
		void MarkAsRead(const class FName& Name);
		void ParseNewMessage(const class FName& Name, const struct FFNAFMessageTableStruct& Data);
		void InuputNext();
		void InputPrevious();
		void InputPrimary();
		void InputSecondary();
		void InputTertiary();
		void InputLookAxis(const struct FVector2D& Axis);
		void InputOpen();
		void InputZoom(const struct FVector2D& Axis);
		void InputCycle(int Increment);
		void InputDpadDirection(const struct FVector2D& Direction);
		void Reset();
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void BindAllEvents();
		void ObtainMessage(const class FName& MessageName, const struct FFNAFMessageTableStruct& MessageInfo);
		void InputClose();
		void InputOptionAxis(const struct FVector2D& Axis);
		void InputAccept();
		void InputMoveAxis(const struct FVector2D& Axis);
		void InputBack();
		void ExecuteUbergraph_WI_Messages(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
