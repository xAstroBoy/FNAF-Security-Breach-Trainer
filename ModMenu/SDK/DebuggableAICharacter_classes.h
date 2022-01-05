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
	 * BlueprintGeneratedClass DebuggableAICharacter.DebuggableAICharacter_C
	 * Size -> 0x0018 (FullSize[0x04D8] - InheritedSize[0x04C0])
	 */
	class ADebuggableAICharacter_C : public AFNAFBaseAICharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class UMaterialInterface*>                          DBG_MaterialMapping;                                     // 0x04C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void OnDebugVis(bool enable);
		void ExecuteUbergraph_DebuggableAICharacter(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
