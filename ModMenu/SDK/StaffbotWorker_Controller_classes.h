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

// BlueprintGeneratedClass StaffbotWorker_Controller.StaffbotWorker_Controller_C
// 0x0010 (FullSize[0x0340] - InheritedSize[0x0330])
class AStaffbotWorker_Controller_C : public AAIController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FName                                       KeyName;                                                   // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass StaffbotWorker_Controller.StaffbotWorker_Controller_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void Alert();
	void ExecuteUbergraph_StaffbotWorker_Controller(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
