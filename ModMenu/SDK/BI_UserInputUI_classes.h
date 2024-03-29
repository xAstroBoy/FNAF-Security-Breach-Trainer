﻿#pragma once

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
	 * BlueprintGeneratedClass BI_UserInputUI.BI_UserInputUI_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBI_UserInputUI_C : public UInterface
	{
	public:
		void Reset();
		void InputDpadDirection(const struct FVector2D& Direction);
		void InputCycle(int32_t Increment);
		void InputZoom(const struct FVector2D& Axis);
		void InputOpen();
		void InputOptionAxis(const struct FVector2D& Axis);
		void InputLookAxis(const struct FVector2D& Axis);
		void InputMoveAxis(const struct FVector2D& Axis);
		void InputTertiary();
		void InputSecondary();
		void InputPrimary();
		void InputAccept();
		void InputBack();
		void InputClose();
		void InputPrevious();
		void InuputNext();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
