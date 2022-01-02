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

// BlueprintGeneratedClass DebugVisComponent.DebugVisComponent_C
// 0x0058 (FullSize[0x0108] - InheritedSize[0x00B0])
class UDebugVisComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TMap<class UMeshComponent*, struct FMaterialArray> MeshMaterialMap;                                           // 0x00B8(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass DebugVisComponent.DebugVisComponent_C");
		return ptr;
	}



	void ChangeVisuals(bool enable, class UMeshComponent* Mesh, class UMaterialInterface* Material);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_DebugVisComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
