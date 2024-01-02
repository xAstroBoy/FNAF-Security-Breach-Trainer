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
	 * WidgetBlueprintGeneratedClass DebugUI.DebugUI_C
	 * Size -> 0x0479 (FullSize[0x06D9] - InheritedSize[0x0260])
	 */
	class UDebugUI_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCheckBoxUI_C*                                       AIDebugVis_CheckBox;                                     // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBoxUI_C*                                       AISpawnEnable_CheckBox;                                  // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBoxUI_C*                                       AntiAlias_Checkbox;                                      // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           AntiAliasing;                                            // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      Character_Button;                                        // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Chowda;                                                  // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      Chowda_Button;                                           // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UChowda_DebugUI_C*                                   Chowda_DebugUI;                                          // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      ClearAI_Button;                                          // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             ClearTapesData;                                          // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextFieldEntryUI_C*                                 Clock_TextEntry;                                         // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             CloseDebugButton;                                        // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      CloseDebugMenu_Button;                                   // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextFieldEntryUI_C*                                 ConsoleCommand_TextEntry;                                // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextFieldEntryUI_C*                                 Coordinates_TextEntry;                                   // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDbgGregoryStatesUI_C*                               DbgGregoryStatesUI;                                      // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDebugInstructionCardUI_C*                           DebugInstructionCardUI;                                  // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDebugMissionUI_C*                                   DebugMissionUI;                                          // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDropDownUI_C*                                       DLSS_DropDown;                                           // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             DLSSQualityHighButton;                                   // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             DLSSQualityLowButton;                                    // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             DLSSQualityMediumButton;                                 // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             DLSSQualityOffButton;                                    // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             DLSSQualityUltraButton;                                  // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBoxUI_C*                                       EnableCloaking_CheckBox;                                 // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBoxUI_C*                                       EnableInputModes_CheckBox;                               // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      EquipMaintenanceTool_Button;                             // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextFieldEntryUI_C*                                 FlashlightPower_TextEntry;                               // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDropDownUI_C*                                       FlyingCollision_DropDown;                                // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBoxUI_C*                                       FlyingMode_CheckBox;                                     // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpinBox*                                            FlyingSpeed;                                             // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextFieldEntryUI_C*                                 FOV_TextEntry;                                           // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBoxUI_C*                                       FrameRate_CheckBox;                                      // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             FreddyGregoryStates;                                     // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextFieldEntryUI_C*                                 FreddyPower_TextEntry;                                   // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBoxUI_C*                                       GameClockRunning_CheckBox;                               // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      HardWareBench_Button;                                    // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             HardwareBenchmark;                                       // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBoxUI_C*                                       HidingSpot_CheckBox;                                     // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      Instruction_Button;                                      // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             InstructionCardButton;                                   // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      Inventory_Button;                                        // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             InventoryButton;                                         // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWrapBox*                                            InventoryItemsPanel;                                     // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBoxUI_C*                                       LightingScenario_CheckBox;                               // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBoxUI_C*                                       LightMap_Checkbox;                                       // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           LightmapDensity;                                         // 0x03D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      LockEverything_Button;                                   // 0x03E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      Main_Button;                                             // 0x03E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             MainButton;                                              // 0x03F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      Mission_Button;                                          // 0x03F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             MissionButton;                                           // 0x0400(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             MoreDebug;                                               // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNamedSlot*                                          NamedSlot;                                               // 0x0410(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNamedSlot*                                          NamedSlot_2;                                             // 0x0418(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNamedSlot*                                          NamedSlot_3;                                             // 0x0420(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNamedSlot*                                          NamedSlot_4;                                             // 0x0428(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNamedSlot*                                          NamedSlot_5;                                             // 0x0430(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNamedSlot*                                          NamedSlot_6;                                             // 0x0438(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNamedSlot*                                          NamedSlot_7;                                             // 0x0440(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNamedSlot*                                          NamedSlot_8;                                             // 0x0448(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNamedSlot*                                          NamedSlot_9;                                             // 0x0450(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNamedSlot*                                          NamedSlot_10;                                            // 0x0458(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNamedSlot*                                          NamedSlot_11;                                            // 0x0460(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNamedSlot*                                          NamedSlot_422;                                           // 0x0468(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNamedSlot*                                          NamedSlot_720;                                           // 0x0470(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNamedSlot*                                          NamedSlot_892;                                           // 0x0478(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      Other_Button;                                            // 0x0480(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           PointLights;                                             // 0x0488(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBoxUI_C*                                       PointLights_Checkbox;                                    // 0x0490(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           PostProcessing;                                          // 0x0498(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBoxUI_C*                                       PostProcessing_Checkbox;                                 // 0x04A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBoxUI_C*                                       PrecomputedVis_Checkbox;                                 // 0x04A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           PrecomputedVisibility;                                   // 0x04B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      PS4_Quality_Button;                                      // 0x04B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             PS4QualityButton;                                        // 0x04C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      PS5_Performance_Button;                                  // 0x04C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      PS5_Visual_Button;                                       // 0x04D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             PS5Performance;                                          // 0x04D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             PS5VisualQualityButton;                                  // 0x04E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDropDownUI_C*                                       RayTraceQuality_DropDown;                                // 0x04E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             RayTraceQualityHighButton;                               // 0x04F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          RayTraceQualityLevelTextBox_2;                           // 0x04F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             RayTraceQualityLowButton;                                // 0x0500(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             RayTraceQualityMediumButton;                             // 0x0508(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             RayTraceQualityOffButton;                                // 0x0510(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextFieldEntryUI_C*                                 Search_TextEntry;                                        // 0x0518(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextFieldEntryUI_C*                                 SecurityLevel_TextEntry;                                 // 0x0520(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBoxUI_C*                                       ShatteredChica_CheckBox;                                 // 0x0528(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBoxUI_C*                                       ShatteredMonty_CheckBox;                                 // 0x0530(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBoxUI_C*                                       ShatteredRoxy_CheckBox;                                  // 0x0538(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBoxUI_C*                                       ShowCollision_CheckBox;                                  // 0x0540(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBoxUI_C*                                       ShowCoordinates_CheckBox;                                // 0x0548(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBoxUI_C*                                       ShowLevelStreamers_CheckBox;                             // 0x0550(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBoxUI_C*                                       ShowLoadedLevels_CheckBox;                               // 0x0558(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           ShowTranslucency;                                        // 0x0560(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           SpotLights;                                              // 0x0568(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBoxUI_C*                                       SpotLights_Checkbox;                                     // 0x0570(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBoxUI_C*                                       SurvivalItemsLoc_Checkbox;                               // 0x0578(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           SurvivalLocations;                                       // 0x0580(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     Switcher;                                                // 0x0588(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      TeleportButton_New;                                      // 0x0590(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           TrailerMode;                                             // 0x0598(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBoxUI_C*                                       TrailerMode_Checkbox;                                    // 0x05A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBoxUI_C*                                       TranslucencyTele_Checkbox;                               // 0x05A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBoxUI_C*                                       UnlimitedFlashlightPower_CheckBox;                       // 0x05B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBoxUI_C*                                       UnlimitedStam_CheckBox;                                  // 0x05B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBoxUI_C*                                       UnlitMode_CheckBox;                                      // 0x05C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBoxUI_C*                                       UnlockAllCameras_CheckBox;                               // 0x05C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      UnlockEverything_Button;                                 // 0x05D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             VannyDecButton;                                          // 0x05D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             VannyIncButton;                                          // 0x05E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBoxUI_C*                                       VannyMeter_Checkbox;                                     // 0x05E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           VannyMeterVis;                                           // 0x05F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      VannyMetter_Minus_Button;                                // 0x05F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      VannyMetter_Plus_Button;                                 // 0x0600(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDropDownUI_C*                                       VisQuality_DropDown;                                     // 0x0608(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             VisualQualityHighButton;                                 // 0x0610(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          VisualQualityLevelTextBox;                               // 0x0618(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             VisualQualityLowButton;                                  // 0x0620(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             VisualQualityMediumButton;                               // 0x0628(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             VisualQualityMinSpecButton;                              // 0x0630(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             VisualQualityUltraButton;                                // 0x0638(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWI_Option_Language_C*                               WI_Option_Language;                                      // 0x0640(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWI_Option_Language_DebugShortcut_C*                 WI_Option_Language_DebugShortcut;                        // 0x0648(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      XboxOne_Quality_Button;                                  // 0x0650(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      XSS_Performance_Button;                                  // 0x0658(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      XSS_Visual_Button;                                       // 0x0660(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      XSX_Performance_Button;                                  // 0x0668(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      XSX_Visual_Button;                                       // 0x0670(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDataTable*                                          DbgInfoTable;                                            // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AFrameRateActor_C*                                   FrameRateActor;                                          // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class FName, class UDebugInventoryItem_C*>            InventoryItems;                                          // 0x0688(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       MinSpecSelectedLast;                                     // 0x06D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UpdateChecksVisibility();
		void DebugApplyDLSSQuality(EFNAFVisualQualityLevel Quality);
		class FText TimeFloatToText(float InputPin);
		float TimeTextToFloat(const class FText& InText);
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		float Get_FlyingSpeed_Value_1();
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void BndEvt__PostProcessing_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__AntiAliasing_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__LightmapDensity_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__PointLights_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__SpotLights_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__PrecomputedVisibility_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__ShowTranslucency_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__FlyingSpeed_K2Node_ComponentBoundEvent_21_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod);
		void FocusButton();
		void UpdateQualityLevelText();
		void BndEvt__CloseDebugButton_K2Node_ComponentBoundEvent_63_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__ClearTapesData_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__DLSSQualityOffButton_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__DLSSQualityLowButton_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__DLSSQualityMediumButton_K2Node_ComponentBoundEvent_67_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__DLSSQualityHighButton_K2Node_ComponentBoundEvent_68_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__DLSSQualityUltraButton_K2Node_ComponentBoundEvent_69_OnButtonClickedEvent__DelegateSignature();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void BndEvt__DebugUI_Main_Button_K2Node_ComponentBoundEvent_88_OnClicked__DelegateSignature();
		void BndEvt__DebugUI_Inventory_Button_K2Node_ComponentBoundEvent_89_OnClicked__DelegateSignature();
		void BndEvt__DebugUI_Character_Button_K2Node_ComponentBoundEvent_90_OnClicked__DelegateSignature();
		void BndEvt__DebugUI_Mission_Button_K2Node_ComponentBoundEvent_91_OnClicked__DelegateSignature();
		void BndEvt__DebugUI_Instruction_Button_K2Node_ComponentBoundEvent_92_OnClicked__DelegateSignature();
		void BndEvt__DebugUI_Other_Button_K2Node_ComponentBoundEvent_93_OnClicked__DelegateSignature();
		void BndEvt__DebugUI_Chowda_Button_K2Node_ComponentBoundEvent_94_OnClicked__DelegateSignature();
		void BndEvt__DebugUI_CheckBoxUI_447_K2Node_ComponentBoundEvent_95_CheckedStateChanged__DelegateSignature();
		void BndEvt__DebugUI_UnlockEverything_Button_K2Node_ComponentBoundEvent_96_OnClicked__DelegateSignature();
		void BndEvt__DebugUI_LockEverything_Button_K2Node_ComponentBoundEvent_97_OnClicked__DelegateSignature();
		void BndEvt__DebugUI_FlyingCollision_DropDown_K2Node_ComponentBoundEvent_98_OnSelectionChanged__DelegateSignature();
		void BndEvt__DebugUI_UnlitMode_CheckBox_K2Node_ComponentBoundEvent_99_CheckedStateChanged__DelegateSignature();
		void BndEvt__DebugUI_FrameRate_CheckBox_K2Node_ComponentBoundEvent_100_CheckedStateChanged__DelegateSignature();
		void BndEvt__DebugUI_GameClockRunning_CheckBox_K2Node_ComponentBoundEvent_101_CheckedStateChanged__DelegateSignature();
		void BndEvt__DebugUI_LightingScenario_CheckBox_K2Node_ComponentBoundEvent_102_CheckedStateChanged__DelegateSignature();
		void BndEvt__DebugUI_HidingSpot_CheckBox_K2Node_ComponentBoundEvent_103_CheckedStateChanged__DelegateSignature();
		void BndEvt__DebugUI_ShowCollision_CheckBox_K2Node_ComponentBoundEvent_104_CheckedStateChanged__DelegateSignature();
		void BndEvt__DebugUI_ShowLevelStreamers_CheckBox_1_K2Node_ComponentBoundEvent_105_CheckedStateChanged__DelegateSignature();
		void BndEvt__DebugUI_ShowLevelStreamers_CheckBox_K2Node_ComponentBoundEvent_106_CheckedStateChanged__DelegateSignature();
		void BndEvt__DebugUI_ShowLoadedLevels_CheckBox_K2Node_ComponentBoundEvent_107_CheckedStateChanged__DelegateSignature();
		void BndEvt__DebugUI_ShowCoordinates_CheckBox_K2Node_ComponentBoundEvent_108_CheckedStateChanged__DelegateSignature();
		void BndEvt__DebugUI_EnableCloaking_CheckBox_K2Node_ComponentBoundEvent_109_CheckedStateChanged__DelegateSignature();
		void BndEvt__DebugUI_UnlimitedStam_CheckBox_K2Node_ComponentBoundEvent_110_CheckedStateChanged__DelegateSignature();
		void BndEvt__DebugUI_UnlimitedFlashlightPower_CheckBox_K2Node_ComponentBoundEvent_111_CheckedStateChanged__DelegateSignature();
		void BndEvt__DebugUI_ShatteredRoxy_CheckBox_K2Node_ComponentBoundEvent_112_CheckedStateChanged__DelegateSignature();
		void BndEvt__DebugUI_ShatteredMonty_CheckBox_K2Node_ComponentBoundEvent_113_CheckedStateChanged__DelegateSignature();
		void BndEvt__DebugUI_ShatteredChica_CheckBox_K2Node_ComponentBoundEvent_114_CheckedStateChanged__DelegateSignature();
		void BndEvt__DebugUI_AIDebugVis_CheckBox_K2Node_ComponentBoundEvent_115_CheckedStateChanged__DelegateSignature();
		void BndEvt__DebugUI_EnableSpawnAI_CheckBox_K2Node_ComponentBoundEvent_116_CheckedStateChanged__DelegateSignature();
		void BndEvt__DebugUI_ClearAI_Button_K2Node_ComponentBoundEvent_117_OnClicked__DelegateSignature();
		void BndEvt__DebugUI_UnlockAllCameras_CheckBox_K2Node_ComponentBoundEvent_118_CheckedStateChanged__DelegateSignature();
		void BndEvt__DebugUI_VisQuality_DropDown_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature();
		void BndEvt__DebugUI_HardWareBench_Button_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
		void BndEvt__DebugUI_RayTraceQuality_DropDown_K2Node_ComponentBoundEvent_4_OnSelectionChanged__DelegateSignature();
		void BndEvt__DebugUI_DLSS_DropDown_K2Node_ComponentBoundEvent_10_OnSelectionChanged__DelegateSignature();
		void BndEvt__DebugUI_PS4_Quality_Button_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature();
		void BndEvt__DebugUI_PS5_Performance_Button_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature();
		void BndEvt__DebugUI_PS5_Visual_Button_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature();
		void BndEvt__DebugUI_CloseDebugMenu_Button_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature();
		void BndEvt__DebugUI_TrailerMode_Checkbox_K2Node_ComponentBoundEvent_17_CheckedStateChanged__DelegateSignature();
		void BndEvt__DebugUI_PostProcessing_Checkbox_K2Node_ComponentBoundEvent_18_CheckedStateChanged__DelegateSignature();
		void BndEvt__DebugUI_AntiAlias_Checkbox_K2Node_ComponentBoundEvent_19_CheckedStateChanged__DelegateSignature();
		void BndEvt__DebugUI_LightMap_Checkbox_K2Node_ComponentBoundEvent_24_CheckedStateChanged__DelegateSignature();
		void BndEvt__DebugUI_PointLights_Checkbox_K2Node_ComponentBoundEvent_25_CheckedStateChanged__DelegateSignature();
		void BndEvt__DebugUI_SpotLights_Checkbox_K2Node_ComponentBoundEvent_27_CheckedStateChanged__DelegateSignature();
		void BndEvt__DebugUI_PrecomputedVis_Checkbox_K2Node_ComponentBoundEvent_28_CheckedStateChanged__DelegateSignature();
		void BndEvt__DebugUI_TranslucencyTele_Checkbox_K2Node_ComponentBoundEvent_29_CheckedStateChanged__DelegateSignature();
		void BndEvt__DebugUI_VannyMeter_Checkbox_K2Node_ComponentBoundEvent_30_CheckedStateChanged__DelegateSignature();
		void BndEvt__DebugUI_VannyMetter_Minus_Button_K2Node_ComponentBoundEvent_31_OnClicked__DelegateSignature();
		void BndEvt__DebugUI_VannyMetter_Plus_Button_K2Node_ComponentBoundEvent_32_OnClicked__DelegateSignature();
		void BndEvt__DebugUI_TeleportButton_New_K2Node_ComponentBoundEvent_34_OnClicked__DelegateSignature();
		void BndEvt__DebugUI_Coordinates_TextEntry_1_K2Node_ComponentBoundEvent_35_Text_1_Commited__DelegateSignature();
		void BndEvt__DebugUI_FlashlightPower_TextEntry_K2Node_ComponentBoundEvent_36_Text_1_Commited__DelegateSignature();
		void BndEvt__DebugUI_FreddyPower_TextEntry_K2Node_ComponentBoundEvent_37_Text_1_Commited__DelegateSignature();
		void BndEvt__DebugUI_SecurityLevel_TextEntry_K2Node_ComponentBoundEvent_38_Text_1_Commited__DelegateSignature();
		void BndEvt__DebugUI_FOV_TextEntry_K2Node_ComponentBoundEvent_40_Text_1_Commited__DelegateSignature();
		void BndEvt__DebugUI_FazerBlastTime_TextEntry_1_K2Node_ComponentBoundEvent_46_Text_1_Changed__DelegateSignature();
		void BndEvt__DebugUI_EquipMaintenanceTool_Button_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature();
		void BndEvt__DebugUI_ConsoleCommand_TextEntry_K2Node_ComponentBoundEvent_12_Text_1_Commited__DelegateSignature();
		void BndEvt__DebugUI_XboxOne_Quality_Button_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature();
		void BndEvt__DebugUI_XSS_Performance_Button_K2Node_ComponentBoundEvent_22_OnClicked__DelegateSignature();
		void BndEvt__DebugUI_XSS_Visual_Button_K2Node_ComponentBoundEvent_23_OnClicked__DelegateSignature();
		void BndEvt__DebugUI_XSX_Performance_Button_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature();
		void BndEvt__DebugUI_XSX_Visual_Button_K2Node_ComponentBoundEvent_33_OnClicked__DelegateSignature();
		void ExecuteUbergraph_DebugUI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
