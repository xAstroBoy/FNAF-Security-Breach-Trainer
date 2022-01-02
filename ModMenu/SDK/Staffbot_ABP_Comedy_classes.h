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

// AnimBlueprintGeneratedClass Staffbot_ABP_Comedy.Staffbot_ABP_Comedy_C
// 0x0008 (FullSize[0x2ED8] - InheritedSize[0x2ED0])
class UStaffbot_ABP_Comedy_C : public UStaffbot_ABP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x2ED0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass Staffbot_ABP_Comedy.Staffbot_ABP_Comedy_C");
		return ptr;
	}



	void BlueprintBeginPlay();
	void ExecuteUbergraph_Staffbot_ABP_Comedy(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
