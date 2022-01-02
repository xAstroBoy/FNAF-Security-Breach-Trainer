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
// Parameters
//---------------------------------------------------------------------------

// Function RandomItemSystem.ItemRandomizer.SetupItem
struct AItemRandomizer_SetupItem_Params
{
	class ARandomItemGroup*                            ItemGroup;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRandomStream                               RandomStream;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// Function RandomItemSystem.ItemRandomizer.Randomize
struct AItemRandomizer_Randomize_Params
{
	class UClass*                                      RandomItemCls;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRandomStream                               RandomStream;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// Function RandomItemSystem.ItemRandomizer.PickRandomLocationFromGroup
struct AItemRandomizer_PickRandomLocationFromGroup_Params
{
	class ARandomItemGroup*                            Group;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRandomStream                               RandomStream;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     OutLocation;                                               // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RandomItemSystem.RandomItemGroup.GetItemDisplayInformation
struct ARandomItemGroup_GetItemDisplayInformation_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
