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
	 * BlueprintGeneratedClass BPI_PauseUI.BPI_PauseUI_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_PauseUI_C : public UInterface
	{
	public:
		void GoToLastItemCollected();
		void UpdateLastItem(const struct FFNAFInventoryTableStruct& ItemInfo);
		void OpenInventoryMenu();
		void GetFocusButton(class UButton** Button);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
