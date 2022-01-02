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

// BlueprintGeneratedClass ActivatiblePathBlock.ActivatiblePathBlock_C
// 0x0031 (FullSize[0x0259] - InheritedSize[0x0228])
class AActivatiblePathBlock_C : public AActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Activatable[0x28];                                         // 0x0230(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	TEnumAsByte<ActivatableState_EActivatableState>    ActivatableState;                                          // 0x0258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass ActivatiblePathBlock.ActivatiblePathBlock_C");
		return ptr;
	}



	void IsPathBlocked(bool* bLocked);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
