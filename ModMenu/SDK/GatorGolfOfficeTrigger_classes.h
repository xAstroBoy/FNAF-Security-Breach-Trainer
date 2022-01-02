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

// BlueprintGeneratedClass GatorGolfOfficeTrigger.GatorGolfOfficeTrigger_C
// 0x0068 (FullSize[0x02E0] - InheritedSize[0x0278])
class AGatorGolfOfficeTrigger_C : public APlayerTriggerWithConditionComps
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0278(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      LineSkipper[0x28];                                         // 0x0280(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      Doors[0x10];                                               // 0x02A8(0x0010) UNKNOWN PROPERTY: ArrayProperty
	unsigned char                                      SecurityBadgeHolder[0x28];                                 // 0x02B8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GatorGolfOfficeTrigger.GatorGolfOfficeTrigger_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void OnTriggered();
	void On_Badge_Collected();
	void StartAlarm();
	void ExecuteUbergraph_GatorGolfOfficeTrigger(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
