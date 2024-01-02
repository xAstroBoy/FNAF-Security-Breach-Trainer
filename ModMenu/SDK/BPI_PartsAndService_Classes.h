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
	 * BlueprintGeneratedClass BPI_PartsAndService.BPI_PartsAndService_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_PartsAndService_C : public UInterface
	{
	public:
		void SetPlayingPartsAndServiceGame(bool IsPlaying);
		void GetFreddyChairAnimInstance(class UAnimInstance** AnimInstance);
		void GetRobotArmsAnimInstance(class UAnimInstance** AnimInstance);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
