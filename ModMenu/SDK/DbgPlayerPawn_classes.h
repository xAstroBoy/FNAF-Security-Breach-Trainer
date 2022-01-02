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

// BlueprintGeneratedClass DbgPlayerPawn.DbgPlayerPawn_C
// 0x0018 (FullSize[0x02C8] - InheritedSize[0x02B0])
class ADbgPlayerPawn_C : public ASpectatorPawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ULevelStreamViewpoint*                       LevelStreamViewpoint;                                      // 0x02B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                        PointLight;                                                // 0x02C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass DbgPlayerPawn.DbgPlayerPawn_C");
		return ptr;
	}



	TEnumAsByte<Engine_ECollisionEnabled> GetCollisionMode();
	void Set_Collision_Mode(TEnumAsByte<Engine_ECollisionEnabled> NewType);
	void ExecuteUbergraph_DbgPlayerPawn(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
