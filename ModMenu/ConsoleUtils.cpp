#include "pch.h"
#include "ConsoleUtils.h"

#include "stdafx.h"
#include <iostream>
#include <sstream>

namespace ConsoleTools
{
	void ConsoleWrite(const std::string text)
	{
		std::cout << text << std::endl;
	}

	std::string bool_as_text(bool b)
	{
		std::stringstream converter;
		converter << std::boolalpha << b;   // flag boolalpha calls converter.setf(std::ios_base::boolalpha)
		return converter.str();
	}


	bool ShowConsole() {
		if (AllocConsole() != NULL) {
			SetConsoleTitle(TEXT("FNAF Security Breach (Mod Menu Debug) Built by xAstroBoy#1337!"));
			freopen_s(reinterpret_cast<FILE**>(stdout), "CONOUT$", "w", stdout);
			freopen_s(reinterpret_cast<FILE**>(stdin), "CONIN$", "r", stdin);
			freopen_s(reinterpret_cast<FILE**>(stderr), "CONOUT$", "w", stderr);
			ConsoleWrite("This Cheat has been coded by xAstroBoy#1337, enjoy!");
			return true;
		}
		return false;
	}

}