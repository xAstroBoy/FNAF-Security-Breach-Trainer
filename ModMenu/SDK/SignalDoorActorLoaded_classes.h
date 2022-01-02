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

// BlueprintGeneratedClass SignalDoorActorLoaded.SignalDoorActorLoaded_C
// 0x0008 (FullSize[0x0278] - InheritedSize[0x0270])
class ASignalDoorActorLoaded_C : public ASignalActorLoaded_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass SignalDoorActorLoaded.SignalDoorActorLoaded_C");
		return ptr;
	}



	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_SignalDoorActorLoaded(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
