#pragma once

/**
 * Name: FNAFSB
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass DialogueFunctionLibrary.DialogueFunctionLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDialogueFunctionLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void GetStandardDialogContext(class UObject* __WorldContext, struct FDialogueContext* DialogueContext);
		void PlayStandardDialogAttached(class UDialogueWave* Dialogue, class USceneComponent* AttachToComponent, const class FName& AttachPointName, const struct FVector& Location, class UObject* __WorldContext);
		class UAudioComponent* PlayStandardDialog(class UDialogueWave* Dialogue, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
