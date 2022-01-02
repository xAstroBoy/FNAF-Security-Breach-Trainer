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

// BlueprintGeneratedClass FindHidingLocationWithoutPlayer.FindHidingLocationWithoutPlayer_C
// 0x002C (FullSize[0x012C] - InheritedSize[0x0100])
class UFindHidingLocationWithoutPlayer_C : public UFindHidingLocation_C
{
public:
	struct FBlackboardKeySelector                      RangeLocation;                                             // 0x0100(0x0028) (Edit, BlueprintVisible)
	float                                              RangeDistance;                                             // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass FindHidingLocationWithoutPlayer.FindHidingLocationWithoutPlayer_C");
		return ptr;
	}



	void GetHideActor(TArray<class AActor*>* HideActors, class AAIController* AIController, class APawn* Pawn, class AActor** Actor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
