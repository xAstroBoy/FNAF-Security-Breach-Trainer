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
	 * BlueprintGeneratedClass BPI_PlayerInput.BPI_PlayerInput_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_PlayerInput_C : public UInterface
	{
	public:
		void GetIsPlaySequenceRunning(bool* IsSequenceRunning);
		void SetIsPlaySequenceRunning(bool IsRunning);
		void SetEnabledInputFlags(int32_t InputFlags);
		void EnableAllInputs();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
