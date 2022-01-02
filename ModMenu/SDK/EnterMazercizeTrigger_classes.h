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

// BlueprintGeneratedClass EnterMazercizeTrigger.EnterMazercizeTrigger_C
// 0x0030 (FullSize[0x02A8] - InheritedSize[0x0278])
class AEnterMazercizeTrigger_C : public APlayerTriggerWithConditionComps
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0278(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      LineSkipper[0x28];                                         // 0x0280(0x0028) UNKNOWN PROPERTY: SoftObjectProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass EnterMazercizeTrigger.EnterMazercizeTrigger_C");
		return ptr;
	}



	void OnTriggered();
	void ExecuteUbergraph_EnterMazercizeTrigger(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
