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

// AnimBlueprintGeneratedClass Staffbot_ABP_Cleaner.Staffbot_ABP_Cleaner_C
// 0x0018 (FullSize[0x2EE8] - InheritedSize[0x2ED0])
class UStaffbot_ABP_Cleaner_C : public UStaffbot_ABP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x2ED0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FName                                       PlayerDistance;                                            // 0x2ED8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       PlayerVisible;                                             // 0x2EE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass Staffbot_ABP_Cleaner.Staffbot_ABP_Cleaner_C");
		return ptr;
	}



	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintBeginPlay();
	void isStunnedEvent(bool IsStunned);
	void WarningEvent(bool IsWarning, int WarningCount);
	void AlertEvent(bool IsAlerting);
	void ExecuteUbergraph_Staffbot_ABP_Cleaner(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
