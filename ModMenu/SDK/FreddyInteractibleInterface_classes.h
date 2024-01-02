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
	 * BlueprintGeneratedClass FreddyInteractibleInterface.FreddyInteractibleInterface_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFreddyInteractibleInterface_C : public UInterface
	{
	public:
		void GetFreddyActionLocationAndRotation(struct FVector* Location, struct FRotator* Rotation);
		void GetFreddyVO(EFreddyVOType VOType, TArray<class UDialogueWave*>* FreddyDialog);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
