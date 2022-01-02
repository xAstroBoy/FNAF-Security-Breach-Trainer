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

// BlueprintGeneratedClass MGM_OfficeGameManger.MGM_OfficeGameManger_C
// 0x0035 (FullSize[0x02B1] - InheritedSize[0x027C])
class AMGM_OfficeGameManger_C : public ABP_MiniGameManger_C
{
public:
	unsigned char                                      UnknownData_CMDY[0x4];                                     // 0x027C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               GameBounds;                                                // 0x0288(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Screens[0x10];                                             // 0x0290(0x0010) UNKNOWN PROPERTY: ArrayProperty
	unsigned char                                      DoorsToLock[0x10];                                         // 0x02A0(0x0010) UNKNOWN PROPERTY: ArrayProperty
	bool                                               UseBounds;                                                 // 0x02B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass MGM_OfficeGameManger.MGM_OfficeGameManger_C");
		return ptr;
	}



	void SetDoorsLock(bool Lock);
	void Can_Spawn_AI(bool* Can_Spawn);
	void CheckIfPlayerLeave(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnPlayerEnter();
	void OnEnd(TEnumAsByte<E_EndMiniGameType_E_EndMiniGameType> EndType);
	void On_Start();
	void CheckIfPlayer(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnPlayerLeave(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void SetScreensToRender();
	void SetScreensToStatic();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_MGM_OfficeGameManger(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
