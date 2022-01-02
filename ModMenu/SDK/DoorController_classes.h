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

// BlueprintGeneratedClass DoorController.DoorController_C
// 0x0098 (FullSize[0x0301] - InheritedSize[0x0269])
class ADoorController_C : public AActivatableBase_C
{
public:
	unsigned char                                      UnknownData_J02Y[0x7];                                     // 0x0269(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               Box;                                                       // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Door[0x28];                                                // 0x0280(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	bool                                               DoorOpened;                                                // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Playing;                                                   // 0x02A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YJTL[0x6];                                     // 0x02AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      PathBlockedByDoorTrigger[0x28];                            // 0x02AA(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      DoorActor[0x28];                                           // 0x02D8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	bool                                               Should_Be_Open_On_End;                                     // 0x0300(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass DoorController.DoorController_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void SetActivated();
	void On_Activate();
	void OnGameStart();
	void OnGameEnd();
	void ExecuteUbergraph_DoorController(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
