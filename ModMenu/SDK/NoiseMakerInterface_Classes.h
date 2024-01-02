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
	 * BlueprintGeneratedClass NoiseMakerInterface.NoiseMakerInterface_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNoiseMakerInterface_C : public UInterface
	{
	public:
		void SetCanDistract(bool CanDistract);
		void GetCanDistract(bool* CanDistract);
		void TriggerNoiseMaker(class AActor* OtherActor, bool PlayAudio);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
