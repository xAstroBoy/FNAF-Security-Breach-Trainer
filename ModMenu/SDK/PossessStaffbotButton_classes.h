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

// BlueprintGeneratedClass PossessStaffbotButton.PossessStaffbotButton_C
// 0x0012 (FullSize[0x0300] - InheritedSize[0x02EE])
class APossessStaffbotButton_C : public ABasicButton_C
{
public:
	unsigned char                                      UnknownData_7X1O[0x2];                                     // 0x02EE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class APlayerControlledStaffBot_C*                 StaffBot;                                                  // 0x02F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass PossessStaffbotButton.PossessStaffbotButton_C");
		return ptr;
	}



	void OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController);
	void ExecuteUbergraph_PossessStaffbotButton(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
