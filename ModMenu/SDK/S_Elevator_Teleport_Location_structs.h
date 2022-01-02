#pragma once

// Name: FNAF Security Breach, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_Elevator_Teleport_Location.S_Elevator_Teleport_Location
// 0x00A0
struct FS_Elevator_Teleport_Location
{
	unsigned char                                      TeleportOrigin_51_20E86C7E493810D30BB3E1BF30A2D282[0x28];  // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      Doors_41_04BA24064194ECAC16DD3499EB852CF5[0x10];           // 0x0028(0x0010) UNKNOWN PROPERTY: ArrayProperty
	unsigned char                                      Buttons_50_0D5C465C4118D9362309F8B79613710C[0x10];         // 0x0038(0x0010) UNKNOWN PROPERTY: ArrayProperty
	unsigned char                                      ArrowIndicators_55_81A397FB41EF746FD4F628BC4D4BD9B7[0x10]; // 0x0048(0x0010) UNKNOWN PROPERTY: ArrayProperty
	TArray<struct FName>                               Levels_12_DC0C3772429EA728E351358C8345CE72;                // 0x0058(0x0010) (Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FName>                               LevelsVisible_30_718555F64E0E9C1837F4F39B1EC0C800;         // 0x0068(0x0010) (Edit, BlueprintVisible, HasGetValueTypeHash)
	unsigned char                                      ElevatorPrefab_58_B83874C448FCD0EA977BD9A838B54545[0x28];  // 0x0078(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
