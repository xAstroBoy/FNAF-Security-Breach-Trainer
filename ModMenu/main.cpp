#include "pch.h"
#include "CheatsCode.h"
#include "ConsoleUtils.h"
#include "includes.h"
#include "SDK.h"
#include <thread>

extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

Present oPresent;
HWND window = NULL;
WNDPROC oWndProc;
ID3D11Device* pDevice = NULL;
ID3D11DeviceContext* pContext = NULL;
ID3D11RenderTargetView* mainRenderTargetView;

void InitImGui()
{
	ImGui::CreateContext();
	ImGuiIO& io = ImGui::GetIO();
	io.ConfigFlags = ImGuiConfigFlags_NoMouseCursorChange;
	ImGui_ImplWin32_Init(window);
	ImGui_ImplDX11_Init(pDevice, pContext);
}

LRESULT __stdcall WndProc(const HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
	if (ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam))
		return true;

	return CallWindowProc(oWndProc, hWnd, uMsg, wParam, lParam);
}
typedef BOOL(WINAPI* hk_SetCursorPos)(int, int);
hk_SetCursorPos origSetCursorPos = NULL;

void ToggleGUI()
{
	Cheats::isTrainerGuiActive = !Cheats::isTrainerGuiActive;
	//ConsoleTools::ConsoleWrite("GUI : " + ConsoleTools::bool_as_text(Cheats::isTrainerGuiActive));
}

bool init = false;
HRESULT __stdcall hkPresent(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags)
{
	if (!init)
	{
		if (SUCCEEDED(pSwapChain->GetDevice(__uuidof(ID3D11Device), (void**)&pDevice)))
		{
			pDevice->GetImmediateContext(&pContext);
			DXGI_SWAP_CHAIN_DESC sd;
			pSwapChain->GetDesc(&sd);
			window = sd.OutputWindow;
			ID3D11Texture2D* pBackBuffer;
			pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);
			pDevice->CreateRenderTargetView(pBackBuffer, NULL, &mainRenderTargetView);
			pBackBuffer->Release();
			oWndProc = (WNDPROC)SetWindowLongPtr(window, GWLP_WNDPROC, (LONG_PTR)WndProc);
			InitImGui();
			init = true;
		}

		else
			return oPresent(pSwapChain, SyncInterval, Flags);
	}
	if (GetAsyncKeyState(VK_F3) & 1)
	{
		ToggleGUI();
	}
	bool window = true;
	if (Cheats::isTrainerGuiActive)
	{
		ImGui_ImplDX11_NewFrame();
		ImGui_ImplWin32_NewFrame();
		ImGui::NewFrame();
		ImGui::GetIO().MouseDrawCursor = true;

		ImGui::SetNextWindowSize(ImVec2(1299, 451));

		if (ImGui::Begin("Security Breach Cheats by xAstroBoy#1337", &window))
		{
			ImGui::SetCursorPos(ImVec2(14, 33));
			ImGui::BeginChild(18, ImVec2(169, 186), true);

			ImGui::SetCursorPos(ImVec2(18, 21.5));
			ImGui::Text("Gregory Cheats");

			ImGui::SetCursorPos(ImVec2(19.5, 49.5));
			ImGui::Checkbox("Unlimited Jump", &Cheats::UnlimitedJumpBool_Enabled);
			ImGui::SetCursorPos(ImVec2(19.5, 99));
			ImGui::Checkbox("Unlimited Stamina", &Cheats::UnlimitedStaminaBool_Enabled);
			ImGui::SetCursorPos(ImVec2(19.5, 148.5));
			ImGui::Checkbox("Unlimited FazWatch", &Cheats::UnlimitedFazWatchBool_Enabled);

			ImGui::EndChild();

			ImGui::SetCursorPos(ImVec2(202, 37));
			ImGui::BeginChild(35, ImVec2(305, 381), true);

			ImGui::SetCursorPos(ImVec2(100, 5));
			ImGui::Text("Inventory Cheats");

			ImGui::EndChild();

			ImGui::SetCursorPos(ImVec2(221, 56));
			ImGui::BeginChild(36, ImVec2(241, 129), true);

			ImGui::SetCursorPos(ImVec2(29.5, 13.5));
			ImGui::Text("FazerBlaster Cheats");

			ImGui::SetCursorPos(ImVec2(19, 42.5));
			ImGui::Checkbox("FazBlaster Unlimited Ammo", &Cheats::UnlimitedFazBlasterAmmo_Enabled);

			ImGui::SetCursorPos(ImVec2(19, 76.5));
			ImGui::Checkbox("Disable Fazblaster cooldown", &Cheats::RemoveBlasterCooldown_Enabled);

			ImGui::EndChild();

			ImGui::SetCursorPos(ImVec2(227, 197));
			ImGui::BeginChild(41, ImVec2(235, 103), true);

			ImGui::SetCursorPos(ImVec2(14.5, 11.5));
			ImGui::Text("FazCam Cheats");

			ImGui::SetCursorPos(ImVec2(12.5, 46.5));
			ImGui::Checkbox("Fazcam Unlimited Usage", &Cheats::RemoveRemoveFazCamCooldownTime_Enabled);

			ImGui::EndChild();

			ImGui::SetCursorPos(ImVec2(231, 333));
			ImGui::BeginChild(46, ImVec2(235, 74), true);

			ImGui::SetCursorPos(ImVec2(16.5, 8.5));
			ImGui::Text("Flashlight Cheats");

			ImGui::SetCursorPos(ImVec2(14, 45));
			ImGui::Checkbox("Unlimited Flashlight Power", &Cheats::UnlimitedFlashLight_Enabled);

			ImGui::EndChild();

			ImGui::SetCursorPos(ImVec2(521, 44));
			ImGui::BeginChild(54, ImVec2(326, 115), true);

			ImGui::SetCursorPos(ImVec2(14.5, 45.5));
			ImGui::Checkbox("Disable Collection Timer", &Cheats::RemoveCollectionTime_Enabled);

			ImGui::SetCursorPos(ImVec2(22.5, 20.5));
			ImGui::Text("Game Mechanics");

			ImGui::SetCursorPos(ImVec2(17.5, 81.5));
			ImGui::Checkbox("Freeze Doors Power", &Cheats::NoPowerDrainingDoors_Enabled);

			ImGui::SetCursorPos(ImVec2(17.5, 133));
			ImGui::Checkbox("Force Enable Save points", &Cheats::AllowAlwaysSaving_Enabled);

			ImGui::EndChild();

			ImGui::SetCursorPos(ImVec2(17, 235));
			ImGui::BeginChild(58, ImVec2(177, 174), true);

			ImGui::SetCursorPos(ImVec2(15.5, 18.5));
			ImGui::Text("Game Healths Cheats");

			ImGui::SetCursorPos(ImVec2(17.5, 55.5));
			ImGui::Checkbox("FazBlaster GodMode", &Cheats::FazBlasterGodMode_Enabled);

			ImGui::SetCursorPos(ImVec2(17.5, 110.0));
			ImGui::Checkbox("Minigames GodMode", &Cheats::MiniGames_UnlimitedHealth_Enabled);

			ImGui::SetCursorPos(ImVec2(17.5, 160.0));
			ImGui::Checkbox("Semi GodMode", &Cheats::NoJumpscares_Enabled);
			ImGui::EndChild();

			ImGui::SetCursorPos(ImVec2(523, 169));
			ImGui::BeginChild(61, ImVec2(745, 262), true);

			ImGui::SetCursorPos(ImVec2(17, 14));
			ImGui::Text("Freddy");

			ImGui::EndChild();

			ImGui::SetCursorPos(ImVec2(538, 206));
			ImGui::BeginChild(63, ImVec2(247, 215), true);

			ImGui::SetCursorPos(ImVec2(14.5, 12.5));
			ImGui::Text("Freddy Hacks");

			ImGui::SetCursorPos(ImVec2(12.5, 44.5));
			ImGui::Checkbox("Disable Chica Voice Cooldown", &Cheats::NoChicaBeakCooldown_Enabled);
			ImGui::SetCursorPos(ImVec2(12.5, 89));

			ImGui::Checkbox("Freddy Can be called", &Cheats::FreddyCanBeAlwaysCalled_Enabled);
			ImGui::SetCursorPos(ImVec2(12.5, 133.5));

			ImGui::Checkbox("Gregory Can enter/leave freddy", &Cheats::FreddyGregoryCanAlwaysEnter_Enabled);

			ImGui::EndChild();

			ImGui::SetCursorPos(ImVec2(859, 48));
			ImGui::BeginChild(66, ImVec2(263, 105), true);

			ImGui::SetCursorPos(ImVec2(47, 47.5));
			if (ImGui::Button("Toggle Dev UI", ImVec2(156, 49)))
			{
				Cheats::ToggleDevUI();
			}
			//ImGui::SetCursorPos(ImVec2(47, 87.5));
			//if (ImGui::Button("Get All Achievements", ImVec2(156, 49)))
			//{
			//	Cheats::ToggleDevUI();
			//}

			ImGui::SetCursorPos(ImVec2(65, 13.5));
			ImGui::Text("Game Dev Events");

			ImGui::EndChild();

			ImGui::SetCursorPos(ImVec2(799, 212));
			ImGui::BeginChild(71, ImVec2(353, 169), true);

			ImGui::SetCursorPos(ImVec2(10.5, 80.75));
			ImGui::PushItemWidth(200);
			if (ImGui::InputInt("Current Power", &Cheats::CurrentFreddyPower))
			{
				Cheats::Set_CurrentFreddyPower(Cheats::CurrentFreddyPower);
			}
			ImGui::PopItemWidth();

			ImGui::SetCursorPos(ImVec2(30.5, 11.5));
			ImGui::Text("Freddy Power");

			ImGui::SetCursorPos(ImVec2(18.5, 53.5));
			ImGui::Checkbox("Freeze Current Power", &Cheats::FreezeFreddyPower_Enabled);

			ImGui::SetCursorPos(ImVec2(14.5, 115.99805));
			ImGui::PushItemWidth(200);
			if (ImGui::InputInt("Max Power", &Cheats::MaxFreddyPower))
			{
				Cheats::Set_MaxFreddyPower(Cheats::MaxFreddyPower);
			}

			ImGui::PopItemWidth();

			ImGui::EndChild();

			ImGui::End();
		}
		ImGui::Render();

		pContext->OMSetRenderTargets(1, &mainRenderTargetView, NULL);
		ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
	}
	return oPresent(pSwapChain, SyncInterval, Flags);
}

void ExecutorThread()
{
	while (true)
	{
		if (Cheats::UnlimitedJumpBool_Enabled)
		{
			Cheats::UnlimitedJump();
		}
		if (Cheats::UnlimitedFazBlasterAmmo_Enabled)
		{
			Cheats::UnlimitedFazBlasterAmmo();
		}
		if (Cheats::RemoveBlasterCooldown_Enabled)
		{
			Cheats::RemoveBlasterCooldown();
		}
		if (Cheats::RemoveRemoveFazCamCooldownTime_Enabled)
		{
			Cheats::RemoveFazCamCooldownTime();
		}
		if (Cheats::UnlimitedFlashLight_Enabled)
		{
			Cheats::UnlimitedFlashLight();
		}
		if (Cheats::RemoveCollectionTime_Enabled)
		{
			Cheats::RemoveCollectionTime();
		}
		if (Cheats::NoPowerDrainingDoors_Enabled)
		{
			Cheats::NoPowerDrainingDoors();
		}
		if (Cheats::NoJumpscares_Enabled)
		{
			Cheats::SemiGodmode();
		}
		if (Cheats::MiniGames_UnlimitedHealth_Enabled)
		{
			Cheats::MinigamesGodMode();
		}

		if (Cheats::AllowAlwaysSaving_Enabled)
		{
			Cheats::ForceSaveGameFeature();
		}

		if (Cheats::FazBlasterGodMode_Enabled)
		{
			Cheats::UnlimitedFazerBlasterLifes();
		}
		if (Cheats::NoChicaBeakCooldown_Enabled)
		{
			Cheats::NoChicaBeakCooldown();
		}
		if (Cheats::FreddyGregoryCanAlwaysEnter_Enabled)
		{
			Cheats::Freddy_Always_CanEnterExitFreddy();
		}
		if (Cheats::FreddyCanBeAlwaysCalled_Enabled)
		{
			Cheats::Freddy_Always_CanCallFreddy();
		}

		if (Cheats::FreezeFreddyPower_Enabled)
		{
			Cheats::Set_CurrentFreddyPower(Cheats::CurrentFreddyPower);
		}
		if (Cheats::Get_UnlimitedStamina() != Cheats::UnlimitedStaminaBool_Enabled)
		{
			Cheats::Set_UnlimitedStamina(Cheats::UnlimitedStaminaBool_Enabled);
		}
		if (Cheats::Get_UnlimitedFazwatchPower() != Cheats::UnlimitedFazWatchBool_Enabled)
		{
			Cheats::Set_UnlimitedFazwatchPower(Cheats::UnlimitedFazWatchBool_Enabled);
		}

		Cheats::UnlimitedFazWatchBool_Enabled = Cheats::Get_UnlimitedFazwatchPower();
		Cheats::UnlimitedStaminaBool_Enabled = Cheats::Get_UnlimitedStamina();
		Cheats::CurrentFreddyPower = Cheats::Get_CurrentFreddyPower();
		Cheats::MaxFreddyPower = Cheats::Get_MaxFreddyPower();
	}
}

DWORD WINAPI MainThread(LPVOID lpReserved)
{
	CG::InitSdk();

	// Console (Used Mainly for Debug Purpose) (not needed)
	ConsoleTools::ShowConsole();

	bool init_hook = false;
	do
	{
		if (kiero::init(kiero::RenderType::D3D11) == kiero::Status::Success)
		{
			kiero::bind(8, (void**)&oPresent, hkPresent);
			std::thread executor(ExecutorThread);
			executor.detach();
			init_hook = true;
		}
	} while (!init_hook);
	return TRUE;
}

BOOL WINAPI DllMain(HMODULE hMod, DWORD dwReason, LPVOID lpReserved)
{
	switch (dwReason)
	{
	case DLL_PROCESS_ATTACH:
		DisableThreadLibraryCalls(hMod);
		CreateThread(nullptr, 0, MainThread, hMod, 0, nullptr);
		break;
	case DLL_PROCESS_DETACH:
		kiero::shutdown();
		break;
	}
	return TRUE;
}