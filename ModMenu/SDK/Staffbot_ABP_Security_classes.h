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

// AnimBlueprintGeneratedClass Staffbot_ABP_Security.Staffbot_ABP_Security_C
// 0x0008 (FullSize[0x2ED8] - InheritedSize[0x2ED0])
class UStaffbot_ABP_Security_C : public UStaffbot_ABP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x2ED0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass Staffbot_ABP_Security.Staffbot_ABP_Security_C");
		return ptr;
	}



	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintBeginPlay();
	void AimHead_Event(bool AimHead);
	void CanJumpscareEvent();
	void JumpscareEvent(bool canJumpscare);
	void ExecuteUbergraph_Staffbot_ABP_Security(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
