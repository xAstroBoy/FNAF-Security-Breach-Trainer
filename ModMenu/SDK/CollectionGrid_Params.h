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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function CollectionGrid.CollectionGrid_C.IsFirstChildSelected
	 */
	struct UCollectionGrid_C_IsFirstChildSelected_Params
	{
	public:
		bool                                                       FirstChildSelected;                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function CollectionGrid.CollectionGrid_C.SelectFirstItemInGrid
	 */
	struct UCollectionGrid_C_SelectFirstItemInGrid_Params
	{
	};

	/**
	 * Function CollectionGrid.CollectionGrid_C.ClearSelected
	 */
	struct UCollectionGrid_C_ClearSelected_Params
	{
	};

	/**
	 * Function CollectionGrid.CollectionGrid_C.PopulateInventoryGrid
	 */
	struct UCollectionGrid_C_PopulateInventoryGrid_Params
	{
	public:
		TEnumAsByte<E_InventoryCollectionType_E_InventoryCollectionType> EInventoryCollectionType;                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		fnaf9_EInventoryItemCategory                               EInventoryItemCategory;                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CollectionGrid.CollectionGrid_C.Tick
	 */
	struct UCollectionGrid_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CollectionGrid.CollectionGrid_C.ExecuteUbergraph_CollectionGrid
	 */
	struct UCollectionGrid_C_ExecuteUbergraph_CollectionGrid_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
