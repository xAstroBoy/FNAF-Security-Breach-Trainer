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

// BlueprintGeneratedClass FlashlightProvider.FlashlightProvider_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UFlashlightProvider_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass FlashlightProvider.FlashlightProvider_C");
		return ptr;
	}



	void GetFlashlightLocationAndDirection(bool* HasFlashlight, struct FVector* FlashlightLocation, struct FVector* FlashlightDirection);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
