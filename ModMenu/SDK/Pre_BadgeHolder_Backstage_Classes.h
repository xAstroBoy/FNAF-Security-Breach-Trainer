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
	 * BlueprintGeneratedClass Pre_BadgeHolder_Backstage.Pre_BadgeHolder_Backstage_C
	 * Size -> 0x00B5 (FullSize[0x03A0] - InheritedSize[0x02EB])
	 */
	class APre_BadgeHolder_Backstage_C : public APRE_BadgeHolder_C
	{
	public:
		unsigned char                                              UnknownData_JJW6[0x5];                                   // 0x02EB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		unsigned char                                              LineSkipper[0x28];                                       // 0x02F8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              monitors[0x10];                                          // 0x0320(0x0010) UNKNOWN PROPERTY: ArrayProperty
		TArray<struct FTransform>                                  MonitorDialoguePositions;                                // 0x0330(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnRoxyMontySpawn;                                        // 0x0340(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                              IntroScreenComms[0x28];                                  // 0x0350(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              BackstageOfficeGameRef[0x28];                            // 0x0378(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		void OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController);
		void ExecuteUbergraph_Pre_BadgeHolder_Backstage(int32_t EntryPoint);
		void OnRoxyMontySpawn__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
