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
	 * BlueprintGeneratedClass BPI_ChowdaPawnInterface_DLC.BPI_ChowdaPawnInterface_DLC_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_ChowdaPawnInterface_DLC_C : public UInterface
	{
	public:
		void CamAccessPointStaticTeleported();
		void IsSecurityNodePawn(bool* IsPawnType);
		void IsConduitPawn(bool* IsPawnType);
		void IsCamAccessPawn(bool* IsPawnType);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
