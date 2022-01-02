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

// WidgetBlueprintGeneratedClass WI_Option_Language_DebugShortcut.WI_Option_Language_DebugShortcut_C
// 0x0010 (FullSize[0x0240] - InheritedSize[0x0230])
class UWI_Option_Language_DebugShortcut_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  TextBlock_Shortcut;                                        // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WI_Option_Language_DebugShortcut.WI_Option_Language_DebugShortcut_C");
		return ptr;
	}



	void SetupShortcutText();
	void PreConstruct(bool IsDesignTime);
	void OnInitialized();
	void InputDeviceChanged();
	void ExecuteUbergraph_WI_Option_Language_DebugShortcut(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
