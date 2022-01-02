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

// BlueprintGeneratedClass FreddyInteractibleInterface.FreddyInteractibleInterface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UFreddyInteractibleInterface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass FreddyInteractibleInterface.FreddyInteractibleInterface_C");
		return ptr;
	}



	void GetFreddyActionLocationAndRotation(struct FVector* Location, struct FRotator* Rotation);
	void GetFreddyVO(TEnumAsByte<FreddyVOType_EFreddyVOType> VOType, TArray<class UDialogueWave*>* FreddyDialog);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
