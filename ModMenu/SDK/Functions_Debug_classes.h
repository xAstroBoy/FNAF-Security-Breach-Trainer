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

// BlueprintGeneratedClass Functions_Debug.Functions_Debug_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UFunctions_Debug_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Functions_Debug.Functions_Debug_C");
		return ptr;
	}



	void STATIC_DrawDebugGrid(const struct FVector& Center, const struct FVector& Extent, const struct FVector& Anchor, int TileX, int TileY, int TileZ, bool WithinExtent, const struct FLinearColor& LineColor, bool SpectrumColors, const struct FRotator& Rotation, float Duration, float Thickness, class UObject* __WorldContext);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
