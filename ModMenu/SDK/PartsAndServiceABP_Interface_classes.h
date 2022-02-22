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
	 * BlueprintGeneratedClass PartsAndServiceABP_Interface.PartsAndServiceABP_Interface_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPartsAndServiceABP_Interface_C : public UInterface
	{
	public:
		void Close(bool Close);
		void Off(bool Off);
		void Out(bool In);
		void VoiceBoxSwap(bool Off);
		void ResetFreddy();
		void TestButton_G();
		void TestButton_Y();
		void TestButton_B();
		void TestButton_R();
		void PartsAndServiceGame(PartsAndServiceAnimEnum_EPartsAndServiceAnimEnum GameEnum);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
