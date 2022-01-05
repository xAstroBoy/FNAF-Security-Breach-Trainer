/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "MagicLeapHandMeshing_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00A883E0
	 * 		Name   -> Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.SetUseWeightedNormals
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInUseWeightedNormals                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMagicLeapHandMeshingComponent::SetUseWeightedNormals(bool bInUseWeightedNormals)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.SetUseWeightedNormals");
		
		UMagicLeapHandMeshingComponent_SetUseWeightedNormals_Params params {};
		params.bInUseWeightedNormals = bInUseWeightedNormals;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A882D0
	 * 		Name   -> Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.DisconnectMRMesh
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMRMeshComponent*                            InMRMeshPtr                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapHandMeshingComponent::DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.DisconnectMRMesh");
		
		UMagicLeapHandMeshingComponent_DisconnectMRMesh_Params params {};
		params.InMRMeshPtr = InMRMeshPtr;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A88160
	 * 		Name   -> Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.ConnectMRMesh
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMRMeshComponent*                            InMRMeshPtr                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapHandMeshingComponent::ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.ConnectMRMesh");
		
		UMagicLeapHandMeshingComponent_ConnectMRMesh_Params params {};
		params.InMRMeshPtr = InMRMeshPtr;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMagicLeapHandMeshingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMagicLeapHandMeshingComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeapHandMeshing.MagicLeapHandMeshingComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A88360
	 * 		Name   -> Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DisconnectMRMesh
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMRMeshComponent*                            InMRMeshPtr                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapHandMeshingFunctionLibrary::STATIC_DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DisconnectMRMesh");
		
		UMagicLeapHandMeshingFunctionLibrary_DisconnectMRMesh_Params params {};
		params.InMRMeshPtr = InMRMeshPtr;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A882A0
	 * 		Name   -> Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DestroyClient
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool UMagicLeapHandMeshingFunctionLibrary::STATIC_DestroyClient()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DestroyClient");
		
		UMagicLeapHandMeshingFunctionLibrary_DestroyClient_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A88270
	 * 		Name   -> Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.CreateClient
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool UMagicLeapHandMeshingFunctionLibrary::STATIC_CreateClient()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.CreateClient");
		
		UMagicLeapHandMeshingFunctionLibrary_CreateClient_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00A881F0
	 * 		Name   -> Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.ConnectMRMesh
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMRMeshComponent*                            InMRMeshPtr                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapHandMeshingFunctionLibrary::STATIC_ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.ConnectMRMesh");
		
		UMagicLeapHandMeshingFunctionLibrary_ConnectMRMesh_Params params {};
		params.InMRMeshPtr = InMRMeshPtr;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMagicLeapHandMeshingFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMagicLeapHandMeshingFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary");
		return ptr;
	}

}


