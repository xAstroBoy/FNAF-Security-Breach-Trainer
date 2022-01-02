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

// BlueprintGeneratedClass BrokenFreddy_Trigger.BrokenFreddy_Trigger_C
// 0x0068 (FullSize[0x02E0] - InheritedSize[0x0278])
class ABrokenFreddy_Trigger_C : public APlayerTriggerWithConditionComps
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0278(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTimeCheckComponent_C*                       TimeCheckComponent;                                        // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Freddy[0x28];                                              // 0x0288(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      LineSkipper[0x28];                                         // 0x02B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FName                                       RehearsalSpaceMission;                                     // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BrokenFreddy_Trigger.BrokenFreddy_Trigger_C");
		return ptr;
	}



	void OnTriggered();
	void ExecuteUbergraph_BrokenFreddy_Trigger(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
