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
	 * BlueprintGeneratedClass SlideSystem.SlideSystem_C
	 * Size -> 0x0000 (FullSize[0x0332] - InheritedSize[0x0332])
	 */
	class ASlideSystem_C : public ASlideAndLadderSystem_C
	{
	public:
		void GetInstructionOverride(class FText* Instruction);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
