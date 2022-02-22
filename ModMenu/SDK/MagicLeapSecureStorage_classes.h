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
	 * Class MagicLeapSecureStorage.MagicLeapSecureStorage
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMagicLeapSecureStorage : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_PutSecureVector(const class FString& Key, const struct FVector& DataToStore);
		bool STATIC_PutSecureTransform(const class FString& Key, const struct FTransform& DataToStore);
		bool STATIC_PutSecureString(const class FString& Key, const class FString& DataToStore);
		bool STATIC_PutSecureSaveGame(const class FString& Key, class USaveGame* ObjectToStore);
		bool STATIC_PutSecureRotator(const class FString& Key, const struct FRotator& DataToStore);
		bool STATIC_PutSecureInt64(const class FString& Key, int64_t DataToStore);
		bool STATIC_PutSecureInt(const class FString& Key, int32_t DataToStore);
		bool STATIC_PutSecureFloat(const class FString& Key, float DataToStore);
		bool STATIC_PutSecureByte(const class FString& Key, unsigned char DataToStore);
		bool STATIC_PutSecureBool(const class FString& Key, bool DataToStore);
		bool STATIC_PutSecureArray(const class FString& Key, TArray<int32_t> DataToStore);
		bool STATIC_GetSecureVector(const class FString& Key, struct FVector* DataToRetrieve);
		bool STATIC_GetSecureTransform(const class FString& Key, struct FTransform* DataToRetrieve);
		bool STATIC_GetSecureString(const class FString& Key, class FString* DataToRetrieve);
		bool STATIC_GetSecureSaveGame(const class FString& Key, class USaveGame** ObjectToRetrieve);
		bool STATIC_GetSecureRotator(const class FString& Key, struct FRotator* DataToRetrieve);
		bool STATIC_GetSecureInt64(const class FString& Key, int64_t* DataToRetrieve);
		bool STATIC_GetSecureInt(const class FString& Key, int32_t* DataToRetrieve);
		bool STATIC_GetSecureFloat(const class FString& Key, float* DataToRetrieve);
		bool STATIC_GetSecureByte(const class FString& Key, unsigned char* DataToRetrieve);
		bool STATIC_GetSecureBool(const class FString& Key, bool* DataToRetrieve);
		bool STATIC_GetSecureArray(const class FString& Key, TArray<int32_t>* DataToRetrieve);
		bool STATIC_DeleteSecureData(const class FString& Key);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
