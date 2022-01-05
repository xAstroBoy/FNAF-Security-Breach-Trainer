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
	 * WidgetBlueprintGeneratedClass DebugUI.DebugUI_C
	 * Size -> 0x0379 (FullSize[0x05A9] - InheritedSize[0x0230])
	 */
	class UDebugUI_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCheckBox*                                           AIDebugVis;                                              // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           AISpawnEnable;                                           // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           AntiAliasing;                                            // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    CameraFOV;                                               // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           ChicaShattered;                                          // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             ClearAIButton;                                           // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             ClearTapesData;                                          // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           CloakingEnabled;                                         // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           ClockRunning_2;                                          // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    ClockTime;                                               // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             CloseDebugButton;                                        // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDbgGregoryStatesUI_C*                               DbgGregoryStatesUI;                                      // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDebugInstructionCardUI_C*                           DebugInstructionCardUI;                                  // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDebugMissionUI_C*                                   DebugMissionUI;                                          // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             DLSSQualityHighButton;                                   // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             DLSSQualityLowButton;                                    // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             DLSSQualityMediumButton;                                 // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             DLSSQualityOffButton;                                    // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             DLSSQualityUltraButton;                                  // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           EnableAllInput;                                          // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UComboBoxString*                                     FlyingCollisionType;                                     // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           FlyingMode;                                              // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpinBox*                                            FlyingSpeed;                                             // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           FrameRateDisplay;                                        // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             FreddyGregoryStates;                                     // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             HardwareBenchmark;                                       // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           HasUsedHidingSpot;                                       // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HorizontalBox_30_FazerBlast;                             // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             InstructionCardButton;                                   // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             InventoryButton;                                         // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWrapBox*                                            InventoryItemsPanel;                                     // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    InventorySearchText;                                     // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           KitchenCameras;                                          // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           LightingScenarioDisplay;                                 // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           LightmapDensity;                                         // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             LockEverythingButton;                                    // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             MainButton;                                              // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             MissionButton;                                           // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           MontyShattered;                                          // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             MoreDebug;                                               // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNamedSlot*                                          NamedSlot;                                               // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNamedSlot*                                          NamedSlot_2;                                             // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNamedSlot*                                          NamedSlot_3;                                             // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNamedSlot*                                          NamedSlot_4;                                             // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNamedSlot*                                          NamedSlot_5;                                             // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNamedSlot*                                          NamedSlot_6;                                             // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNamedSlot*                                          NamedSlot_7;                                             // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNamedSlot*                                          NamedSlot_8;                                             // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNamedSlot*                                          NamedSlot_9;                                             // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNamedSlot*                                          NamedSlot_10;                                            // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNamedSlot*                                          NamedSlot_11;                                            // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNamedSlot*                                          NamedSlot_422;                                           // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNamedSlot*                                          NamedSlot_720;                                           // 0x03D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNamedSlot*                                          NamedSlot_892;                                           // 0x03E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           PointLights;                                             // 0x03E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           PostProcessing;                                          // 0x03F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           PrecomputedVisibility;                                   // 0x03F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             PS4QualityButton;                                        // 0x0400(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             PS5Performance;                                          // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             PS5VisualQualityButton;                                  // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             RayTraceQualityHighButton;                               // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          RayTraceQualityLevelTextBox_2;                           // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             RayTraceQualityLowButton;                                // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             RayTraceQualityMediumButton;                             // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             RayTraceQualityOffButton;                                // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           RoxyShattered;                                           // 0x0440(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    SecurityLevel;                                           // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    SetFazwatchPower;                                        // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    SetFreddyPower;                                          // 0x0458(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           ShowCollision;                                           // 0x0460(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           ShowCoordinates;                                         // 0x0468(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           ShowLevelStreamers;                                      // 0x0470(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           ShowLoadedLevels;                                        // 0x0478(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           ShowTranslucency;                                        // 0x0480(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           SpotLights;                                              // 0x0488(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           SurvivalLocations;                                       // 0x0490(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     Switcher;                                                // 0x0498(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             TeleportButton;                                          // 0x04A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    TeleportX;                                               // 0x04A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    TeleportY;                                               // 0x04B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    TeleportZ;                                               // 0x04B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    TextBox_FazerBlastTime;                                  // 0x04C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           TrailerMode;                                             // 0x04C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           UnlimitedFazwatchPower;                                  // 0x04D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           UnlimitedStamina;                                        // 0x04D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           UnlitMode;                                               // 0x04E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             UnlockEverythingButton;                                  // 0x04E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             VannyDecButton;                                          // 0x04F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             VannyIncButton;                                          // 0x04F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           VannyMeterVis;                                           // 0x0500(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             VisualQualityHighButton;                                 // 0x0508(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          VisualQualityLevelTextBox;                               // 0x0510(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             VisualQualityLowButton;                                  // 0x0518(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             VisualQualityMediumButton;                               // 0x0520(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             VisualQualityMinSpecButton;                              // 0x0528(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             VisualQualityUltraButton;                                // 0x0530(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWI_Option_Language_C*                               WI_Option_Language;                                      // 0x0538(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWI_Option_Language_DebugShortcut_C*                 WI_Option_Language_DebugShortcut;                        // 0x0540(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDataTable*                                          DbgInfoTable;                                            // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AFrameRateActor_C*                                   FrameRateActor;                                          // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class FName, class UDebugInventoryItem_C*>            InventoryItems;                                          // 0x0558(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       MinSpecSelectedLast;                                     // 0x05A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void DebugApplyDLSSQuality(TEnumAsByte<FNAFVisualQualityLevel_EFNAFVisualQualityLevel> Quality);
		SlateCore_ECheckBoxState Get_Cloaking_Enabled_Checked_State();
		class FText TimeFloatToText(float InputPin);
		float TimeTextToFloat(const class FText& InText);
		SlateCore_ECheckBoxState Get_LightingScenarioDisplay_CheckedState_1();
		SlateCore_ECheckBoxState Get_FrameRateDisplay_CheckedState_1();
		class FText Get_CameraFOV_Text_1();
		SlateCore_ECheckBoxState Get_UnlimitedStamina_CheckedState_1();
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		SlateCore_ECheckBoxState Get_ShowLevelStreamers_CheckedState_1();
		SlateCore_ECheckBoxState Get_ShowLoadedLevels_CheckedState_1();
		SlateCore_ECheckBoxState Get_ShowCoordinates_CheckedState_1();
		SlateCore_ECheckBoxState Get_RoxyEyes_CheckedState_1();
		SlateCore_ECheckBoxState Get_ChicaBeak_CheckedState_1();
		SlateCore_ECheckBoxState Get_MontyClaws_CheckedState_1();
		SlateCore_ECheckBoxState Get_UnlimitedFazwatchPower_CheckedState_1();
		class FText Get_SetFreddyPower_Text_1();
		float Get_FlyingSpeed_Value_1();
		class FText Get_PowerLevelInput_Text_1();
		class FText Get_SecurityLevel_Text_1();
		SlateCore_ECheckBoxState Get_AIDebugVis_CheckedState_1();
		SlateCore_ECheckBoxState Get_AISpawnEnable_CheckedState_1();
		SlateCore_ECheckBoxState Get_MontyShattered_CheckedState_1();
		SlateCore_ECheckBoxState Get_RoxyShattered_CheckedState_1();
		SlateCore_ECheckBoxState Get_ChicaShattered_CheckedState_1();
		class FText GetClockTime();
		SlateCore_ECheckBoxState Get_ClockRunning_CheckedState_1();
		SlateCore_ECheckBoxState GetCheckedState_1();
		SlateCore_ECheckBoxState Get_FlyingCollision_CheckedState_1();
		SlateCore_ECheckBoxState Get_FlyingMode_CheckedState_1();
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void BndEvt__FlyingMode_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__FlyingCollisionType_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType);
		void BndEvt__PostProcessing_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__AntiAliasing_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__ShowCollision_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__LightmapDensity_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__PointLights_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__SpotLights_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__PrecomputedVisibility_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__ShowTranslucency_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__CheckBox_110_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__ClockTime_K2Node_ComponentBoundEvent_12_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
		void BndEvt__ChicaShattered_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__RoxyShattered_K2Node_ComponentBoundEvent_14_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__MontyShattered_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__ShowCoordinates_K2Node_ComponentBoundEvent_16_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__ClearAIButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__AISpawnEnable_K2Node_ComponentBoundEvent_18_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__AIDebugVis_K2Node_ComponentBoundEvent_19_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__SecurityLevel_K2Node_ComponentBoundEvent_20_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
		void BndEvt__PowerLevelInput_K2Node_ComponentBoundEvent_22_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
		void BndEvt__FlyingSpeed_K2Node_ComponentBoundEvent_21_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
		void BndEvt__SetFreddyPower_K2Node_ComponentBoundEvent_23_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
		void BndEvt__MainButton_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__InventoryButton_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__TrailerMode_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__UnlitMode_K2Node_ComponentBoundEvent_27_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__UnlockEverythingButton_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__LockEverythingButton_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__ShowLoadedLevels_K2Node_ComponentBoundEvent_30_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__MissionButton_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__UnlimitedFazwatchPower_K2Node_ComponentBoundEvent_32_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__Freddy_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__ClockRunning_1_K2Node_ComponentBoundEvent_34_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__ShowLevelStreamers_K2Node_ComponentBoundEvent_38_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void FocusButton();
		void BndEvt__UnlimitedStamina_K2Node_ComponentBoundEvent_37_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__CameraFOV_K2Node_ComponentBoundEvent_39_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
		void BndEvt__TeleportButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__SurvivalLocations_K2Node_ComponentBoundEvent_41_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__VannyMeterVis_K2Node_ComponentBoundEvent_42_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__VannyDecButton_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__VannyIncButton_K2Node_ComponentBoundEvent_44_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__FrameRateDisplay_K2Node_ComponentBoundEvent_45_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__LightingScenarioDisplay_K2Node_ComponentBoundEvent_46_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__TextBox_FazerBlastTime_K2Node_ComponentBoundEvent_49_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
		void OnInitialized();
		void BndEvt__InventorySearchText_K2Node_ComponentBoundEvent_11_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
		void BndEvt__EnableAllInput_K2Node_ComponentBoundEvent_35_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__CloakingEnabled_K2Node_ComponentBoundEvent_36_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__HardwareBenchmark_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__MoreDebug_K2Node_ComponentBoundEvent_48_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__VisualQualityLowButton_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__VisualQualityMediumButton_K2Node_ComponentBoundEvent_52_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__VisualQualityHighButton_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__VisualQualityUltraButton_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__RayTraceQualityOffButton_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__RayTraceQualityLowButton_K2Node_ComponentBoundEvent_56_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__RayTraceQualityMediumButton_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__RayTraceQualityHighButton_K2Node_ComponentBoundEvent_58_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__PS5Performance_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__PS5VisualQualityButton_K2Node_ComponentBoundEvent_59_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__PS5Performance_1_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature();
		void UpdateQualityLevelText();
		void BndEvt__VisualQualityLowButton_1_K2Node_ComponentBoundEvent_61_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__InstructionCardButton_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__CloseDebugButton_K2Node_ComponentBoundEvent_63_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__ClearTapesData_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__DLSSQualityOffButton_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__DLSSQualityLowButton_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__DLSSQualityMediumButton_K2Node_ComponentBoundEvent_67_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__DLSSQualityHighButton_K2Node_ComponentBoundEvent_68_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__DLSSQualityUltraButton_K2Node_ComponentBoundEvent_69_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__HasUsedHidingSpot_K2Node_ComponentBoundEvent_70_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void ExecuteUbergraph_DebugUI(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
