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

// BlueprintGeneratedClass UpdateMissionOnActivated.UpdateMissionOnActivated_C
// 0x0008 (FullSize[0x00C8] - InheritedSize[0x00C0])
class UUpdateMissionOnActivated_C : public UUpdateMissionComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass UpdateMissionOnActivated.UpdateMissionOnActivated_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void On_Activatable_Activated();
	void ExecuteUbergraph_UpdateMissionOnActivated(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
