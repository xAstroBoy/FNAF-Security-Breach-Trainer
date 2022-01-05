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
	 * Class MagicLeapHandMeshing.MagicLeapHandMeshingComponent
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	class UMagicLeapHandMeshingComponent : public UActorComponent
	{
	public:
		void SetUseWeightedNormals(bool bInUseWeightedNormals);
		bool DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
		bool ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
		static UClass* StaticClass();
	};

	/**
	 * Class MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMagicLeapHandMeshingFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
		bool STATIC_DestroyClient();
		bool STATIC_CreateClient();
		bool STATIC_ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
