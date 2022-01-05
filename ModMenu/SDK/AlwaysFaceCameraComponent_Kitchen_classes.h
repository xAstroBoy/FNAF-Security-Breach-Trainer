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
	 * BlueprintGeneratedClass AlwaysFaceCameraComponent_Kitchen.AlwaysFaceCameraComponent_Kitchen_C
	 * Size -> 0x0030 (FullSize[0x0220] - InheritedSize[0x01F0])
	 */
	class UAlwaysFaceCameraComponent_Kitchen_C : public USceneComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		unsigned char                                              StaffBot[0x28];                                          // 0x01F8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_AlwaysFaceCameraComponent_Kitchen(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
