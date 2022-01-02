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

// BlueprintGeneratedClass DialogueFunctionLibrary.DialogueFunctionLibrary_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDialogueFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass DialogueFunctionLibrary.DialogueFunctionLibrary_C");
		return ptr;
	}



	void STATIC_GetStandardDialogContext(class UObject* __WorldContext, struct FDialogueContext* DialogueContext);
	void STATIC_PlayStandardDialogAttached(class UDialogueWave* Dialogue, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, class UObject* __WorldContext);
	class UAudioComponent* STATIC_PlayStandardDialog(class UDialogueWave* Dialogue, class UObject* __WorldContext);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
