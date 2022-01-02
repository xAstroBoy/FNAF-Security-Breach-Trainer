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

// BlueprintGeneratedClass BallCannonOffice.BallCannonOffice_C
// 0x0014 (FullSize[0x033C] - InheritedSize[0x0328])
class ABallCannonOffice_C : public ABallCannon_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ASecurityOfficeManager_C*                    OfficeGame;                                                // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PowerDrainPerShot;                                         // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BallCannonOffice.BallCannonOffice_C");
		return ptr;
	}



	void Shot_Fired();
	void ExecuteUbergraph_BallCannonOffice(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
