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
	 * Class SWGPlatformUtil.SWGPlatformSettings
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class USWGPlatformSettings : public UDeveloperSettings
	{
	public:
		SWGPlatformUtil_ESWGPlatform                               BuildPlatform;                                           // 0x0038(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_R8AR[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SWGPlatformUtil.SWGPlatformUtilFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USWGPlatformUtilFunctions : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SwitchOnPlatform(SWGPlatformUtil_ESWGPlatform* Platform);
		void STATIC_StartActivity(class APlayerController* PlayerController, const class FString& ActivityId);
		void STATIC_SetActivityAvailability(class APlayerController* PlayerController, const class FString& ActivityId, bool bEnabled);
		void STATIC_IsInEditorSwitch(SWGPlatformUtil_ESWGEditor* Editor);
		bool STATIC_IsInEditor();
		class FString STATIC_GetVersionString();
		class FString STATIC_GetGPU();
		SWGPlatformUtil_ESWGPlatform STATIC_GetBuildPlatform();
		void STATIC_EndActivity(class APlayerController* PlayerController, const class FString& ActivityId, SWGPlatformUtil_EGameActivityEndType Outcome);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
