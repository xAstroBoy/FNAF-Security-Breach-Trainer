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

// BlueprintGeneratedClass HideAnimInterface.HideAnimInterface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UHideAnimInterface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass HideAnimInterface.HideAnimInterface_C");
		return ptr;
	}



	void SetAnim(class UAnimSequence* Animation);
	void SetEnterRotation(class APawn* PlayerPawn);
	void StartSearch(class APawn* SearcherPawn);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
