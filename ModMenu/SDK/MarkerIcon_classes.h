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
	 * WidgetBlueprintGeneratedClass MarkerIcon.MarkerIcon_C
	 * Size -> 0x0231 (FullSize[0x0461] - InheritedSize[0x0230])
	 */
	class UMarkerIcon_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Image_91;                                                // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSlateBrush                                         Single_Mission;                                          // 0x0240(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         Double_Mission;                                          // 0x02C8(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         Multi_Mission;                                           // 0x0350(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         No_Mission;                                              // 0x03D8(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		fnaf9_ELevelArea                                           Location;                                                // 0x0460(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Set_Marker();
		void ExecuteUbergraph_MarkerIcon(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
