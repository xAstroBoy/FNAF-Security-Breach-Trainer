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

// BlueprintGeneratedClass ActorUtils.ActorUtils_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UActorUtils_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass ActorUtils.ActorUtils_C");
		return ptr;
	}



	void STATIC_GetClosestActorFromList(TArray<class AActor*>* Actors, class AActor* TargetActor, class UObject* __WorldContext, class AActor** Actor, float* ActorDistance);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
