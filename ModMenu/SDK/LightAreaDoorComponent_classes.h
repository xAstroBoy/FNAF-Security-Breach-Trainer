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

// BlueprintGeneratedClass LightAreaDoorComponent.LightAreaDoorComponent_C
// 0x0008 (FullSize[0x00E8] - InheritedSize[0x00E0])
class ULightAreaDoorComponent_C : public ULightAreaChanger_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass LightAreaDoorComponent.LightAreaDoorComponent_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void On_Area_Change_Finished();
	void ExecuteUbergraph_LightAreaDoorComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
