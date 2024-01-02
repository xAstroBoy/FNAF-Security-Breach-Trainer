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
	 * BlueprintGeneratedClass ElevatorButton_V2.ElevatorButton_V2_C
	 * Size -> 0x0018 (FullSize[0x02F0] - InheritedSize[0x02D8])
	 */
	class AElevatorButton_V2_C : public AButtonBase_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02D8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                Button_Mesh;                                             // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Color;                                                   // 0x02E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Slanted;                                                 // 0x02EC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       SFXInitialized;                                          // 0x02ED(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ChangeColorOnActivated;                                  // 0x02EE(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       CanInteract;                                             // 0x02EF(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void CanPlayerInteract(bool* CanInteract, EConditionFailReason* CantReason);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ChangeColor(int32_t ChangeColor);
		void OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController);
		void SetCanUse(bool CanUse);
		void ExecuteUbergraph_ElevatorButton_V2(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
