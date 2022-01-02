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

// BlueprintGeneratedClass AudioListenerOverrideInterface.AudioListenerOverrideInterface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAudioListenerOverrideInterface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AudioListenerOverrideInterface.AudioListenerOverrideInterface_C");
		return ptr;
	}



	void GetListenerPosition(struct FVector* Position);
	void EnableListenerOverride(bool enable, bool* Result);
	void SetListenerOverridePosition(class USceneComponent* AttachToComponent, const struct FVector& Position, const struct FRotator& Rotation, bool* Result);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
