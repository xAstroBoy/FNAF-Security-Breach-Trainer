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

// BlueprintGeneratedClass InvisibleCollectible.InvisibleCollectible_C
// 0x0000 (FullSize[0x0282] - InheritedSize[0x0282])
class AInvisibleCollectible_C : public ACollectible_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass InvisibleCollectible.InvisibleCollectible_C");
		return ptr;
	}



	void GetInteractibleType(TEnumAsByte<InteractibleType_EInteractibleType>* Type, TEnumAsByte<InteractiblePressType_EInteractiblePressType>* PressType);
	void InteractIgnoresTrace(bool* IgnoreTrace);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
