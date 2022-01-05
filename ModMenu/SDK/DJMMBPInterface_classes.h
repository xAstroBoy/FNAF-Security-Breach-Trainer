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
	 * BlueprintGeneratedClass DJMMBPInterface.DJMMBPInterface_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDJMMBPInterface_C : public UInterface
	{
	public:
		void ThrowObject(bool ThrowL);
		void TubeCanGrab(bool CanGrab);
		void Jumpscare(bool Jumpscare);
		void TubePhase2(bool isPhase2);
		void TubeCanLeave(bool CanLeave);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
