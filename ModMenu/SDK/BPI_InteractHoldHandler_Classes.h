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
	 * BlueprintGeneratedClass BPI_InteractHoldHandler.BPI_InteractHoldHandler_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_InteractHoldHandler_C : public UInterface
	{
	public:
		void ClearHoldMeter();
		void UpdateCustomProgressMeter(const class FText& TextOnLeft, const class FText& TextOnRight);
		void CompleteInteractHold();
		void SetInteractHoldProgress(float Percentage);
		void CancelInteractHold();
		void BeginInteractHold();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
