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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum fnaf9.EInventoryItemSurvivalCategory
	 */
	enum class fnaf9_EInventoryItemSurvivalCategory : uint8_t
	{
		EInventoryItemSurvivalCategory__None                               = 0,
		EInventoryItemSurvivalCategory__Key                                = 1,
		EInventoryItemSurvivalCategory__Item                               = 2,
		EInventoryItemSurvivalCategory__FreddyUpgrade                      = 3,
		EInventoryItemSurvivalCategory__BotUpgrade                         = 4,
		EInventoryItemSurvivalCategory__GregoryUpgrade                     = 5,
		EInventoryItemSurvivalCategory__Bad                                = 6,
		EInventoryItemSurvivalCategory__Collectible_Common                 = 7,
		EInventoryItemSurvivalCategory__Collectible_Uncommon               = 8,
		EInventoryItemSurvivalCategory__Collectible_Rare                   = 9,
		EInventoryItemSurvivalCategory__Collectible_UltraRare              = 10,
		EInventoryItemSurvivalCategory__LobbyKey                           = 11,
		EInventoryItemSurvivalCategory__Flashlight                         = 12,
		EInventoryItemSurvivalCategory__EInventoryItemSurvivalCategory_MAX = 13
	};

	/**
	 * Enum fnaf9.EInventoryItemCategory
	 */
	enum class fnaf9_EInventoryItemCategory : uint8_t
	{
		EInventoryItemCategory__None                       = 0,
		EInventoryItemCategory__Message                    = 1,
		EInventoryItemCategory__Equipment                  = 2,
		EInventoryItemCategory__Food                       = 3,
		EInventoryItemCategory__Toys                       = 4,
		EInventoryItemCategory__Trophy                     = 5,
		EInventoryItemCategory__LostAndFound               = 6,
		EInventoryItemCategory__Character                  = 7,
		EInventoryItemCategory__Clothing                   = 8,
		EInventoryItemCategory__SecurityBadge              = 9,
		EInventoryItemCategory__PartyBadge                 = 10,
		EInventoryItemCategory__RetroCD                    = 11,
		EInventoryItemCategory__EInventoryItemCategory_MAX = 12
	};

	/**
	 * Enum fnaf9.EConditionFailReason
	 */
	enum class fnaf9_EConditionFailReason : uint8_t
	{
		EConditionFailReason__None                     = 0,
		EConditionFailReason__ItemRequired             = 1,
		EConditionFailReason__SecurityLevel            = 2,
		EConditionFailReason__PartyPass                = 3,
		EConditionFailReason__WrongPawn                = 4,
		EConditionFailReason__Error                    = 5,
		EConditionFailReason__EConditionFailReason_MAX = 6
	};

	/**
	 * Enum fnaf9.EMissionStatus
	 */
	enum class fnaf9_EMissionStatus : uint8_t
	{
		EMissionStatus__None               = 0,
		EMissionStatus__Active             = 1,
		EMissionStatus__Complete           = 2,
		EMissionStatus__EMissionStatus_MAX = 3
	};

	/**
	 * Enum fnaf9.EFNAFGameState
	 */
	enum class fnaf9_EFNAFGameState : uint8_t
	{
		EFNAFGameState__Normal              = 0,
		EFNAFGameState__MoonManLite         = 1,
		EFNAFGameState__MoonManIntermediate = 2,
		EFNAFGameState__MoonManDanger       = 3,
		EFNAFGameState__RepairGame          = 4,
		EFNAFGameState__OfficeGame          = 5,
		EFNAFGameState__BossGame            = 6,
		EFNAFGameState__PowerCycle          = 7,
		EFNAFGameState__EFNAFGameState_MAX  = 8
	};

	/**
	 * Enum fnaf9.ECameraAngleFlags
	 */
	enum class fnaf9_ECameraAngleFlags : uint8_t
	{
		ECameraAngleFlags__Horizontal            = 0,
		ECameraAngleFlags__Vertical              = 1,
		ECameraAngleFlags__HorizontalAndVertical = 2,
		ECameraAngleFlags__None                  = 3,
		ECameraAngleFlags__ECameraAngleFlags_MAX = 4
	};

	/**
	 * Enum fnaf9.EAlertType
	 */
	enum class fnaf9_EAlertType : uint8_t
	{
		EAlertType__Generic        = 0,
		EAlertType__Chica          = 1,
		EAlertType__Vanny          = 2,
		EAlertType__Vanessa        = 3,
		EAlertType__EAlertType_MAX = 4
	};

	/**
	 * Enum fnaf9.EDoorSide
	 */
	enum class fnaf9_EDoorSide : uint8_t
	{
		EDoorSide__Both          = 0,
		EDoorSide__None          = 1,
		EDoorSide__Front         = 2,
		EDoorSide__Back          = 3,
		EDoorSide__EDoorSide_MAX = 4
	};

	/**
	 * Enum fnaf9.EFNAFAISpawnType
	 */
	enum class fnaf9_EFNAFAISpawnType : uint8_t
	{
		EFNAFAISpawnType__Chica                = 0,
		EFNAFAISpawnType__Roxy                 = 1,
		EFNAFAISpawnType__Monty                = 2,
		EFNAFAISpawnType__Vanessa              = 3,
		EFNAFAISpawnType__DJMusicMan           = 4,
		EFNAFAISpawnType__Endo                 = 5,
		EFNAFAISpawnType__MapBot               = 6,
		EFNAFAISpawnType__Freddy               = 7,
		EFNAFAISpawnType__EFNAFAISpawnType_MAX = 8
	};

	/**
	 * Enum fnaf9.EFNAFGameType
	 */
	enum class fnaf9_EFNAFGameType : uint8_t
	{
		EFNAFGameType__Normal            = 0,
		EFNAFGameType__Survival          = 1,
		EFNAFGameType__DirectMinigame    = 2,
		EFNAFGameType__EFNAFGameType_MAX = 3
	};

	/**
	 * Enum fnaf9.ESWGInputDeviceType
	 */
	enum class fnaf9_ESWGInputDeviceType : uint8_t
	{
		ESWGInputDeviceType__MouseAndKeyboard        = 0,
		ESWGInputDeviceType__XBox                    = 1,
		ESWGInputDeviceType__Switch                  = 2,
		ESWGInputDeviceType__DUALSHOCK               = 3,
		ESWGInputDeviceType__ESWGInputDeviceType_MAX = 4
	};

	/**
	 * Enum fnaf9.ELevelArea
	 */
	enum class fnaf9_ELevelArea : uint8_t
	{
		ELevelArea__RoxyRacers     = 0,
		ELevelArea__GatorGolf      = 1,
		ELevelArea__FazerTag       = 2,
		ELevelArea__Lobby          = 3,
		ELevelArea__Atrium         = 4,
		ELevelArea__RockstarRow    = 5,
		ELevelArea__DayCare        = 6,
		ELevelArea__KidsCove       = 7,
		ELevelArea__ELevelArea_MAX = 8
	};

	/**
	 * Enum fnaf9.EPlayerPawnType
	 */
	enum class fnaf9_EPlayerPawnType : uint8_t
	{
		EPlayerPawnType__None                = 0,
		EPlayerPawnType__Flying              = 1,
		EPlayerPawnType__Gregory             = 2,
		EPlayerPawnType__Freddy              = 3,
		EPlayerPawnType__StaffBot            = 4,
		EPlayerPawnType__EPlayerPawnType_MAX = 5
	};

	/**
	 * Enum fnaf9.EFreddyUpgradeType
	 */
	enum class fnaf9_EFreddyUpgradeType : uint8_t
	{
		EFreddyUpgradeType__PowerUpgrade           = 0,
		EFreddyUpgradeType__MontyClaws             = 1,
		EFreddyUpgradeType__ChicaBeak              = 2,
		EFreddyUpgradeType__RoxyEyes               = 3,
		EFreddyUpgradeType__EFreddyUpgradeType_MAX = 4
	};

	/**
	 * Enum fnaf9.EHideObjectType
	 */
	enum class fnaf9_EHideObjectType : uint8_t
	{
		EHideObjectType__None                = 0,
		EHideObjectType__Table               = 1,
		EHideObjectType__Locker              = 2,
		EHideObjectType__PhotoBooth          = 3,
		EHideObjectType__FirstAidBooth       = 4,
		EHideObjectType__Stroller            = 5,
		EHideObjectType__ServiceCart         = 6,
		EHideObjectType__Kiosk               = 7,
		EHideObjectType__BeverageCart        = 8,
		EHideObjectType__EHideObjectType_MAX = 9
	};

	/**
	 * Enum fnaf9.ELightingScenario
	 */
	enum class fnaf9_ELightingScenario : uint8_t
	{
		ELightingScenario__None                  = 0,
		ELightingScenario__LightsOn              = 1,
		ELightingScenario__LightsOff             = 2,
		ELightingScenario__Dawn                  = 3,
		ELightingScenario__ELightingScenario_MAX = 4
	};

	/**
	 * Enum fnaf9.ELightScenarioArea
	 */
	enum class fnaf9_ELightScenarioArea : uint8_t
	{
		ELightScenarioArea__None                   = 0,
		ELightScenarioArea__Atrium                 = 1,
		ELightScenarioArea__BehindStage            = 2,
		ELightScenarioArea__Daycare                = 3,
		ELightScenarioArea__EastArcade             = 4,
		ELightScenarioArea__EastAtrium             = 5,
		ELightScenarioArea__FazerBlast             = 6,
		ELightScenarioArea__GatorGolf              = 7,
		ELightScenarioArea__Kitchen                = 8,
		ELightScenarioArea__MainLobby              = 9,
		ELightScenarioArea__RockstarRow            = 10,
		ELightScenarioArea__RoxyRaceway            = 11,
		ELightScenarioArea__Salon                  = 12,
		ELightScenarioArea__UtilityEast            = 13,
		ELightScenarioArea__UtilityWest            = 14,
		ELightScenarioArea__WestArcade             = 15,
		ELightScenarioArea__WestAtrium             = 16,
		ELightScenarioArea__ELightScenarioArea_MAX = 17
	};

	/**
	 * Enum fnaf9.ELocalizationCulture
	 */
	enum class fnaf9_ELocalizationCulture : uint8_t
	{
		English                  = 0,
		English_US_Computer      = 1,
		French                   = 2,
		French_Canada            = 3,
		German                   = 4,
		Italian                  = 5,
		Portuguese_Brazil        = 6,
		Russian                  = 7,
		Spanish_Latin_America    = 8,
		Spanish_Spain            = 9,
		ELocalizationCulture_MAX = 10
	};

	/**
	 * Enum fnaf9.EMissionInQueue
	 */
	enum class fnaf9_EMissionInQueue : uint8_t
	{
		EMissionInQueue__HasMoreMissions     = 0,
		EMissionInQueue__NoMoreMissions      = 1,
		EMissionInQueue__EMissionInQueue_MAX = 2
	};

	/**
	 * Enum fnaf9.EMissionUpdateType
	 */
	enum class fnaf9_EMissionUpdateType : uint8_t
	{
		EMissionUpdateType__NewMission             = 0,
		EMissionUpdateType__UpdateInfoState        = 1,
		EMissionUpdateType__Completed              = 2,
		EMissionUpdateType__EMissionUpdateType_MAX = 3
	};

	/**
	 * Enum fnaf9.EMMAnimCategory
	 */
	enum class fnaf9_EMMAnimCategory : uint8_t
	{
		EMMAnimCategory__None                = 0,
		EMMAnimCategory__GeneralFloor        = 1,
		EMMAnimCategory__GeneralCeiling      = 2,
		EMMAnimCategory__RightEdge           = 3,
		EMMAnimCategory__RightEdgeCrawl      = 4,
		EMMAnimCategory__LeftEdge            = 5,
		EMMAnimCategory__LeftEdgeCrawl       = 6,
		EMMAnimCategory__FloorEdge           = 7,
		EMMAnimCategory__CeilingEdge         = 8,
		EMMAnimCategory__ClosingIn           = 9,
		EMMAnimCategory__GeneralFloor_01     = 10,
		EMMAnimCategory__GeneralCeiling_01   = 11,
		EMMAnimCategory__RightEdge_01        = 12,
		EMMAnimCategory__RightEdgeCrawl_01   = 13,
		EMMAnimCategory__LeftEdge_01         = 14,
		EMMAnimCategory__LeftEdgeCrawl_01    = 15,
		EMMAnimCategory__FloorEdge_01        = 16,
		EMMAnimCategory__CeilingEdge_01      = 17,
		EMMAnimCategory__EMMAnimCategory_MAX = 18
	};

	/**
	 * Enum fnaf9.EConditionCheckType
	 */
	enum class fnaf9_EConditionCheckType : uint8_t
	{
		EConditionCheckType__All                     = 0,
		EConditionCheckType__Any                     = 1,
		EConditionCheckType__None                    = 2,
		EConditionCheckType__EConditionCheckType_MAX = 3
	};

	/**
	 * Enum fnaf9.ESightType
	 */
	enum class fnaf9_ESightType : uint8_t
	{
		ESightType__Cone           = 0,
		ESightType__FOV            = 1,
		ESightType__Frustum        = 2,
		ESightType__ESightType_MAX = 3
	};

	/**
	 * Enum fnaf9.EItemAreaType
	 */
	enum class fnaf9_EItemAreaType : uint8_t
	{
		EItemAreaType__Unknown           = 0,
		EItemAreaType__Pink              = 1,
		EItemAreaType__Yellow            = 2,
		EItemAreaType__Green             = 3,
		EItemAreaType__Red               = 4,
		EItemAreaType__Purple            = 5,
		EItemAreaType__Gold              = 6,
		EItemAreaType__EItemAreaType_MAX = 7
	};

	/**
	 * Enum fnaf9.ESurvivalDifficulty
	 */
	enum class fnaf9_ESurvivalDifficulty : uint8_t
	{
		ESurvivalDifficulty__Easy                    = 0,
		ESurvivalDifficulty__Medium                  = 1,
		ESurvivalDifficulty__Hard                    = 2,
		ESurvivalDifficulty__Nightmare               = 3,
		ESurvivalDifficulty__ESurvivalDifficulty_MAX = 4
	};

	/**
	 * Enum fnaf9.ECantStartMinigameReason
	 */
	enum class fnaf9_ECantStartMinigameReason : uint8_t
	{
		ECantStartMinigameReason__None                         = 0,
		ECantStartMinigameReason__AlreadyInMinigame            = 1,
		ECantStartMinigameReason__PlayerInDanger               = 2,
		ECantStartMinigameReason__MoonMan                      = 3,
		ECantStartMinigameReason__Survival                     = 4,
		ECantStartMinigameReason__ECantStartMinigameReason_MAX = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct fnaf9.FNAFAISettingInfo
	 * Size -> 0x0030
	 */
	struct FFNAFAISettingInfo
	{
	public:
		struct FSoftClassPath                                      StandardType;                                            // 0x0000(0x0018) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftClassPath                                      ShatteredType;                                           // 0x0018(0x0018) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct fnaf9.DoorEntryRequirements
	 * Size -> 0x0038
	 */
	struct FDoorEntryRequirements
	{
	public:
		TArray<fnaf9_EPlayerPawnType>                              RestrictedPawns;                                         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<fnaf9_EPlayerPawnType>                              PawnIgnoresConditions;                                   // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RequiredSecurityLevel;                                   // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RequiredInventoryItem;                                   // 0x0024(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		fnaf9_EDoorSide                                            ConditionDirection;                                      // 0x002C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInitiallyLockedPlayer;                                  // 0x002D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInitiallyLockedAI;                                      // 0x002E(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStartOpen;                                              // 0x002F(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsAutomaticDoorForPlayer;                               // 0x0030(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsAutomaticDoorForAI;                                   // 0x0031(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0N7B[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct fnaf9.PawnInDoorwayInfo
	 * Size -> 0x0001
	 */
	struct FPawnInDoorwayInfo
	{
	public:
		unsigned char                                              UnknownData_1GVW[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct fnaf9.FNAFEventSystemData
	 * Size -> 0x0050
	 */
	struct FFNAFEventSystemData
	{
	public:
		unsigned char                                              UnknownData_LT1S[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct fnaf9.AnimatronicState
	 * Size -> 0x000C
	 */
	struct FAnimatronicState
	{
	public:
		class FName                                                PathName;                                                // 0x0000(0x0008) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsShattered;                                            // 0x0008(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EA17[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct fnaf9.EndoSaveData
	 * Size -> 0x0018
	 */
	struct FEndoSaveData
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct fnaf9.FNAFWorldStateSaveData
	 * Size -> 0x0080
	 */
	struct FFNAFWorldStateSaveData
	{
	public:
		unsigned char                                              ActivatedObjects[0x50];                                  // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty
		bool                                                       bFreddyInWorld;                                          // 0x0050(0x0001) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6Z7B[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             FreddyPosition;                                          // 0x0054(0x000C) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            FreddyRotation;                                          // 0x0060(0x000C) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCanCallFreddy;                                          // 0x006C(0x0001) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanEnterExitFreddy;                                     // 0x006D(0x0001) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsInFreddy;                                             // 0x006E(0x0001) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseSickFreddy;                                          // 0x006F(0x0001) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPlayerUsedHidingSpace;                                  // 0x0070(0x0001) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanUsePowerStation;                                     // 0x0071(0x0001) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OQS8[0x2];                                   // 0x0072(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FreddyPatrolPoint;                                       // 0x0074(0x0004) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		fnaf9_EFNAFGameState                                       GameState;                                               // 0x0078(0x0001) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LVOK[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct fnaf9.BalloonWorldSaveData
	 * Size -> 0x0008
	 */
	struct FBalloonWorldSaveData
	{
	public:
		int32_t                                                    HighScore;                                               // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Played;                                                  // 0x0004(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Glitched;                                                // 0x0005(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_II30[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct fnaf9.ChicaFeedingFrenzySaveData
	 * Size -> 0x0008
	 */
	struct FChicaFeedingFrenzySaveData
	{
	public:
		int32_t                                                    HighScore;                                               // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Played;                                                  // 0x0004(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Glitched;                                                // 0x0005(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X4CB[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct fnaf9.MinigolfOneSaveData
	 * Size -> 0x0008
	 */
	struct FMinigolfOneSaveData
	{
	public:
		int32_t                                                    HighScore;                                               // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Played;                                                  // 0x0004(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AZMP[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct fnaf9.MinigolfTwoSaveData
	 * Size -> 0x0008
	 */
	struct FMinigolfTwoSaveData
	{
	public:
		int32_t                                                    HighScore;                                               // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Played;                                                  // 0x0004(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HEHN[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct fnaf9.MinigolfFullSaveData
	 * Size -> 0x0008
	 */
	struct FMinigolfFullSaveData
	{
	public:
		int32_t                                                    HighScore;                                               // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Played;                                                  // 0x0004(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B7L6[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct fnaf9.PrincessQuestOneSaveData
	 * Size -> 0x0002
	 */
	struct FPrincessQuestOneSaveData
	{
	public:
		bool                                                       Played;                                                  // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Glitched;                                                // 0x0001(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct fnaf9.PrincessQuestTwoSaveData
	 * Size -> 0x0002
	 */
	struct FPrincessQuestTwoSaveData
	{
	public:
		bool                                                       Played;                                                  // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Glitched;                                                // 0x0001(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct fnaf9.PrincessQuestThreeSaveData
	 * Size -> 0x0002
	 */
	struct FPrincessQuestThreeSaveData
	{
	public:
		bool                                                       Played;                                                  // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Glitched;                                                // 0x0001(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct fnaf9.ArcadeSaveData
	 * Size -> 0x0030
	 */
	struct FArcadeSaveData
	{
	public:
		struct FBalloonWorldSaveData                               BalloonWorld;                                            // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FChicaFeedingFrenzySaveData                         ChicaFeedingFrenzy;                                      // 0x0008(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FMinigolfOneSaveData                                MinigolfOne;                                             // 0x0010(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FMinigolfTwoSaveData                                MinigolfTwo;                                             // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FMinigolfFullSaveData                               MinigolfFull;                                            // 0x0020(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FPrincessQuestOneSaveData                           PrincessQuestOne;                                        // 0x0028(0x0002) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FPrincessQuestTwoSaveData                           PrincessQuestTwo;                                        // 0x002A(0x0002) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FPrincessQuestThreeSaveData                         PrincessQuestThree;                                      // 0x002C(0x0002) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VSK0[0x2];                                   // 0x002E(0x0002) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct fnaf9.FNAFItemCollectInfo
	 * Size -> 0x0028
	 */
	struct FFNAFItemCollectInfo
	{
	public:
		class FName                                                ItemName;                                                // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasViewed;                                               // 0x0008(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z8JE[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    CollectionTime;                                          // 0x0010(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GameHour;                                                // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GameMinute;                                              // 0x001C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlayIteration;                                           // 0x0020(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JYHM[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct fnaf9.FNAFPowerSaveData
	 * Size -> 0x0008
	 */
	struct FFNAFPowerSaveData
	{
	public:
		int32_t                                                    PowerLevel;                                              // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxPowerLevel;                                           // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct fnaf9.FNAFMissionState
	 * Size -> 0x0020
	 */
	struct FFNAFMissionState
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		fnaf9_EMissionStatus                                       Status;                                                  // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X4RC[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    InfoState;                                               // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            CompletedTasks;                                          // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct fnaf9.FreddyUpgradeState
	 * Size -> 0x0004
	 */
	struct FFreddyUpgradeState
	{
	public:
		bool                                                       HasPowerUpgrade;                                         // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasMontyClaws;                                           // 0x0001(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasChicaBeak;                                            // 0x0002(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasRoxyEyes;                                             // 0x0003(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct fnaf9.LightScenarioManagerData
	 * Size -> 0x0001
	 */
	struct FLightScenarioManagerData
	{
	public:
		fnaf9_ELightingScenario                                    Scenario;                                                // 0x0000(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct fnaf9.PowerStationSaveInfo
	 * Size -> 0x0010
	 */
	struct FPowerStationSaveInfo
	{
	public:
		int32_t                                                    PowerStationID;                                          // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GameIteration;                                           // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GameHour;                                                // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GameMinute;                                              // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct fnaf9.FNAFInventorySaveData
	 * Size -> 0x0088
	 */
	struct FFNAFInventorySaveData
	{
	public:
		TArray<struct FFNAFItemCollectInfo>                        InventoryItems;                                          // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FFNAFItemCollectInfo>                        Messages;                                                // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SecurityLevel;                                           // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UsedPartyPassCount;                                      // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumFlashCharges;                                         // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FlashlightInStationID;                                   // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TapesListenedTo[0x50];                                   // 0x0030(0x0050) UNKNOWN PROPERTY: SetProperty
		int32_t                                                    DishesBroken;                                            // 0x0080(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G8XU[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct fnaf9.FNAFAISaveData
	 * Size -> 0x0068
	 */
	struct FFNAFAISaveData
	{
	public:
		bool                                                       bShatteredChica;                                         // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShatteredRoxy;                                          // 0x0001(0x0001) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShatteredMonty;                                         // 0x0002(0x0001) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWorldSpawnEnabled;                                      // 0x0003(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAITeleportEnabled;                                      // 0x0004(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_35WN[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<fnaf9_EFNAFAISpawnType, struct FAnimatronicState>     AnimatronicStates;                                       // 0x0008(0x0050) SaveGame, NativeAccessSpecifierPublic
		TArray<struct FEndoSaveData>                               Endos;                                                   // 0x0058(0x0010) ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct fnaf9.MaterialArray
	 * Size -> 0x0010
	 */
	struct FMaterialArray
	{
	public:
		TArray<class UMaterialInterface*>                          MaterialArray;                                           // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct fnaf9.LightMeshMaterialInfo
	 * Size -> 0x00A0
	 */
	struct FLightMeshMaterialInfo
	{
	public:
		class FString                                              ListName;                                                // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              StaticMeshActor[0x10];                                   // 0x0010(0x0010) UNKNOWN PROPERTY: ArrayProperty
		TArray<class UMaterialInterface*>                          LightsOnMaterials;                                       // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMaterialInterface*>                          LightsOffMaterials;                                      // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMaterialInterface*>                          DawnMaterials;                                           // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, struct FMaterialArray>                 SpecialEventMaterials;                                   // 0x0050(0x0050) Edit, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct fnaf9.LightScenarioAreaInfo
	 * Size -> 0x0018
	 */
	struct FLightScenarioAreaInfo
	{
	public:
		class FName                                                LightsOn;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                LightsOff;                                               // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Dawn;                                                    // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct fnaf9.RandomItemAreaInfo
	 * Size -> 0x0024
	 */
	struct FRandomItemAreaInfo
	{
	public:
		int32_t                                                    NumLobbyKeys;                                            // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumKeys;                                                 // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumItems;                                                // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumFreddyUpgrades;                                       // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumBotUpgrades;                                          // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumGregoryUpgrade;                                       // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumCollectible;                                          // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumBad;                                                  // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumFlashlight;                                           // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct fnaf9.FNAFInventoryTableStruct
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FFNAFInventoryTableStruct : public FTableRowBase
	{
	public:
		fnaf9_EInventoryItemCategory                               Category;                                                // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		fnaf9_EInventoryItemSurvivalCategory                       SurvivalCategory;                                        // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PrizeVIP;                                                // 0x000A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VZH7[0x5];                                   // 0x000B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                ItemDisplayName;                                         // 0x0010(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class UTexture2D*                                          ItemIcon;                                                // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         ItemModel;                                               // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                ItemDescription;                                         // 0x0038(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct fnaf9.FNAFMessageTableStruct
	 * Size -> 0x0060 (FullSize[0x0068] - InheritedSize[0x0008])
	 */
	struct FFNAFMessageTableStruct : public FTableRowBase
	{
	public:
		class FText                                                Title;                                                   // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0020(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              Sound[0x28];                                             // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       InGame;                                                  // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZLUG[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct fnaf9.FNAFMissionInfo
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FFNAFMissionInfo : public FTableRowBase
	{
	public:
		class FText                                                DisplayName;                                             // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<class FName>                                        TaskNames;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bValidForSurvival;                                       // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowAllTasks;                                           // 0x0031(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YNVC[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        DependentMissions;                                       // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct fnaf9.AnimatronicExpectedData
	 * Size -> 0x000C
	 */
	struct FAnimatronicExpectedData
	{
	public:
		fnaf9_EFNAFAISpawnType                                     AIType;                                                  // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SW6K[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                PathName;                                                // 0x0004(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct fnaf9.AIDistanceResult
	 * Size -> 0x0010
	 */
	struct FAIDistanceResult
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		fnaf9_EFNAFAISpawnType                                     AIType;                                                  // 0x0008(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7456[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NavDistance;                                             // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct fnaf9.AIRoomEntryInfo
	 * Size -> 0x0010
	 */
	struct FAIRoomEntryInfo
	{
	public:
		class APawn*                                               AIPawn;                                                  // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ARoomAreaBase*                                       RoomEntering;                                            // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct fnaf9.ConditionResultDelegates
	 * Size -> 0x0010
	 */
	struct FConditionResultDelegates
	{
	public:
		unsigned char                                              UnknownData_7LZJ[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct fnaf9.MissionFreddySettings
	 * Size -> 0x0030
	 */
	struct FMissionFreddySettings
	{
	public:
		bool                                                       bInsideFreddy;                                           // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanEnterExitFreddy;                                     // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanCallFreddy;                                          // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSickFreddy;                                             // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IL1Z[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              LocationActor[0x28];                                     // 0x0004(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	};

	/**
	 * ScriptStruct fnaf9.MissionClockSettings
	 * Size -> 0x000C
	 */
	struct FMissionClockSettings
	{
	public:
		bool                                                       bClockRunning;                                           // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U3TL[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Hour;                                                    // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Minute;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct fnaf9.FNAFMissionTaskInfo
	 * Size -> 0x00D0 (FullSize[0x00D8] - InheritedSize[0x0008])
	 */
	struct FFNAFMissionTaskInfo : public FTableRowBase
	{
	public:
		class FText                                                TaskTitle;                                               // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                TaskDetails;                                             // 0x0020(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FName                                                LinkedMessage;                                           // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        ItemsEarned;                                             // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        ActivatedStates;                                         // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        DeactivatedStates;                                       // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              LocationActor[0x28];                                     // 0x0070(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FMissionFreddySettings                              FreddySettings;                                          // 0x0098(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FMissionClockSettings                               ClockSettings;                                           // 0x00C8(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bSkipEnabled;                                            // 0x00D4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DL5K[0x3];                                   // 0x00D5(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct fnaf9.FNAFSaveslotsData
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FFNAFSaveslotsData : public FTableRowBase
	{
	public:
		class FText                                                SlotNameByUser;                                          // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct fnaf9.InstructionCardRow
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FInstructionCardRow : public FTableRowBase
	{
	public:
		class UTexture2D*                                          DefaultTexture2D;                                        // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<fnaf9_ESWGInputDeviceType, class UTexture2D*>         PerControllerTexture2D;                                  // 0x0010(0x0050) Edit, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct fnaf9.MissionDisplayUpdateInfo
	 * Size -> 0x0078
	 */
	struct FMissionDisplayUpdateInfo
	{
	public:
		fnaf9_EMissionUpdateType                                   UpdateType;                                              // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4489[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                MissionName;                                             // 0x0004(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PQB9[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFNAFMissionInfo                                    MissionInfo;                                             // 0x0010(0x0048) BlueprintVisible, NativeAccessSpecifierPublic
		struct FFNAFMissionState                                   MissionState;                                            // 0x0058(0x0020) BlueprintVisible, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct fnaf9.RichControlButtonRow
	 * Size -> 0x00D8 (FullSize[0x00E0] - InheritedSize[0x0008])
	 */
	struct FRichControlButtonRow : public FTableRowBase
	{
	public:
		struct FSlateBrush                                         DefaultBrush;                                            // 0x0008(0x0088) Edit, NativeAccessSpecifierPublic
		TMap<fnaf9_ESWGInputDeviceType, struct FSlateBrush>        PerControllerBrush;                                      // 0x0090(0x0050) Edit, NativeAccessSpecifierPublic

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
