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
	 * Class GooglePAD.GooglePADFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGooglePADFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		GooglePAD_EGooglePADErrorCode STATIC_ShowCellularDataConfirmation();
		GooglePAD_EGooglePADErrorCode STATIC_RequestRemoval(const class FString& Name);
		GooglePAD_EGooglePADErrorCode STATIC_RequestInfo(TArray<class FString> AssetPacks);
		GooglePAD_EGooglePADErrorCode STATIC_RequestDownload(TArray<class FString> AssetPacks);
		void STATIC_ReleaseDownloadState(int State);
		void STATIC_ReleaseAssetPackLocation(int Location);
		int STATIC_GetTotalBytesToDownload(int State);
		GooglePAD_EGooglePADStorageMethod STATIC_GetStorageMethod(int Location);
		GooglePAD_EGooglePADErrorCode STATIC_GetShowCellularDataConfirmationStatus(GooglePAD_EGooglePADCellularDataConfirmStatus* Status);
		GooglePAD_EGooglePADDownloadStatus STATIC_GetDownloadStatus(int State);
		GooglePAD_EGooglePADErrorCode STATIC_GetDownloadState(const class FString& Name, int* State);
		int STATIC_GetBytesDownloaded(int State);
		class FString STATIC_GetAssetsPath(int Location);
		GooglePAD_EGooglePADErrorCode STATIC_GetAssetPackLocation(const class FString& Name, int* Location);
		GooglePAD_EGooglePADErrorCode STATIC_CancelDownload(TArray<class FString> AssetPacks);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
