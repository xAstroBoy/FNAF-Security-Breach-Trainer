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

// BlueprintGeneratedClass EnterMontyGolfTrigger.EnterMontyGolfTrigger_C
// 0x0058 (FullSize[0x02D0] - InheritedSize[0x0278])
class AEnterMontyGolfTrigger_C : public APlayerTriggerWithConditionComps
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0278(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      LineSkipper[0x28];                                         // 0x0280(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      Manager[0x28];                                             // 0x02A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass EnterMontyGolfTrigger.EnterMontyGolfTrigger_C");
		return ptr;
	}



	void OnTriggered();
	void ExecuteUbergraph_EnterMontyGolfTrigger(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
