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
	 * WidgetBlueprintGeneratedClass PlayerHUD.PlayerHUD_C
	 * Size -> 0x0210 (FullSize[0x0440] - InheritedSize[0x0230])
	 */
	class UPlayerHUD_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    MoveInformationText_TopRight;                            // 0x0238(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    MoveMissionHUDAnim;                                      // 0x0240(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    ShowInstructionsAnim;                                    // 0x0248(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    OutOfStaminaAnim;                                        // 0x0250(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    BadgeAnim;                                               // 0x0258(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    HoldSetOpacity;                                          // 0x0260(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    HoldAccept;                                              // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    HoldCancel;                                              // 0x0270(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    InformationAnim;                                         // 0x0278(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class URichTextBlock*                                      BadgeUpdateInformation;                                  // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        ExtraInfoPanel;                                          // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              HoldProgress;                                            // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Hours;                                                   // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      Informational;                                           // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              InformationBackground;                                   // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              InformationItemImage;                                    // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        InformationPanel;                                        // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Minutes;                                                 // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMissionHUD_C*                                       MissionHUD;                                              // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_TextAndIcons_C*                                  ObjectiveDisplayUpgrade;                                 // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      ObjectiveList;                                           // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          OutOfStamina;                                            // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              RequirementBackground;                                   // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              RequirementItemImage;                                    // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        RequirementPanel;                                        // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      RequirementText;                                         // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCircularThrobber*                                   SaveIndicator;                                           // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UProgressBar*                                        StaminaBar;                                              // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          VersionNumber;                                           // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWI_InstructionCard_C*                               WI_InstructionCard;                                      // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       Loaded_Kitchen;                                          // 0x0328(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_O79Z[0x3];                                   // 0x0329(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                InteractionsTableID;                                     // 0x032C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TXG6[0x4];                                   // 0x0334(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            HoldProgressMaterial;                                    // 0x0338(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        HideObjectiveListTimer;                                  // 0x0340(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        OriginalStaminaColor;                                    // 0x0348(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsRunningHold;                                           // 0x0358(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_13GD[0x7];                                   // 0x0359(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<E_InstructionCard_Type_E_InstructionCard_Type>      InstructionCardsList;                                    // 0x0360(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		TMap<class FString, class UTexture2D*>                     CollectedItemsQue;                                       // 0x0370(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FText>                                        CollectedItemNameList;                                   // 0x03C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		TArray<class UTexture2D*>                                  CollectedItemImageList;                                  // 0x03D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FTimerHandle                                        HideRequirementPanelTimer;                               // 0x03E0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UObject*                                             LastInteractable;                                        // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class FString, class FString>                         KeyIconMappings;                                         // 0x03F0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void GetInteractViewLocation(bool* Valid, struct FVector* WorldLocation);
		void GetInteractViewAngles(fnaf9_ECameraAngleFlags* AnglesToCheck);
		void GetHUDInstruction(class FText* Instruction);
		void GetInteractibleType(InteractibleType_EInteractibleType* Type, InteractiblePressType_EInteractiblePressType* PressType);
		void CanPlayerInteract(bool* CanInteract, fnaf9_EConditionFailReason* CantReason);
		void UpdateUIOnTick(bool* Output);
		void GetInstructionOverride(class FText* Instruction);
		void InteractIgnoresTrace(bool* IgnoreTrace);
		void CheckPlayerPawnRestrictions(TArray<fnaf9_EPlayerPawnType> TargetArray, class FText* Result);
		void ResetProgressWheel();
		float Get_Stamina_Percent();
		void GetItemOrMessageName(const class FName& InputPin, class FText* ItemDisplayName, class UTexture2D** Item_Display_Icon);
		void Finished_150D8164404ADE44D3D17D8F55A7B8A7();
		void Finished_DB237C8C45C17E7AA2665584748A4975();
		void OnFailure_BF721F5A4230E920D7AB0496A5DE48C6();
		void OnSuccess_BF721F5A4230E920D7AB0496A5DE48C6();
		void OnFailure_AB03661843CC503A6CB2D5BF99086A7C(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnSuccess_AB03661843CC503A6CB2D5BF99086A7C(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnFailure_7DBB82C44AE86FE3123C8CA2C34C6B7D();
		void OnSuccess_7DBB82C44AE86FE3123C8CA2C34C6B7D();
		void OnFailure_B754F15B4449FCC342E9AAB708667094(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnSuccess_B754F15B4449FCC342E9AAB708667094(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void Finished_185BD7B94C5005FD6F01E39AB745E86F();
		void Finished_10D10B594F13742D8823F39890BDEC3D();
		void Finished_7533C45845F3B117AD0CED818D58DFA6();
		void On_Trailer_Mode_Changed(bool TrailerEnabled);
		void Hide_Objective_List();
		void On_Party_Level_Updated(int32_t NewLevel);
		void Set_Skip_Info();
		void SetRechargeStationText(bool On);
		void On_Item_Collected(const class FName& ItemName, const struct FFNAFInventoryTableStruct& InventoryItemInfo);
		void Setup_Requirement_Display(fnaf9_EConditionFailReason Requirements, class UObject* Interactable);
		void Stop_Requirement_Display();
		void Set_Informational_Message(const class FText& InText);
		void Hide_Informational_Message();
		void On_Stamina_Depleted();
		void On_Stamina_Replenished();
		void On_Security_Level_Updated(int32_t NewLevel);
		void ShowInstructions(E_InstructionCard_Type_E_InstructionCard_Type Type);
		void HideInstructions();
		void PlayInstructionCardAnim();
		void Setup_Objective_Display(const class FText& InText);
		void Stop_Objective_Display();
		void Init_Hold_Progress();
		void Complete_Hold_Progress();
		void Cancel_Hold_Progress();
		void Update_Hold_Progress(float Percent);
		void ShowCollectedItemDisplay();
		void On_Information_Anim_Finished();
		void DebugStopShowingItemsCollected();
		void Setup_Collected_Display(const class FName& CollectedItem);
		void MoveMissionHUD();
		void OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController);
		void Setup_Interactible_Display(class UObject* Interactible);
		void On_End_Save();
		void On_Begin_Save();
		void Update(int32_t Level, bool HasRtx, bool Has2080);
		void OnPlayerInteractCancel();
		void HideRequirementPanel();
		void On_Party_Pass_Used(int32_t NewLevel);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void Construct();
		void OnPlayerHoverExit(class APawn* PlayerPawn);
		void OnPlayerHoverEnter(class APawn* PlayerPawn);
		void ExecuteUbergraph_PlayerHUD(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
