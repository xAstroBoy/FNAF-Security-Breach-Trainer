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
	 * BlueprintGeneratedClass Functions_Debug.Functions_Debug_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFunctions_Debug_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_DrawDebugGrid(const struct FVector& Center, const struct FVector& Extent, const struct FVector& Anchor, int32_t TileX, int32_t TileY, int32_t TileZ, bool WithinExtent, const struct FLinearColor& LineColor, bool SpectrumColors, const struct FRotator& Rotation, float Duration, float Thickness, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
