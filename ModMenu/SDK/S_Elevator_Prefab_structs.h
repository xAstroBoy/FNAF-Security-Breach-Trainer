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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct S_Elevator_Prefab.S_Elevator_Prefab
	 * Size -> 0x0040
	 */
	struct FS_Elevator_Prefab
	{
	public:
		TArray<class ABasicButton_C*>                              Buttons_60_0D5C465C4118D9362309F8B79613710C;             // 0x0000(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate
		TArray<class AActor*>                                      Doors_A_65_04BA24064194ECAC16DD3499EB852CF5;             // 0x0010(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate
		TArray<class AActor*>                                      Doors_B_64_89BC6A9440C39772C9954CA0AC55C561;             // 0x0020(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate
		TArray<class ABP_ArrowIndicator_C*>                        ArrowIndicators_61_81A397FB41EF746FD4F628BC4D4BD9B7;     // 0x0030(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
