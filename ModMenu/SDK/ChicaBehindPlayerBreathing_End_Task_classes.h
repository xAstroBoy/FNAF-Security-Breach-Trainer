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

// BlueprintGeneratedClass ChicaBehindPlayerBreathing_End_Task.ChicaBehindPlayerBreathing_End_Task_C
// 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
class UChicaBehindPlayerBreathing_End_Task_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass ChicaBehindPlayerBreathing_End_Task.ChicaBehindPlayerBreathing_End_Task_C");
		return ptr;
	}



	void ReceiveExecute(class AActor* OwnerActor);
	void ExecuteUbergraph_ChicaBehindPlayerBreathing_End_Task(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
