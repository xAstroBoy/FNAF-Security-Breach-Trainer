#pragma once

/**
 * Name: FNAFSB
 * Version: 1
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
	 * BlueprintGeneratedClass MGM_OfficeGameManger.MGM_OfficeGameManger_C
	 * Size -> 0x0035 (FullSize[0x02B1] - InheritedSize[0x027C])
	 */
	class AMGM_OfficeGameManger_C : public ABP_MiniGameManger_C
	{
	public:
		unsigned char                                              UnknownData_41FF[0x4];                                   // 0x027C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       GameBounds;                                              // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              Screens[0x10];                                           // 0x0290(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              DoorsToLock[0x10];                                       // 0x02A0(0x0010) UNKNOWN PROPERTY: ArrayProperty
		bool                                                       UseBounds;                                               // 0x02B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void SetDoorsLock(bool Lock);
		void CanSpawnAI(bool* CanSpawn);
		void CheckIfPlayerLeave(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void OnPlayerEnter();
		void OnEnd(E_EndMiniGameType EndType);
		void OnStart();
		void CheckIfPlayer(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnPlayerLeave(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void SetScreensToRender();
		void SetScreensToStatic();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_MGM_OfficeGameManger(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
