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
	 * BlueprintGeneratedClass SSD_Backstage_Office.SSD_Backstage_Office_C
	 * Size -> 0x0028 (FullSize[0x0310] - InheritedSize[0x02E8])
	 */
	class ASSD_Backstage_Office_C : public ASecurityScreenDisplay_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		unsigned char                                              Cameras[0x10];                                           // 0x02F0(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              Doors[0x10];                                             // 0x0300(0x0010) UNKNOWN PROPERTY: ArrayProperty

	public:
		void SwitchCamera(int32_t CamIndex);
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void OnDoorOverlapped();
		void ExecuteUbergraph_SSD_Backstage_Office(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
