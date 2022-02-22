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
	 * BlueprintGeneratedClass AlertSystem.AlertSystem_C
	 * Size -> 0x0020 (FullSize[0x0248] - InheritedSize[0x0228])
	 */
	class AAlertSystem_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnAlert;                                                 // 0x0238(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void Send_Alert(const class FName& Alert, const struct FVector& Location, TArray<fnaf9_EFNAFAISpawnType> TypesToAlert, int32_t NumberToAlert);
		void ExecuteUbergraph_AlertSystem(int32_t EntryPoint);
		void OnAlert__DelegateSignature(const class FName& Alert, const struct FVector& Location);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
