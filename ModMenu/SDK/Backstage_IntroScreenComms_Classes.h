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
	 * BlueprintGeneratedClass Backstage_IntroScreenComms.Backstage_IntroScreenComms_C
	 * Size -> 0x0020 (FullSize[0x0248] - InheritedSize[0x0228])
	 */
	class ABackstage_IntroScreenComms_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              SecurityScreens[0x10];                                   // 0x0238(0x0010) UNKNOWN PROPERTY: ArrayProperty

	public:
		void ShowFreddyVideo();
		void ShowVannyVideo();
		void StopShowingVideo();
		void SetScreenSprite(class UMaterialInstance* NewMaterial);
		void ExecuteUbergraph_Backstage_IntroScreenComms(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
