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
	 * Class RandomItemSystem.ItemRandomizer
	 * Size -> 0x0000 (FullSize[0x0228] - InheritedSize[0x0228])
	 */
	class AItemRandomizer : public AActor
	{
	public:
		void SetupItem(class ARandomItemGroup* ItemGroup, struct FRandomStream* RandomStream);
		void Randomize(class UClass* RandomItemCls, struct FRandomStream* RandomStream);
		void PickRandomLocationFromGroup(class ARandomItemGroup* Group, struct FRandomStream* RandomStream, struct FVector* OutLocation);
		static UClass* StaticClass();
	};

	/**
	 * Class RandomItemSystem.RandomItemGroup
	 * Size -> 0x0010 (FullSize[0x0238] - InheritedSize[0x0228])
	 */
	class ARandomItemGroup : public AActor
	{
	public:
		TArray<struct FVector>                                     PossibleLocations;                                       // 0x0228(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		class FString GetItemDisplayInformation();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
