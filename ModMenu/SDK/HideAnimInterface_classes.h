#pragma once

/**
 * Name: FNAF Security Breach
 * Version: 2
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
	 * BlueprintGeneratedClass HideAnimInterface.HideAnimInterface_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHideAnimInterface_C : public UInterface
	{
	public:
		void SetPeek(bool ShouldPeek);
		void SetAnim(class UAnimSequence* Animation);
		void SetEnterRotation(class APawn* PlayerPawn);
		void StartSearch(class APawn* SearcherPawn);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
