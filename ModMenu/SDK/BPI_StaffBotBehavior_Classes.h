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
	 * BlueprintGeneratedClass BPI_StaffBotBehavior.BPI_StaffBotBehavior_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_StaffBotBehavior_C : public UInterface
	{
	public:
		void SetWorldRotation(const struct FRotator& Rotation, bool TeleportPhysics);
		void SetWorldLocation(const struct FVector& Location, bool Sweep, bool Teleport);
		void AddToWorldRotation(const struct FRotator& Rotation, bool Sweep, bool Teleport);
		void SetMoveToLocationAndRotation(const struct FVector& Location, const struct FRotator& Rotation);
		void OnEndGameBehavior();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
