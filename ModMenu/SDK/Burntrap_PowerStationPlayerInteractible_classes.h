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
	 * BlueprintGeneratedClass Burntrap_PowerStationPlayerInteractible.Burntrap_PowerStationPlayerInteractible_C
	 * Size -> 0x000B (FullSize[0x02A0] - InheritedSize[0x0295])
	 */
	class ABurntrap_PowerStationPlayerInteractible_C : public APowerStationPlayerInteractible_C
	{
	public:
		unsigned char                                              UnknownData_EHUL[0x3];                                   // 0x0295(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0298(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController);
		void ExecuteUbergraph_Burntrap_PowerStationPlayerInteractible(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
