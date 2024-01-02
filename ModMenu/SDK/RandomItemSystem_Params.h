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
	 * Function RandomItemSystem.RandomItemGroup.GetNumLocations
	 */
	struct ARandomItemGroup_GetNumLocations_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RandomItemSystem.RandomItemGroup.GetItemDisplayInformation
	 */
	struct ARandomItemGroup_GetItemDisplayInformation_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RandomItemSystem.ItemRandomizer.SetupItem
	 */
	struct AItemRandomizer_SetupItem_Params
	{
	public:
		class ARandomItemGroup*                                    ItemGroup;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRandomStream                                       RandomStream;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RandomItemSystem.ItemRandomizer.Randomize
	 */
	struct AItemRandomizer_Randomize_Params
	{
	public:
		class UClass*                                              RandomItemCls;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRandomStream                                       RandomStream;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RandomItemSystem.ItemRandomizer.PickRandomLocationFromGroup
	 */
	struct AItemRandomizer_PickRandomLocationFromGroup_Params
	{
	public:
		class ARandomItemGroup*                                    Group;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRandomStream                                       RandomStream;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    OutLocationIndex;                                        // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RandomItemSystem.RandomItemGroupWithLocations.GetPossibleLocations
	 */
	struct ARandomItemGroupWithLocations_GetPossibleLocations_Params
	{
	public:
		TArray<struct FVector>                                     ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
