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

// BlueprintGeneratedClass SignalActorLoaded.SignalActorLoaded_C
// 0x0048 (FullSize[0x0270] - InheritedSize[0x0228])
class ASignalActorLoaded_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ActorSoftRef[0x28];                                        // 0x0238(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FScriptMulticastDelegate                    OnActorLoaded;                                             // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass SignalActorLoaded.SignalActorLoaded_C");
		return ptr;
	}



	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_SignalActorLoaded(int EntryPoint);
	void OnActorLoaded__DelegateSignature(class AActor* LoadedActor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
