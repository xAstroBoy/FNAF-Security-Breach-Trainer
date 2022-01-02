#pragma once
#pragma warning(disable: 4717)
#pragma warning(disable: 4806)
#pragma warning(disable: 305)

#include "stdafx.h"
#include <iostream>
#include <sstream>
#include "mem.h"
#include <limits>
#include <exception>
#include <typeinfo>
#include <stdexcept>
#include <thread>

#include "CheatsCode.h"
#include "ConsoleUtils.h"
using namespace std;
using namespace Cheats;
using namespace ConsoleTools;

#pragma region Console Parts.

void DeAttach(const HMODULE hModule)
{
	FreeLibraryAndExitThread(hModule, 0);
}


#pragma endregion

extern int Main(); //This line tells our compiler that our Main function is located at other place(external).

DWORD WINAPI OnAttach(const HMODULE hModule)
{
	 Main(); 
	 return 0;
}

BOOL APIENTRY  DllMain(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
)
{
	DisableThreadLibraryCalls(hModule);
	HANDLE hThread = nullptr;
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		hThread = CreateThread(nullptr, NULL, reinterpret_cast<LPTHREAD_START_ROUTINE>(OnAttach), hModule, NULL, nullptr);
		//if (hThread)
		//	CloseHandle(hThread);
		break;
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}