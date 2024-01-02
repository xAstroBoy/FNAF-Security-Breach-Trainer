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
	 * BlueprintGeneratedClass BPI_Controller.BPI_Controller_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_Controller_C : public UInterface
	{
	public:
		void ToggleCanPause(bool AllowPausing);
		void IsOnPauseMenu(bool* IsOnPauseMenu);
		void IsOnLoadingScreen(bool _TRUE__);
		void CloseInventoryMenu();
		void UsingCameraStation(bool UsingCamStation);
		void PauseGame(const struct FKey& Key);
		void AllowNewItemPreview(bool Allow);
		void UsingGamepad(bool* UsingGamepad);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
