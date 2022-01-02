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
// Classes
//---------------------------------------------------------------------------

// Class SWGPlatformUtil.SWGPlatformSettings
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class USWGPlatformSettings : public UDeveloperSettings
{
public:
	SWGPlatformUtil_ESWGPlatform                       BuildPlatform;                                             // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_PE10[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SWGPlatformUtil.SWGPlatformSettings");
		return ptr;
	}



};

// Class SWGPlatformUtil.SWGPlatformUtilFunctions
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USWGPlatformUtilFunctions : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SWGPlatformUtil.SWGPlatformUtilFunctions");
		return ptr;
	}



	void STATIC_SwitchOnPlatform(SWGPlatformUtil_ESWGPlatform* Platform);
	void STATIC_StartActivity(class APlayerController* PlayerController, const struct FString& ActivityId);
	void STATIC_SetActivityAvailability(class APlayerController* PlayerController, const struct FString& ActivityId, bool bEnabled);
	void STATIC_IsInEditorSwitch(SWGPlatformUtil_ESWGEditor* Editor);
	bool STATIC_IsInEditor();
	struct FString STATIC_GetVersionString();
	struct FString STATIC_GetGPU();
	SWGPlatformUtil_ESWGPlatform STATIC_GetBuildPlatform();
	void STATIC_EndActivity(class APlayerController* PlayerController, const struct FString& ActivityId, SWGPlatformUtil_EGameActivityEndType Outcome);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
