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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum fnaf9.EInventoryItemSurvivalCategory
	 */
	enum class EInventoryItemSurvivalCategory : uint8_t
	{
		None                  = 0,
		Key                   = 1,
		Item                  = 2,
		FreddyUpgrade         = 3,
		BotUpgrade            = 4,
		GregoryUpgrade        = 5,
		Bad                   = 6,
		Collectible_Common    = 7,
		Collectible_Uncommon  = 8,
		Collectible_Rare      = 9,
		Collectible_UltraRare = 10,
		LobbyKey              = 11,
		Flashlight            = 12,
		MAX                   = 13
	};

	/**
	 * Enum fnaf9.EInventoryItemCategory
	 */
	enum class EInventoryItemCategory : uint8_t
	{
		None             = 0,
		Message          = 1,
		Equipment        = 2,
		Food             = 3,
		Toys             = 4,
		Trophy           = 5,
		LostAndFound     = 6,
		Character        = 7,
		Clothing         = 8,
		SecurityBadge    = 9,
		PartyBadge       = 10,
		RetroCD          = 11,
		CollectibleDLC   = 12,
		RealCollectables = 13,
		ARCollectables   = 14,
		MAX              = 15
	};

	/**
	 * Enum fnaf9.EConditionFailReason
	 */
	enum class EConditionFailReason : uint8_t
	{
		None          = 0,
		ItemRequired  = 1,
		SecurityLevel = 2,
		PartyPass     = 3,
		WrongPawn     = 4,
		Error         = 5,
		MAX           = 6
	};

	/**
	 * Enum fnaf9.EMissionStatus
	 */
	enum class EMissionStatus : uint8_t
	{
		None     = 0,
		Active   = 1,
		Complete = 2,
		MAX      = 3
	};

	/**
	 * Enum fnaf9.EFNAFGameState
	 */
	enum class EFNAFGameState : uint8_t
	{
		Normal              = 0,
		MoonManLite         = 1,
		MoonManIntermediate = 2,
		MoonManDanger       = 3,
		RepairGame          = 4,
		OfficeGame          = 5,
		BossGame            = 6,
		PowerCycle          = 7,
		MAX                 = 8
	};

	/**
	 * Enum fnaf9.ECameraAngleFlags
	 */
	enum class ECameraAngleFlags : uint8_t
	{
		Horizontal            = 0,
		Vertical              = 1,
		HorizontalAndVertical = 2,
		None                  = 3,
		MAX                   = 4
	};

	/**
	 * Enum fnaf9.EAlertType
	 */
	enum class EAlertType : uint8_t
	{
		Generic = 0,
		Chica   = 1,
		Vanny   = 2,
		Vanessa = 3,
		MAX     = 4
	};

	/**
	 * Enum fnaf9.EDoorSide
	 */
	enum class EDoorSide : uint8_t
	{
		Both  = 0,
		None  = 1,
		Front = 2,
		Back  = 3,
		MAX   = 4
	};

	/**
	 * Enum fnaf9.EFNAFAISubType
	 */
	enum class EFNAFAISubType : uint8_t
	{
		Normal             = 0,
		Shattered          = 1,
		Ruined_SingleSpawn = 2,
		Ruined_Patrol      = 3,
		None               = 4,
		MAX                = 5
	};

	/**
	 * Enum fnaf9.EFNAFAISpawnType
	 */
	enum class EFNAFAISpawnType : uint8_t
	{
		Chica            = 0,
		Roxy             = 1,
		Monty            = 2,
		Vanessa          = 3,
		DJMusicMan       = 4,
		Endo             = 5,
		MapBot           = 6,
		Freddy           = 7,
		LittleDJMusicMan = 8,
		VannyStaffBots   = 9,
		DLC_Rabbit       = 10,
		Sun_And_Moon     = 11,
		MaskBot          = 12,
		HeadlessFreddy   = 13,
		Mimic            = 14,
		None             = 15,
		MAX              = 16
	};

	/**
	 * Enum fnaf9.EFNAFGameType
	 */
	enum class EFNAFGameType : uint8_t
	{
		Normal         = 0,
		ChowdaMode     = 1,
		DirectMinigame = 2,
		MAX            = 3
	};

	/**
	 * Enum fnaf9.ESWGInputDeviceType
	 */
	enum class ESWGInputDeviceType : uint8_t
	{
		MouseAndKeyboard = 0,
		XBox             = 1,
		Switch           = 2,
		DUALSHOCK        = 3,
		MAX              = 4
	};

	/**
	 * Enum fnaf9.ELevelArea
	 */
	enum class ELevelArea : uint8_t
	{
		RoxyRacers  = 0,
		GatorGolf   = 1,
		FazerTag    = 2,
		Lobby       = 3,
		Atrium      = 4,
		RockstarRow = 5,
		DayCare     = 6,
		KidsCove    = 7,
		MAX         = 8
	};

	/**
	 * Enum fnaf9.EPlayerPawnType
	 */
	enum class EPlayerPawnType : uint8_t
	{
		None     = 0,
		Flying   = 1,
		Gregory  = 2,
		Freddy   = 3,
		StaffBot = 4,
		Cassie   = 5,
		MAX      = 6
	};

	/**
	 * Enum fnaf9.FNAFPS5Trigger
	 */
	enum class EFNAFPS5Trigger : uint8_t
	{
		FNAFPS5TriggerLeft               = 0,
		FNAFPS5TriggerRight              = 1,
		FNAFPS5TriggerFNAFPS5Trigger_MAX = 2
	};

	/**
	 * Enum fnaf9.EFreddyUpgradeType
	 */
	enum class EFreddyUpgradeType : uint8_t
	{
		PowerUpgrade = 0,
		MontyClaws   = 1,
		ChicaBeak    = 2,
		RoxyEyes     = 3,
		MAX          = 4
	};

	/**
	 * Enum fnaf9.EMinigameType
	 */
	enum class EMinigameType : uint8_t
	{
		None          = 0,
		MinigameOne   = 1,
		MinigameTwo   = 2,
		MinigameThree = 3,
		MinigameFour  = 4,
		MAX           = 5
	};

	/**
	 * Enum fnaf9.EHideObjectType
	 */
	enum class EHideObjectType : uint8_t
	{
		None          = 0,
		Table         = 1,
		Locker        = 2,
		PhotoBooth    = 3,
		FirstAidBooth = 4,
		Stroller      = 5,
		ServiceCart   = 6,
		Kiosk         = 7,
		BeverageCart  = 8,
		MAX           = 9
	};

	/**
	 * Enum fnaf9.EMapArea
	 */
	enum class EMapArea : uint8_t
	{
		Lobby                       = 0,
		LobbySecondFloor            = 1,
		LobbyElevatorUnload         = 2,
		LobbyElevatorTop            = 3,
		FoodCourt                   = 4,
		FCPipeToGG                  = 5,
		GatorGolfStomachRoom        = 6,
		GatorGolfBathrooms          = 7,
		GatorGolfMontyCamera        = 8,
		GatorGolfStairs             = 9,
		GatorGolfMainArea           = 10,
		GatorGolfKitchen            = 11,
		GatorGolfBackHall           = 12,
		GatorGolfBackOffice         = 13,
		DaycareLoadWarehouse        = 14,
		DaycareTransitionRoom       = 15,
		UnloadGolfAtDCEntrance      = 16,
		DaycarePlayArea             = 17,
		DaycareBallPitEntrance      = 18,
		DaycareBallPitSlide         = 19,
		DaycareEclipseTransition    = 20,
		DaycarePlayAreaExit         = 21,
		DaycareTheater              = 22,
		DaycareUnloadPlayArea       = 23,
		CatwalksVent                = 24,
		MontyRide                   = 25,
		CatwalksMainArea            = 26,
		CatwalksSectionThree        = 27,
		CupcakesPrepRoom            = 28,
		Cupcakes                    = 29,
		CupcakesUnloadPrepRoom      = 30,
		CupcakesPrepToMain          = 31,
		CupcakesBackRoom            = 32,
		ServerRoom                  = 33,
		Salon                       = 34,
		SalonLogRide                = 35,
		LogRide                     = 36,
		UnloadLogRide               = 37,
		RacewayPartOne              = 38,
		UnloadRacewayPartOne        = 39,
		BonnieBowl                  = 40,
		FazerBlastOffice            = 41,
		FazerBlastOfficeVent        = 42,
		FazerBlastOfficeCatwalks    = 43,
		FazerBlastMainArea          = 44,
		FazerblastExitVent          = 45,
		FazerBlastTransition        = 46,
		RacewayPartTwoDoors         = 47,
		RacewayPartTwoGarages       = 48,
		RacewayUnloadTransitionRoom = 49,
		RacewayPartTwo              = 50,
		Sinkhole                    = 51,
		MAX                         = 52
	};

	/**
	 * Enum fnaf9.ELightingScenario
	 */
	enum class ELightingScenario : uint8_t
	{
		None      = 0,
		LightsOn  = 1,
		LightsOff = 2,
		Dawn      = 3,
		DLC       = 4,
		MAX       = 5
	};

	/**
	 * Enum fnaf9.ELightScenarioArea
	 */
	enum class ELightScenarioArea : uint8_t
	{
		None        = 0,
		Atrium      = 1,
		BehindStage = 2,
		Daycare     = 3,
		EastArcade  = 4,
		EastAtrium  = 5,
		FazerBlast  = 6,
		GatorGolf   = 7,
		Kitchen     = 8,
		MainLobby   = 9,
		RockstarRow = 10,
		RoxyRaceway = 11,
		Salon       = 12,
		UtilityEast = 13,
		UtilityWest = 14,
		WestArcade  = 15,
		WestAtrium  = 16,
		MAX         = 17
	};

	/**
	 * Enum fnaf9.ELocalizationCulture
	 */
	enum class ELocalizationCulture : uint8_t
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
		Spanish_Mexico           = 10,
		Spanish_Argentina        = 11,
		Spanish_Chile            = 12,
		Spanish_Colombia         = 13,
		Chinese_Simple_Hans      = 14,
		Chinese_Traditional_Hant = 15,
		Chinese_Hong_Kong        = 16,
		Korean                   = 17,
		Japanese                 = 18,
		MAX                      = 19
	};

	/**
	 * Enum fnaf9.EMissionInQueue
	 */
	enum class EMissionInQueue : uint8_t
	{
		HasMoreMissions = 0,
		NoMoreMissions  = 1,
		MAX             = 2
	};

	/**
	 * Enum fnaf9.EMissionUpdateType
	 */
	enum class EMissionUpdateType : uint8_t
	{
		NewMission      = 0,
		UpdateInfoState = 1,
		Completed       = 2,
		MAX             = 3
	};

	/**
	 * Enum fnaf9.EMMAnimCategory
	 */
	enum class EMMAnimCategory : uint8_t
	{
		None              = 0,
		GeneralFloor      = 1,
		GeneralCeiling    = 2,
		RightEdge         = 3,
		RightEdgeCrawl    = 4,
		LeftEdge          = 5,
		LeftEdgeCrawl     = 6,
		FloorEdge         = 7,
		CeilingEdge       = 8,
		ClosingIn         = 9,
		GeneralFloor_01   = 10,
		GeneralCeiling_01 = 11,
		RightEdge_01      = 12,
		RightEdgeCrawl_01 = 13,
		LeftEdge_01       = 14,
		LeftEdgeCrawl_01  = 15,
		FloorEdge_01      = 16,
		CeilingEdge_01    = 17,
		MAX               = 18
	};

	/**
	 * Enum fnaf9.EConditionCheckType
	 */
	enum class EConditionCheckType : uint8_t
	{
		All  = 0,
		Any  = 1,
		None = 2,
		MAX  = 3
	};

	/**
	 * Enum fnaf9.ESightType
	 */
	enum class ESightType : uint8_t
	{
		Cone    = 0,
		FOV     = 1,
		Frustum = 2,
		MAX     = 3
	};

	/**
	 * Enum fnaf9.EItemAreaType
	 */
	enum class EItemAreaType : uint8_t
	{
		Unknown = 0,
		Pink    = 1,
		Yellow  = 2,
		Green   = 3,
		Red     = 4,
		Purple  = 5,
		Gold    = 6,
		MAX     = 7
	};

	/**
	 * Enum fnaf9.ESurvivalDifficulty
	 */
	enum class ESurvivalDifficulty : uint8_t
	{
		Easy      = 0,
		Medium    = 1,
		Hard      = 2,
		Nightmare = 3,
		MAX       = 4
	};

	/**
	 * Enum fnaf9.ECantStartMinigameReason
	 */
	enum class ECantStartMinigameReason : uint8_t
	{
		None              = 0,
		AlreadyInMinigame = 1,
		PlayerInDanger    = 2,
		MoonMan           = 3,
		Survival          = 4,
		MAX               = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct fnaf9.FNAFAISettingInfo
	 * Size -> 0x0060
	 */
	struct FFNAFAISettingInfo
	{
	public:
		struct FSoftClassPath                                      StandardType;                                            // 0x0000(0x0018) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftClassPath                                      ShatteredType;                                           // 0x0018(0x0018) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftClassPath                                      RuinedSingleSpawnType;                                   // 0x0030(0x0018) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftClassPath                                      RuinedPatrolType;                                        // 0x0048(0x0018) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct fnaf9.DoorEntryRequirements
	 * Size -> 0x0038
	 */
	struct FDoorEntryRequirements
	{
	public:
		TArray<EPlayerPawnType>                                    RestrictedPawns;                                         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<EPlayerPawnType>                                    PawnIgnoresConditions;                                   // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    RequiredSecurityLevel;                                   // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RequiredInventoryItem;                                   // 0x0024(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDoorSide                                                  ConditionDirection;                                      // 0x002C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInitiallyLockedPlayer;                                  // 0x002D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInitiallyLockedAI;                                      // 0x002E(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStartOpen;                                              // 0x002F(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsAutomaticDoorForPlayer;                               // 0x0030(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsAutomaticDoorForAI;                                   // 0x0031(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanCloseDoorForAI;                                      // 0x0032(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5G8U[0x5];                                   // 0x0033(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct fnaf9.PawnInDoorwayInfo
	 * Size -> 0x0001
	 */
	struct FPawnInDoorwayInfo
	{
	public:
		unsigned char                                              UnknownData_YSFB[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct fnaf9.FNAFEventSystemData
	 * Size -> 0x0050
	 */
	struct FFNAFEventSystemData
	{
	public:
		unsigned char                                              UnknownData_YENK[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_2JTB[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_1079[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EFNAFAISpawnType, struct FAnimatronicState>           AnimatronicStates;                                       // 0x0008(0x0050) SaveGame, NativeAccessSpecifierPublic
		TArray<struct FEndoSaveData>                               Endos;                                                   // 0x0058(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct fnaf9.FNAFWorldStateSaveData
	 * Size -> 0x00D0
	 */
	struct FFNAFWorldStateSaveData
	{
	public:
		TMap<int32_t, class FString>                               MazercisePanelLocations;                                 // 0x0000(0x0050) BlueprintVisible, SaveGame, NativeAccessSpecifierPublic
		unsigned char                                              ActivatedObjects[0x50];                                  // 0x0050(0x0050) UNKNOWN PROPERTY: SetProperty
		bool                                                       bFreddyInWorld;                                          // 0x00A0(0x0001) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JTEX[0x3];                                   // 0x00A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             FreddyPosition;                                          // 0x00A4(0x000C) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            FreddyRotation;                                          // 0x00B0(0x000C) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCanCallFreddy;                                          // 0x00BC(0x0001) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanEnterExitFreddy;                                     // 0x00BD(0x0001) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsInFreddy;                                             // 0x00BE(0x0001) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseSickFreddy;                                          // 0x00BF(0x0001) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPlayerUsedHidingSpace;                                  // 0x00C0(0x0001) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanUsePowerStation;                                     // 0x00C1(0x0001) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J3YX[0x2];                                   // 0x00C2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FreddyPatrolPoint;                                       // 0x00C4(0x0004) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFNAFGameState                                             GameState;                                               // 0x00C8(0x0001) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AAN9[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_UJ74[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_AWC4[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_OULA[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_QUY6[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_O1JN[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_JHXX[0x2];                                   // 0x002E(0x0002) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_8QJ8[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    CollectionTime;                                          // 0x0010(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GameHour;                                                // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GameMinute;                                              // 0x001C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlayIteration;                                           // 0x0020(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W5KC[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct fnaf9.FNAFInventorySaveData
	 * Size -> 0x0088
	 */
	struct FFNAFInventorySaveData
	{
	public:
		TArray<struct FFNAFItemCollectInfo>                        InventoryItems;                                          // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FFNAFItemCollectInfo>                        Messages;                                                // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    SecurityLevel;                                           // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UsedPartyPassCount;                                      // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumFlashCharges;                                         // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FlashlightInStationID;                                   // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TapesListenedTo[0x50];                                   // 0x0030(0x0050) UNKNOWN PROPERTY: SetProperty
		int32_t                                                    DishesBroken;                                            // 0x0080(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TPMK[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (PADDING)
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
		EMissionStatus                                             Status;                                                  // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5GTW[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    InfoState;                                               // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            CompletedTasks;                                          // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
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
		ELightingScenario                                          Scenario;                                                // 0x0000(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
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
	 * ScriptStruct fnaf9.DLC_RabbitSaveData
	 * Size -> 0x005C
	 */
	struct FDLC_RabbitSaveData
	{
	public:
		float                                                      spawnTime;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpawnRadius;                                             // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpawnInViewChance;                                       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MoveLength;                                              // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PauseTime;                                               // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PauseRate;                                               // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InnerRange;                                              // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OuterRange;                                              // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StareTime;                                               // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AlertPhaseLength;                                        // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimatronicSpawnDistance;                                // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimatronicDespawnRadius;                                // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CooldownPhaseOne;                                        // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CooldownPhaseTwo;                                        // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasBeenAgitatedByWalkieTalkie;                           // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I3CL[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DespawnTime;                                             // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SoftJumpscareTime;                                       // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SoftJumpscareChance;                                     // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InhibitorRadius;                                         // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpawnCloseChance;                                        // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpawnCloseAlertDelay;                                    // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpawnCloseMaxDistance;                                   // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TrailSpeed;                                              // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct fnaf9.AnimatronicTypeData
	 * Size -> 0x0002
	 */
	struct FAnimatronicTypeData
	{
	public:
		EFNAFAISpawnType                                           AIType;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFNAFAISubType                                             AISubType;                                               // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct fnaf9.FNAFRuinAISaveData
	 * Size -> 0x0078
	 */
	struct FFNAFRuinAISaveData
	{
	public:
		struct FDLC_RabbitSaveData                                 DLC_RabbitState;                                         // 0x0000(0x005C) BlueprintVisible, BlueprintReadOnly, SaveGame, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MQIC[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAnimatronicTypeData>                        DLC_Rabbit_TypesToAlert;                                 // 0x0060(0x0010) BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		int32_t                                                    DLC_Rabbit_AlertNumber;                                  // 0x0070(0x0004) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MWWM[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct fnaf9.MaterialArray
	 * Size -> 0x0010
	 */
	struct FMaterialArray
	{
	public:
		TArray<class UMaterialInterface*>                          MaterialArray;                                           // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
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
		TArray<class UMaterialInterface*>                          LightsOnMaterials;                                       // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UMaterialInterface*>                          LightsOffMaterials;                                      // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UMaterialInterface*>                          DawnMaterials;                                           // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
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
	 * ScriptStruct fnaf9.FNAFInventoryTableStruct
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FFNAFInventoryTableStruct : public FTableRowBase
	{
	public:
		EInventoryItemCategory                                     Category;                                                // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInventoryItemSurvivalCategory                             SurvivalCategory;                                        // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PrizeVIP;                                                // 0x000A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1VLE[0x5];                                   // 0x000B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                ItemDisplayName;                                         // 0x0010(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class UTexture2D*                                          ItemIcon;                                                // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         ItemModel;                                               // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                ItemDescription;                                         // 0x0038(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    Chapter;                                                 // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XVOS[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_0VWZ[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct fnaf9.FNAFMissionInfo
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FFNAFMissionInfo : public FTableRowBase
	{
	public:
		class FText                                                DisplayName;                                             // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<class FName>                                        TaskNames;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bValidForSurvival;                                       // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowAllTasks;                                           // 0x0031(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T1J3[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        DependentMissions;                                       // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct fnaf9.AIDLC_RabbitTableStruct
	 * Size -> 0x0060 (FullSize[0x0068] - InheritedSize[0x0008])
	 */
	struct FAIDLC_RabbitTableStruct : public FTableRowBase
	{
	public:
		float                                                      InnerRange;                                              // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OuterRange;                                              // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      spawnTime;                                               // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpawnRadius;                                             // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpawnInViewChance;                                       // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MoveLength;                                              // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PauseTime;                                               // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PauseRate;                                               // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StareTime;                                               // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AlertPhaseLength;                                        // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimatronicSpawnDistance;                                // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimatronicDespawnRadius;                                // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CooldownPhaseOne;                                        // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CooldownPhaseTwo;                                        // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasBeenAgitatedByWalkieTalkie;                           // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_13T6[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DespawnTime;                                             // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SoftJumpscareTime;                                       // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SoftJumpscareChance;                                     // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InhibitorRadius;                                         // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpawnCloseChance;                                        // 0x0054(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpawnCloseAlertDelay;                                    // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpawnCloseMaxDistance;                                   // 0x005C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TrailSpeed;                                              // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SWMH[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct fnaf9.AnimatronicExpectedData
	 * Size -> 0x000C
	 */
	struct FAnimatronicExpectedData
	{
	public:
		EFNAFAISpawnType                                           AIType;                                                  // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0U99[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		EFNAFAISpawnType                                           AIType;                                                  // 0x0008(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D24W[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_O6UB[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct fnaf9.DLC_RabbitEnemySequenceDataStruct
	 * Size -> 0x0010
	 */
	struct FDLC_RabbitEnemySequenceDataStruct
	{
	public:
		class AActor*                                              InterfaceImplementor;                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFNAFAISpawnType                                           EnemyType;                                               // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NKSE[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
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
		unsigned char                                              UnknownData_D90F[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              LocationActor[0x28];                                     // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct fnaf9.MissionClockSettings
	 * Size -> 0x000C
	 */
	struct FMissionClockSettings
	{
	public:
		bool                                                       bClockRunning;                                           // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GHGP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		TArray<class FName>                                        ItemsEarned;                                             // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        ActivatedStates;                                         // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        DeactivatedStates;                                       // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              LocationActor[0x28];                                     // 0x0070(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FMissionFreddySettings                              FreddySettings;                                          // 0x0098(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FMissionClockSettings                               ClockSettings;                                           // 0x00C8(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bSkipEnabled;                                            // 0x00D4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5FHR[0x3];                                   // 0x00D5(0x0003) MISSED OFFSET (PADDING)
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
		TMap<ESWGInputDeviceType, class UTexture2D*>               PerControllerTexture2D;                                  // 0x0010(0x0050) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct fnaf9.DLCLevelSystemInfo
	 * Size -> 0x0068 (FullSize[0x0070] - InheritedSize[0x0008])
	 */
	struct FDLCLevelSystemInfo : public FTableRowBase
	{
	public:
		int32_t                                                    Act;                                                     // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Location;                                                // 0x000C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AFEZ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        LevelsToLoad;                                            // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        LevelsToUnload;                                          // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    LightScenario;                                           // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VJMX[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        ItemsCollected;                                          // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        DependentAreas;                                          // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              Notes;                                                   // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct fnaf9.MissionDisplayUpdateInfo
	 * Size -> 0x0078
	 */
	struct FMissionDisplayUpdateInfo
	{
	public:
		EMissionUpdateType                                         UpdateType;                                              // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LBDD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                MissionName;                                             // 0x0004(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PYD3[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		TMap<ESWGInputDeviceType, struct FSlateBrush>              PerControllerBrush;                                      // 0x0090(0x0050) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct fnaf9.ScaledTimeDetails
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FScaledTimeDetails : public FTableRowBase
	{
	public:
		float                                                      TimeLengthInSeconds;                                     // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H7S0[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct fnaf9.GridNodePositionPuzzle
	 * Size -> 0x0008
	 */
	struct FGridNodePositionPuzzle
	{
	public:
		int32_t                                                    Row;                                                     // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Col;                                                     // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct fnaf9.SecurityNodePuzzle
	 * Size -> 0x0090
	 */
	struct FSecurityNodePuzzle
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0IPP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              FriendlyName;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       FlipVertical;                                            // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       FlipHorizontal;                                          // 0x0019(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RotateCW;                                                // 0x001A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RotateCCW;                                               // 0x001B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RotateOneEighty;                                         // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_58P3[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Difficulty;                                              // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Rows;                                                    // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Cols;                                                    // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XB50[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGridNodePositionPuzzle>                     Deactivated;                                             // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FGridNodePositionPuzzle>                     Hologram1;                                               // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FGridNodePositionPuzzle>                     Hologram2;                                               // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FGridNodePositionPuzzle>                     Hologram3;                                               // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FGridNodePositionPuzzle>                     Hologram4;                                               // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FGridNodePositionPuzzle>                     Hologram5;                                               // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
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
	 * ScriptStruct fnaf9.DLCSaveSnapshotData
	 * Size -> 0x00B8
	 */
	struct FDLCSaveSnapshotData
	{
	public:
		int32_t                                                    Chapter;                                                 // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LightScenario;                                           // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SpawnLocation;                                           // 0x0008(0x000C) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            SpawnRotation;                                           // 0x0014(0x000C) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        ItemsCollected;                                          // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<class FName>                                        Activatables;                                            // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		struct FDLC_RabbitSaveData                                 DLCRabbitAISave;                                         // 0x0040(0x005C) Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YM8P[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAnimatronicTypeData>                        DLCRabbit_AlertType;                                     // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		int32_t                                                    DLCRabbit_AlertNumber;                                   // 0x00B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMapArea                                                   PlayerArea;                                              // 0x00B4(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsPlayerInNormal;                                        // 0x00B5(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_26LF[0x2];                                   // 0x00B6(0x0002) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
