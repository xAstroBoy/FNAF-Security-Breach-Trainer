#include <algorithm>

#include "pch.h"
#include "CheatsCode.h"
#include "ConsoleUtils.h"
#include "includes.h"
#include "SDK.h"
#include <thread>

extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

typedef void(__thiscall* ProcessEvent)(CG::UObject*, CG::UFunction*, void*);
ProcessEvent oProcessEvent;

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
			ImGui::Checkbox("Princess Quest GodMode", &Cheats::PrincessQuestGodMode_Enabled);

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
		if (Cheats::PrincessQuestGodMode_Enabled)
		{
			Cheats::PrincessQuestGodMode();
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
bool ends_with(const std::string& mainStr, const std::string& toMatch)
{
	if (mainStr.size() >= toMatch.size() &&
		mainStr.compare(mainStr.size() - toMatch.size(), toMatch.size(), toMatch) == 0)
		return true;
	else
		return false;
}
void ReportEvent(std::string EventName)
{
#pragma region Generic Event Filters
	if (ends_with(EventName, "ReceiveTickAI")) return;
	if (ends_with(EventName, "BlueprintPostEvaluateAnimation")) return;
	if (ends_with(EventName, "ReceiveTick")) return;
	if (ends_with(EventName, "Tick")) return;
	if (ends_with(EventName, "BlueprintModifyCamera")) return;
	if (ends_with(EventName, "BlueprintModifyPostProcess")) return;
	if (ends_with(EventName, "OnSourceDetected_Event")) return;
	if (ends_with(EventName, "OnMMDetected_Event")) return;
	if (ends_with(EventName, "BndEvt__InteractionResetCollision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature")) return;
	if (ends_with(EventName, "Clear Ambience Priority")) return;
	if (ends_with(EventName, "GetTextValue")) return;
	if (ends_with(EventName, "ReceiveEndPlay")) return;
	if (ends_with(EventName, "PerformConditionCheckAI")) return;
	if (ends_with(EventName, "Flicer__UpdateFunc")) return;
	if (ends_with(EventName, "Focus")) return;
	if (ends_with(EventName, "BlueprintUpdateAnimation")) return;
	if (ends_with(EventName, "BlueprintBeginPlay")) return;
	if (ends_with(EventName, "ExecuteUbergraph_PRE_MOD_ArcadeCabinent_00")) return;
	if (ends_with(EventName, "ExecuteUbergraph_PRE_MOD_ArcadeCabinent_01")) return;
	if (ends_with(EventName, "OnMouseEnter")) return;
	if (ends_with(EventName, "OnMouseLeave")) return;
	if (ends_with(EventName, "OnMouseMove")) return;
	if (ends_with(EventName, "OnInitialized")) return;
	if (ends_with(EventName, "Construct")) return;
	if (ends_with(EventName, "PreConstruct")) return;
	if (ends_with(EventName, "ExecuteUbergraph_TitleUI")) return;
	if (ends_with(EventName, "InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54")) return;
	if (ends_with(EventName, "SetRenderOpacity")) return;
	if (ends_with(EventName, "SetColorAndOpacity")) return;
	if (ends_with(EventName, "SetVisibility")) return;
	if (ends_with(EventName, "InpActEvt_AnyKey_K2Node_InputKeyEvent_1")) return;
	if (ends_with(EventName, "OnMouseButtonDown")) return;
	if (ends_with(EventName, "OnPreviewMouseButtonDown")) return;
	if (ends_with(EventName, "OnMouseButtonDoubleClick")) return;
	if (ends_with(EventName, "OnMouseButtonUp")) return;
	if (ends_with(EventName, "OnRemovedFromFocusPath")) return;
	if (ends_with(EventName, "Finished_071044F543A717F54FDA6B941362F78E")) return;
	if (ends_with(EventName, "OnAnimationFinished")) return;
	if (ends_with(EventName, "OnAnimationStarted")) return;
	if (ends_with(EventName, "ReceiveBeginPlay")) return;
	if (ends_with(EventName, "OnBeginLightScenarioChange")) return;
	if (ends_with(EventName, "GetPointLocation")) return;
	if (ends_with(EventName, "GetNumberOfPathPoints")) return;
	if (ends_with(EventName, "OnPerceptionStimuliSourceEndPlay")) return;
	if (ends_with(EventName, "GetNumberOfPathPoints")) return;
	if (ends_with(EventName, "ReceiveExecuteAI")) return;
	if (ends_with(EventName, "BlueprintInitializeAnimation")) return;
	if (ends_with(EventName, "BlueprintLinkedAnimationLayersInitialized")) return;
	if (ends_with(EventName, "GateOpen__UpdateFunc")) return;
	if (ends_with(EventName, ".Update")) return;
	if (ends_with(EventName, "ExecuteUbergraph_FogVolume")) return;

#pragma endregion

#pragma region Spammed Stuff (USELESS)
	if (EventName == "Function Engine.AnimInstance.BlueprintBeginPlay")  return;
	if (EventName == "Function AISeeker.AISeeker_C.BndEvt__NearSight_K2Node_ComponentBoundEvent_2_OnSightChanged__DelegateSignature")  return;
	if (EventName == "Function AISeeker.AISeeker_C.GetManagedAIType")  return;
	if (EventName == "Function Engine.Character.CanJumpInternal")  return;
	if (EventName == "Function PatrolPath.PatrolPath_C.GetNumberOfPathPoints")  return;
	if (EventName == "Function UpdatePlayerPosition.UpdatePlayerPosition_C.ReceiveActivationAI")  return;
	if (EventName == "Function Engine.CameraShake.ReceivePlayShake")  return;
	if (EventName == "Function Gregory.Gregory_C.ReceiveActorEndOverlap")  return;
	if (EventName == "Function JumpscarePawn.JumpscarePawn_C.Timeline_0__UpdateFunc")  return;
	if (EventName == "Function JumpscarePawn.JumpscarePawn_C.Timeline_1__NewTrack_2__EventFunc")  return;
	if (EventName == "Function JumpscarePawn.JumpscarePawn_C.Timeline_1__UpdateFunc")  return;
	if (EventName == "Function PlayerInteractComponent.PlayerInteractComponent_C.On Owner Begin Overlap")  return;
	if (EventName == "Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay")  return;
	if (EventName == "Function Engine.CameraShake.ReceiveIsFinished")  return;
	if (EventName == "Function EQ_Flashlight.EQ_Flashlight_C.RandomFlicker01Timeline__UpdateFunc")  return;
	if (EventName == "Function AISeeker.AISeeker_C.ReceiveActorBeginOverlap")  return;
	if (EventName == "Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.BlueprintBeginPlay")  return;
	if (EventName == "Function Staffbot_ABP_Security.Staffbot_ABP_Security_C.BlueprintBeginPlay")  return;
	if (EventName == "Function Staffbot_Security_LINK.Staffbot_Security_LINK_C.BlueprintBeginPlay")  return;
	if (EventName == "Function CantCallFreddyOverlap.CantCallFreddyOverlap_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature")  return;
	if (EventName == "Function OptionsUI.OptionsUI_C.BndEvt__ApplyChangesButton_General_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature")  return;
	if (EventName == "Function AISeekerController.AISeekerController_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_PerceptionUpdatedDelegate__DelegateSignature")  return;
	if (EventName == "Function Animatronic_ABP_Monty.Animatronic_ABP_Monty_C.AnimNotify_R_Foot_Down")  return;
	if (EventName == "Function OptionsUI.OptionsUI_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature")  return;
	if (EventName == "Function Animatronic_ABP_Monty.Animatronic_ABP_Monty_C.AnimNotify_L_Foot_Down")  return;
	if (EventName == "Function SetChaseMode.SetChaseMode_C.ReceiveExecuteAI")  return;
	if (EventName == "Function SetHearingEnable.SetHearingEnable_C.ReceiveExecuteAI")  return;
	if (EventName == "Function Title_ComboBox.Title_ComboBox_C.BndEvt__LeftArrow_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature")  return;
	if (EventName == "Function WI_Option_Language.WI_Option_Language_C.BndEvt__Language_ComboBox_K2Node_ComponentBoundEvent_0_ArrowKeyPressed__DelegateSignature")  return;
	if (EventName == "Function A_Elevator.A_Elevator_C.WakeupOverlapEnd")  return;
	if (EventName == "Function MainGamePC.MainGamePC_C.InpActEvt_Jump_K2Node_InputActionEvent_16")  return;
	if (EventName == "Function MainGamePC.MainGamePC_C.InpActEvt_Jump_K2Node_InputActionEvent_17")  return;
	if (EventName == "Function MainGamePC.MainGamePC_C.InpActEvt_Skip_K2Node_InputActionEvent_6")  return;
	if (EventName == "Function MainGamePC.MainGamePC_C.InpActEvt_Skip_K2Node_InputActionEvent_7")  return;
	if (EventName == "Function FBPC_SharedController.FBPC_SharedController_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_1")  return;
	if (EventName == "Function FBPC_SharedController.FBPC_SharedController_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_2")  return;
	if (EventName == "Function Gregory.Gregory_C.InpActEvt_Run_K2Node_InputActionEvent_2")  return;
	if (EventName == "Function Gregory.Gregory_C.InpActEvt_Run_K2Node_InputActionEvent_3")  return;
	if (EventName == "Function JumpscarePawn.JumpscarePawn_C.Timeline_1__FinishedFunc")  return;
	if (EventName == "Function AISeeker.AISeeker_C.BndEvt__PlayerCaptureTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature")  return;
	if (EventName == "Function AISeeker.AISeeker_C.BndEvt__PlayerCaptureTrigger_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature")  return;
	if (EventName == "Function Animatrronic_Aim_ABP_LINK.Animatrronic_Aim_ABP_LINK_C.BlueprintBeginPlay")  return;
	if (EventName == "Function BP_MiniGame_Activator.BP_MiniGame_Activator_C.ReceiveActorEndOverlap")  return;
	if (EventName == "Function FogVolume.FogVolume_C.ReceiveActorEndOverlap")  return;
	if (EventName == "Function MainGameGM.MainGameGM_C.FindPlayerStart")  return;
	if (EventName == "Function MAP_TheWorld.MAP_TheWorld_C.BndEvt__ArcadeTrigger_K2Node_ActorBoundEvent_13_ActorEndOverlapSignature__DelegateSignature")  return;
	if (EventName == "Function OptionsUI.OptionsUI_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature")  return;
	if (EventName == "Function POIDetection.POIDetection_C.ExecuteUbergraph_POIDetection")  return;
	if (EventName == "Function RoxyLeap.RoxyLeap_C.ExecuteUbergraph_RoxyLeap")  return;
	if (EventName == "Function UMG.UserWidget.OnFocusLost")  return;
	if (EventName == "Function UMG.UserWidget.OnFocusReceived")  return;
	if (EventName == "Function WI_Gregory_Stamina.WI_Gregory_Stamina_C.Finished_87005B5146310D84D0BBA7A88DF76D17")  return;
	if (EventName == "Function WI_Gregory_Stamina.WI_Gregory_Stamina_C.Finished_910C77124225AE12E5D9A1AE2A438FA4")  return;
	if (EventName == "Function AIModule.AIController.OnGameplayTaskResourcesClaimed")  return;
	if (EventName == "Function EQ_Flashlight.EQ_Flashlight_C.RandomFlicker01Timeline__FinishedFunc")  return;
	if (EventName == "Function FindClosestSeekerPath.FindClosestSeekerPath_C.ExecuteUbergraph_FindClosestSeekerPath")  return;
	if (EventName == "Function FindClosestSeekerPath.FindClosestSeekerPath_C.ReceiveExecuteAI")  return;
	if (EventName == "Function FirstPersonCharacter.FirstPersonCharacter_C.Arm Roll__UpdateFunc")  return;
	if (EventName == "Function FirstPersonCharacter.FirstPersonCharacter_C.Timeline_0__CamShakeTrigger__EventFunc")  return;
	if (EventName == "Function FirstPersonCharacter.FirstPersonCharacter_C.Timeline_0__FinishedFunc    ")  return;
	if (EventName == "Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.BlueprintBeginPlay")  return;
	if (EventName == "Function Gregory_ABP.Gregory_ABP_C.BlueprintBeginPlay")  return;
	if (EventName == "Function Gregory.Gregory_C.Arm Roll__FinishedFunc")  return;
	if (EventName == "Function Gregory.Gregory_C.OnSuccess_7DE12DBC48FB7B17F57E7D93C24D4EB7")  return;
	if (EventName == "Function Gregory.Gregory_C.OnSuccess_D277383849041D09D51CF2BB341D6125")  return;
	if (EventName == "Function Title_ComboBox.Title_ComboBox_C.BndEvt__LeftArrow_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature")  return;
	if (EventName == "Function WI_SplashScreen.WI_SplashScreen_C.Finished_ED02E264450C0755E51C7E8C77320DD8")  return;

	if (EventName == "Function HourlyMoonManSequence.HourlyMoonManSequence_C.SpawnPointRegistered")  return;
	if (EventName == "Function BP_DoorMaster.BP_DoorMaster_C.ExecuteUbergraph_BP_DoorMaster")  return;
	if (EventName == "Function PlayerInteractComponent.PlayerInteractComponent_C.ExecuteUbergraph_PlayerInteractComponent")  return;
	if (EventName == "Function PRE_PartyDoor_Long.PRE_PartyDoor_Long_C.ExecuteUbergraph_PRE_PartyDoor_Long")  return;
	if (EventName == "Function fnaf9.PlayerTrigger.CanTrigger")  return;
	if (EventName == "Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_Racer_AnimGraphNode_SequencePlayer_30643DAE4F9A10C34B6982BDE133B582")  return;
	if (EventName == "Function FogVolume.FogVolume_C.ExecuteUbergraph_FogVolume")  return;
	if (EventName == "Function fnaf9.GameTypeCheckComponent.OnAllowedGameType")  return;
	if (EventName == "Function fnaf9.ConditionCheckInterface.BindConditionUpdatedDelegate")  return;
	if (EventName == "Function fnaf9.ConditionCheckInterface.ConditionsMet")  return;
	if (EventName == "Function PlayerCrouchedService.PlayerCrouchedService_C.ReceiveActivationAI")  return;
	if (EventName == "Function SightDetectionService.SightDetectionService_C.ReceiveActivationAI")  return;
	if (EventName == "Function StaffbotManager.StaffbotManager_C.BndEvt__ConditionalCheck_K2Node_ComponentBoundEvent_0_OnConditionalCheckUpdated__DelegateSignature")  return;
	if (EventName == "Function FNAFGameInstance.FNAFGameInstance_C.ExecuteUbergraph_FNAFGameInstance")  return;
	if (EventName == "Function Camera.Camera_C.ExecuteUbergraph_Camera")  return;
	if (EventName == "Function Engine.PlayerController.ServerUpdateLevelVisibility")  return;
	if (EventName == "Function TurnstileBarOpenable.TurnstileBarOpenable_C.GateOpen__FinishedFunc")  return;
	if (EventName == "Function ScreenStaticSwitcher.ScreenStaticSwitcher_C.Update")  return;
	if (EventName == "Function fnaf9.SaveHandlerInterface.OnGameDataLoaded")  return;
	if (EventName == "Function fnaf9.SaveHandlerInterface.PostGameLoad")  return;
	if (EventName == "Function Gregory.Gregory_C.ReceiveActorBeginOverlap")  return;
	if (EventName == "Function Engine.CameraShake.BlueprintUpdateCameraShake")  return;
	if (EventName == "Function AIModule.PathFollowingComponent.OnActorBump")  return;
	if (EventName == "Function CharacterHourlyMaterialComponent.CharacterHourlyMaterialComponent_C.OnLoaded_9F047F074BE0EE73014FEF95E6406397")  return;
	if (EventName == "Function DJMusicBathroomManager.DJMusicBathroomManager_C.OnTriggered")  return;
	if (EventName == "Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Greg_FirstPerson_ABP_AnimGraphNode_TransitionResult_5AFCD48643B368CE6FA1D3AF4C68FED8")  return;
	if (EventName == "Function StaffBotBase.StaffBotBase_C.OnEndOverlapDoor")  return;
	if (EventName == "Function StaffBotBase.StaffBotBase_C.OnOverlappedDoor")  return;
	if (EventName == "Function Engine.PlayerController.ClientRestart")  return;
	if (EventName == "Function Engine.PlayerController.ClientUpdateLevelStreamingStatus")  return;
	if (EventName == "Function Engine.PlayerController.ServerAcknowledgePossession")  return;
	if (EventName == "Function FirstPersonCharacter.FirstPersonCharacter_C.Timeline_0__UpdateFunc")  return;
	if (EventName == "Function fnaf9.LightingMaterialManager.OnLevelVisible")  return;
	if (EventName == "Function MainGameStartupSequence.MainGameStartupSequence_C.ExecuteUbergraph_MainGameStartupSequence")  return;
	if (EventName == "Function WestArcadeHolesManager.WestArcadeHolesManager_C.Update")  return;
	if (EventName == "Function Animatrronic_Aim_ABP_LINK.Animatrronic_Aim_ABP_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatrronic_Aim_ABP_LINK_AnimGraphNode_RotationOffsetBlendSpace_2006674F4053D037FA770789483272ED")  return;
	if (EventName == "Function CautionBot.CautionBot_C.DoorEntryNotAllowed") return;
	if (EventName == "Function FogVolume.FogVolume_C.ReceiveActorBeginOverlap")  return;
	if (EventName == "Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.ExecuteUbergraph_Greg_FirstPerson_ABP")  return;
	if (EventName == "Function Gregory.Gregory_C.ExecuteUbergraph_Gregory")  return;
	if (EventName == "Function PlayerDistanceService.PlayerDistanceService_C.ReceiveActivationAI")  return;
	if (EventName == "Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_RotationOffsetBlendSpace_7BDAAFA741396C2B6DD3D6A9DA6DE588")  return;
	if (EventName == "Function AreaManager.AreaManager_C.On Player Entered Room")  return;
	if (EventName == "Function AreaManager.AreaManager_C.UserConstructionScript")  return;
	if (EventName == "Function BP_DoorMaster.BP_DoorMaster_C. Close Door__UpdateFunc")  return;
	if (EventName == "Function BP_LazerPlanetManager.BP_LazerPlanetManager_C.SwitchColorForScenario")  return;
	if (EventName == "Function CautionBot.CautionBot_C.OnOverlappedDoor")  return;
	if (EventName == "Function DJMusicMan_Booth.DJMusicMan_Booth_C.BndEvt__Mission Vanish Condition_K2Node_ComponentBoundEvent_5_OnMissionStateConditionMetDelegate__DelegateSignature")  return;
	if (EventName == "Function Engine.GameInstance.ReceiveShutdown")  return;
	if (EventName == "Function Engine.GameModeBase.ChoosePlayerStart")  return;
	if (EventName == "Function EQ_Flashlight.EQ_Flashlight_C.RandomPowerFlicker")  return;
	if (EventName == "Function EQ_LaserGun.EQ_LaserGun_C.UserConstructionScript")  return;
	if (EventName == "Function Freddy_Charge_ABP.Freddy_Charge_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Freddy_Charge_ABP_AnimGraphNode_LookAt_224770D848B70D15F76844B2B0C46257")  return;
	if (EventName == "Function FreddyAIController.FreddyAIController_C.ReceivePossess")  return;
	if (EventName == "Function HourlyMoonManSequence.HourlyMoonManSequence_C.ExecuteUbergraph_HourlyMoonManSequence")  return;
	if (EventName == "Function HourlyMoonManSequence.HourlyMoonManSequence_C.On Level Load Finished")  return;
	if (EventName == "Function LobbyMainEntrance.LobbyMainEntrance_C.BndEvt__GetOutFinished_K2Node_ComponentBoundEvent_0_OnMissionStateConditionMetDelegate__DelegateSignature")  return;
	if (EventName == "Function MainGamePC.MainGamePC_C.ExecuteUbergraph_MainGamePC")  return;
	if (EventName == "Function MainGameStartupSequence.MainGameStartupSequence_C.On Respawn Levels Loaded")  return;
	if (EventName == "Function MAP_WorldAmbience.MAP_WorldAmbience_C.ExecuteUbergraph_MAP_WorldAmbience")  return;
	if (EventName == "Function PlayerHUD.PlayerHUD_C.Hide Objective List")  return;
	if (EventName == "Function SM_Stairs.SM_Stairs_C.Update")  return;
	if (EventName == "Function StageLift.StageLift_C.MoveTimeline__UpdateFunc")  return;
	if (EventName == "Function TitleUI.TitleUI_C.BndEvt__Continue_YesButton_K2Node_ComponentBoundEvent_21_OnClicked__DelegateSignature")  return;
	if (EventName == "Function TitleUI.TitleUI_C.BndEvt__ContinueGameButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature")  return;
	if (EventName == "Function TitleUI.TitleUI_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_78_OnClicked__DelegateSignature")  return;
	if (EventName == "Function WestArcadeDecalManager.WestArcadeDecalManager_C.Update")  return;
	if (EventName == "Function WI_SplashScreen.WI_SplashScreen_C.Finished_8F3160A34A6083471FA244BA44DBA893")  return;
	if (EventName == "Function UMG.VisibilityBinding.GetValue") return;
	if (EventName == "Function OptionsUI.OptionsUI_C.Get_BackgroundAndSkrim_Visibility") return;
	if (EventName == "Function UMG.UserWidget.OnAddedToFocusPath") return;
	if (EventName == "Function TitleButton.TitleButton_C.BndEvt__ButtonText_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature") return;
	if (EventName == "Function TitleButton.TitleButton_C.BndEvt__TopButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature") return;
	if (EventName == "Function Engine.GameModeBase.MustSpectate") return;
	if (EventName == "Function Engine.GameModeBase.GetDefaultPawnClassForController") return;
	if (EventName == "Function Engine.GameModeBase.FindPlayerStart") return;
	if (EventName == "Function Engine.MovementComponent.PhysicsVolumeChanged") return;
	if (EventName == "Function TitleButton.TitleButton_C.BndEvt__ButtonText_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature") return;
	if (EventName == "Function TitlePC.TitlePC_C.ReceiveBeginPlay") return;
	if (EventName == "Function TitleUI.TitleUI_C.BndEvt__OptionsButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature") return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_D3659B3D428301D31EFEC888E50F140A")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672F")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6")  return;
	if (EventName == "Function BoingyBoxABP.BoingyBoxABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BoingyBoxABP_AnimGraphNode_ModifyBone_F94B1B084B276CB9908A59B3D9DC8C24")  return;
	if (EventName == "Function Staffbot_Security_LINK.Staffbot_Security_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_Security_LINK_AnimGraphNode_BlendListByBool_6BCBB770493CB8D2210BF9B0E868031C")  return;
	if (EventName == "Function fnaf9.LevelStreamViewpoint.OnLevelManagerUpdated")  return;
	if (EventName == "Function PlayerInViewService.PlayerInViewService_C.On Sight Changed")  return;
	if (EventName == "Function HourlyMoonManSequence.HourlyMoonManSequence_C.SpawnPointUnregistered")  return;
	if (EventName == "Function PlayerDistanceService.PlayerDistanceService_C.ReceiveSearchStartAI")  return;
	if (EventName == "Function DebugOverlay.DebugOverlay_C.Get_LightScenario_Text_1")  return;
	if (EventName == "Function DebugOverlay.DebugOverlay_C.Get_RoomName_Text_1")  return;
	if (EventName == "Function DebugOverlay.DebugOverlay_C.GetWorldCoordinateText")  return;
	if (EventName == "Function Gregory.Gregory_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_2")  return;
	if (EventName == "Function MainGamePC.MainGamePC_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_173")  return;
	if (EventName == "Function MainGamePC.MainGamePC_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_182")  return;
	if (EventName == "Function MainGamePC.MainGamePC_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_193")  return;
	if (EventName == "Function MainGamePC.MainGamePC_C.InpAxisEvt_OptionsLeft_K2Node_InputAxisEvent_6")  return;
	if (EventName == "Function MainGamePC.MainGamePC_C.InpAxisEvt_OptionsUp_K2Node_InputAxisEvent_3")  return;
	if (EventName == "Function MainGamePC.MainGamePC_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_158")  return;
	if (EventName == "Function MainGamePC.MainGamePC_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39")  return;
	if (EventName == "Function MainGamePC.MainGamePC_C.InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1")  return;
	if (EventName == "Function MainGamePC.MainGamePC_C.InpAxisEvt_ZoomSecurityCamera_K2Node_InputAxisEvent_1")  return;
	if (EventName == "Function StaffBotBase.StaffBotBase_C.BndEvt__AutoAlertRadius_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature")  return;
	if (EventName == "Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Greg_FirstPerson_ABP_AnimGraphNode_TransitionResult_9BFBF4AA4EF8791FF9DE388807B07B4A")  return;
	if (EventName == "Function StaffBotBase.StaffBotBase_C.BndEvt__AutoAlertRadius_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature")  return;
	if (EventName == "Function Gregory_ABP.Gregory_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Gregory_ABP_AnimGraphNode_LayeredBoneBlend_6DC2576044446B5C22273F8F29BFFDB1")  return;
	if (EventName == "Function Gregory_ABP.Gregory_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Gregory_ABP_AnimGraphNode_TransitionResult_7069DBDA4547F5CEAC016392E73BD13F")  return;
	if (EventName == "Function EQ_Flashlight.EQ_Flashlight_C.Timeline_3__UpdateFunc")  return;
	if (EventName == "Function EQ_Flashlight.EQ_Flashlight_C.Timeline_6__UpdateFunc")  return;
	if (EventName == "Function AnimNotify_AkLoopingAudio.AnimNotify_AkLoopingAudio_C.Received_NotifyEnd")  return;
	if (EventName == "Function Engine.CharacterMovementComponent.CapsuleTouched")  return;
	if (EventName == "Function AnimNotify_ServoMovement.AnimNotify_ServoMovement_C.Received_NotifyBegin")  return;
	if (EventName == "Function FindFreddyInteractible.FindFreddyInteractible_C.ReceiveExecuteAI")  return;
	if (EventName == "Function StartupMissionTrigger.StartupMissionTrigger_C.ExecuteUbergraph_StartupMissionTrigger")  return;
	if (EventName == "Function PRE_Advertising_Standee.PRE_Advertising_Standee_C.AdvertisingStandee")  return;
	if (EventName == "Function BP_AmbienceVolume.BP_AmbienceVolume_C.Change Ambience")  return;
	if (EventName == "Function TensionControl.TensionControl_C.ExecuteUbergraph_TensionControl")  return;
	if (EventName == "Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_LayeredBoneBlend_40124A0E42CA80CA07A1FF90DBA8AEB8")  return;
	if (EventName == "Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_ModifyBone_3B824F8E48009B840B4521ABEADE8F4F")  return;
	if (EventName == "Function EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_AnimDynamics_84B96FA94215BB4D477D6C9C9E798AD5")  return;
	if (EventName == "Function EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_AnimDynamics_270F7B28448A8D07EE69D4B063D63517")  return;
	if (EventName == "Function EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_LookAt_A05302BF4806E57BF3FAE784A1498827")  return;
	if (EventName == "Function EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_LookAt_31DEA7D14B7CD131BA633FBB5EBB05EC")  return;
	if (EventName == "Function StageLift.StageLift_C.RailingTimeline__UpdateFunc")  return;
	if (EventName == "Function Animatrronic_Aim_ABP_LINK.Animatrronic_Aim_ABP_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatrronic_Aim_ABP_LINK_AnimGraphNode_RotationOffsetBlendSpace_44E21F9F4F87B07FD730F495C7BC12D4")  return;
	if (EventName == "Function StaffbotInteractionPoint.StaffbotInteractionPoint_C.BndEvt__InteractionPoint_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature")  return;
	if (EventName == "Function FollowSpline.FollowSpline_C.ReceiveAbortAI")  return;
	if (EventName == "Function FindClosestSplinePoint.FindClosestSplinePoint_C.ReceiveExecuteAI")  return;
	if (EventName == "Function PlayerCrouchedService.PlayerCrouchedService_C.ReceiveSearchStartAI")  return;
	if (EventName == "Function SetHeadAim.SetHeadAim_C.ReceiveExecuteAI")  return;
	if (EventName == "Function StaffBotBase.StaffBotBase_C.ExecuteUbergraph_StaffBotBase")  return;
	if (EventName == "Function StopAlert.StopAlert_C.ReceiveExecuteAI")  return;
	if (EventName == "Function EQ_Flashlight.EQ_Flashlight_C.Timeline_0__UpdateFunc")  return;
	if (EventName == "Function Security_PlayTurnAnim.Security_PlayTurnAnim_C.ReceiveExecuteAI")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6Function EQ_Flashlight.EQ_Flashlight_C.Timeline_6__UpdateFunc")  return;
	if (EventName == "Function BoingyBoxABP.BoingyBoxABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BoingyBoxABP_AnimGraphNode_ModifyBone_F94B1B084B276CB9908A59B3D9DC8C24Function BoingyBoxABP.BoingyBoxABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BoingyBoxABP_AnimGraphNode_ModifyBone_F94B1B084B276CB9908A59B3D9DC8C24")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_D3659B3D428301D31EFEC888E50F140AFunction Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6")  return;
	if (EventName == "Function SightDetectionService.SightDetectionService_C.ReceiveDeactivationAI")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_D3659B3D428301D31EFEC888E50F140AFunction Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_D3659B3D428301D31EFEC888E50F140A")  return;
	if (EventName == "Function EQ_Flashlight.EQ_Flashlight_C.Timeline_6__UpdateFuncFunction Staffbot_Security_LINK.Staffbot_Security_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_Security_LINK_AnimGraphNode_BlendListByBool_6BCBB770493CB8D2210BF9B0E868031C")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_D3659B3D428301D31EFEC888E50F140A")  return;
	if (EventName == "Function Gregory_ABP.Gregory_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Gregory_ABP_AnimGraphNode_SequenceEvaluator_05D2BB4F4C5EF779D942BFBCCF11CA3E")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_D3659B3D428301D31EFEC888E50F140AFunction Staffbot_Security_LINK.Staffbot_Security_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_Security_LINK_AnimGraphNode_BlendListByBool_6BCBB770493CB8D2210BF9B0E868031C")  return;
	if (EventName == "Function Gregory_ABP.Gregory_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Gregory_ABP_AnimGraphNode_TransitionResult_AA8FD8554A7A17F6CAC7BABE4794F4A8")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672FFunction EQ_Flashlight.EQ_Flashlight_C.Timeline_3__UpdateFunc")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672FFunction Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_D3659B3D428301D31EFEC888E50F140A")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672FFunction Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672F")  return;
	if (EventName == "Function UMG.UserWidget.Destruct")  return;
	if (EventName == "Function Animatrronic_Aim_ABP_LINK.Animatrronic_Aim_ABP_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatrronic_Aim_ABP_LINK_AnimGraphNode_RotationOffsetBlendSpace_44E21F9F4F87B07FD730F495C7BC12D4Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672F")  return;
	if (EventName == "Function Staffbot_Security_LINK.Staffbot_Security_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_Security_LINK_AnimGraphNode_BlendListByBool_6BCBB770493CB8D2210BF9B0E868031CFunction Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_D3659B3D428301D31EFEC888E50F140A")  return;
	if (EventName == "Function EQ_Flashlight.EQ_Flashlight_C.Timeline_3__UpdateFuncFunction Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672F")  return;
	if (EventName == "Function Gregory_ABP.Gregory_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Gregory_ABP_AnimGraphNode_TransitionResult_7069DBDA4547F5CEAC016392E73BD13FFunction Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6Function Gregory_ABP.Gregory_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Gregory_ABP_AnimGraphNode_TransitionResult_7069DBDA4547F5CEAC016392E73BD13F")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672FFunction Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6")  return;
	if (EventName == "Function Staffbot_Security_LINK.Staffbot_Security_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_Security_LINK_AnimGraphNode_BlendListByBool_6BCBB770493CB8D2210BF9B0E868031CFunction Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672F")  return;
	if (EventName == "Function EQ_Flashlight.EQ_Flashlight_C.Timeline_6__UpdateFuncFunction Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6")  return;
	if (EventName == "Function Gregory_ABP.Gregory_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Gregory_ABP_AnimGraphNode_LayeredBoneBlend_6DC2576044446B5C22273F8F29BFFDB1Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672FFunction Staffbot_Security_LINK.Staffbot_Security_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_Security_LINK_AnimGraphNode_BlendListByBool_6BCBB770493CB8D2210BF9B0E868031C")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_D3659B3D428301D31EFEC888E50F140AFunction Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672F")  return;
	if (EventName == "Function Staffbot_Security_LINK.Staffbot_Security_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_Security_LINK_AnimGraphNode_BlendListByBool_6BCBB770493CB8D2210BF9B0E868031CFunction Staffbot_Security_LINK.Staffbot_Security_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_Security_LINK_AnimGraphNode_BlendListByBool_6BCBB770493CB8D2210BF9B0E868031C")  return;
	if (EventName == "Function StaffBotSecurityPatrol.StaffBotSecurityPatrol_C.DoorEntryNotAllowed")  return;
	if (EventName == "Function AnimNotify_AkEvent.AnimNotify_AkEvent_C.Received_Notify")  return;
	if (EventName == "Function Engine.ActorComponent.SetActive")  return;
	if (EventName == "Function EQ_Flashlight.EQ_Flashlight_C.Timeline_1__UpdateFunc")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6Function EQ_Flashlight.EQ_Flashlight_C.Timeline_3__UpdateFunc")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6Function Staffbot_Security_LINK.Staffbot_Security_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_Security_LINK_AnimGraphNode_BlendListByBool_6BCBB770493CB8D2210BF9B0E868031C")  return;
	if (EventName == "Function EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_LookAt_31DEA7D14B7CD131BA633FBB5EBB05ECFunction Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6")  return;
	if (EventName == "Function EQ_Flashlight.EQ_Flashlight_C.Timeline_3__UpdateFuncFunction Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_D3659B3D428301D31EFEC888E50F140A")  return;
	if (EventName == "Function EQ_Flashlight.EQ_Flashlight_C.Timeline_3__UpdateFuncFunction Staffbot_Security_LINK.Staffbot_Security_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_Security_LINK_AnimGraphNode_BlendListByBool_6BCBB770493CB8D2210BF9B0E868031C")  return;
	if (EventName == "Function Staffbot_Security_LINK.Staffbot_Security_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_Security_LINK_AnimGraphNode_BlendListByBool_6BCBB770493CB8D2210BF9B0E868031CFunction EQ_Flashlight.EQ_Flashlight_C.Timeline_3__UpdateFunc")  return;
	if (EventName == "Function Staffbot_Security_LINK.Staffbot_Security_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_Security_LINK_AnimGraphNode_BlendListByBool_6BCBB770493CB8D2210BF9B0E868031CFunction Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6")  return;
	if (EventName == "Function AnimationMusicManTeleportSpawnTrigger.AnimationMusicManTeleportSpawnTrigger_C.OnTriggered")  return;
	if (EventName == "Function AnimationMusicManTeleportSpawnTrigger.AnimationMusicManTeleportSpawnTrigger_C.ReceiveActorBeginOverlap")  return;
	if (EventName == "Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.ExecuteUbergraph_Animatronic_ABP_MASTER")  return;
	if (EventName == "Function Greg_FirstPerson_ABP.Greg_FirstPerson_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Greg_FirstPerson_ABP_AnimGraphNode_TransitionResult_9BFBF4AA4EF8791FF9DE388807B07B4AFunction BoingyBoxABP.BoingyBoxABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BoingyBoxABP_AnimGraphNode_ModifyBone_F94B1B084B276CB9908A59B3D9DC8C24")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_D3659B3D428301D31EFEC888E50F140AFunction EQ_Flashlight.EQ_Flashlight_C.Timeline_6__UpdateFunc")  return;
	if (EventName == "Function BoingyBoxABP.BoingyBoxABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BoingyBoxABP_AnimGraphNode_ModifyBone_F94B1B084B276CB9908A59B3D9DC8C24Function Gregory_ABP.Gregory_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Gregory_ABP_AnimGraphNode_LayeredBoneBlend_6DC2576044446B5C22273F8F29BFFDB1")  return;
	if (EventName == "Function BP_DoorMaster.BP_DoorMaster_C.BndEvt__Door_Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature")  return;
	if (EventName == "Function BP_DoorMaster.BP_DoorMaster_C.BndEvt__Door_Collision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature")  return;
	if (EventName == "Function EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_LookAt_A05302BF4806E57BF3FAE784A1498827Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672F")  return;
	if (EventName == "Function EQ_Flashlight.EQ_Flashlight_C.Timeline_6__UpdateFuncFunction Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672F")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_ModifyBone_3B824F8E48009B840B4521ABEADE8F4F")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_D3659B3D428301D31EFEC888E50F140AFunction EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_AnimDynamics_84B96FA94215BB4D477D6C9C9E798AD5")  return;
	if (EventName == "Function Staffbot_Security_LINK.Staffbot_Security_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_Security_LINK_AnimGraphNode_BlendListByBool_6BCBB770493CB8D2210BF9B0E868031CFunction EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_AnimDynamics_270F7B28448A8D07EE69D4B063D63517")  return;
	if (EventName == "Function Animatrronic_Aim_ABP_LINK.Animatrronic_Aim_ABP_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatrronic_Aim_ABP_LINK_AnimGraphNode_RotationOffsetBlendSpace_44E21F9F4F87B07FD730F495C7BC12D4Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672F")  return;
	if (EventName == "Function BoingyBoxABP.BoingyBoxABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BoingyBoxABP_AnimGraphNode_ModifyBone_F94B1B084B276CB9908A59B3D9DC8C24Function BoingyBoxABP.BoingyBoxABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BoingyBoxABP_AnimGraphNode_ModifyBone_F94B1B084B276CB9908A59B3D9DC8C24Function Gregory_ABP.Gregory_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Gregory_ABP_AnimGraphNode_LayeredBoneBlend_6DC2576044446B5C22273F8F29BFFDB1")  return;
	if (EventName == "Function BoingyBoxABP.BoingyBoxABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BoingyBoxABP_AnimGraphNode_ModifyBone_F94B1B084B276CB9908A59B3D9DC8C24Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6")  return;
	if (EventName == "Function DoorManager.DoorManager_C.On Door Destroyed")  return;
	if (EventName == "Function EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_AnimDynamics_270F7B28448A8D07EE69D4B063D63517Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6")  return;
	if (EventName == "Function EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_LookAt_A05302BF4806E57BF3FAE784A1498827Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6")  return;
	if (EventName == "Function Gregory_ABP.Gregory_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Gregory_ABP_AnimGraphNode_LayeredBoneBlend_6DC2576044446B5C22273F8F29BFFDB1Function Animatrronic_Aim_ABP_LINK.Animatrronic_Aim_ABP_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatrronic_Aim_ABP_LINK_AnimGraphNode_RotationOffsetBlendSpace_44E21F9F4F87B07FD730F495C7BC12D4")  return;
	if (EventName == "Function Gregory_ABP.Gregory_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Gregory_ABP_AnimGraphNode_TransitionResult_7069DBDA4547F5CEAC016392E73BD13FFunction Animatrronic_Aim_ABP_LINK.Animatrronic_Aim_ABP_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatrronic_Aim_ABP_LINK_AnimGraphNode_RotationOffsetBlendSpace_44E21F9F4F87B07FD730F495C7BC12D4")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6Function BoingyBoxABP.BoingyBoxABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BoingyBoxABP_AnimGraphNode_ModifyBone_F94B1B084B276CB9908A59B3D9DC8C24")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6Function EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_LookAt_31DEA7D14B7CD131BA633FBB5EBB05EC")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672FFunction EQ_Flashlight.EQ_Flashlight_C.Timeline_6__UpdateFunc")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672FFunction Gregory_ABP.Gregory_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Gregory_ABP_AnimGraphNode_TransitionResult_7069DBDA4547F5CEAC016392E73BD13F")  return;
	if (EventName == "Function StageLift.StageLift_C.RailingTimeline__UpdateFuncFunction Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_D3659B3D428301D31EFEC888E50F140A")  return;
	if (EventName == "Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_ModifyBone_3B824F8E48009B840B4521ABEADE8F4FFunction Staffbot_Security_LINK.Staffbot_Security_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_Security_LINK_AnimGraphNode_BlendListByBool_6BCBB770493CB8D2210BF9B0E868031C")  return;
	if (EventName == "Function BoingyBoxABP.BoingyBoxABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BoingyBoxABP_AnimGraphNode_ModifyBone_F94B1B084B276CB9908A59B3D9DC8C24Function Animatrronic_Aim_ABP_LINK.Animatrronic_Aim_ABP_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatrronic_Aim_ABP_LINK_AnimGraphNode_RotationOffsetBlendSpace_44E21F9F4F87B07FD730F495C7BC12D4")  return;
	if (EventName == "Function BoingyBoxABP.BoingyBoxABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BoingyBoxABP_AnimGraphNode_ModifyBone_F94B1B084B276CB9908A59B3D9DC8C24Function Gregory_ABP.Gregory_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Gregory_ABP_AnimGraphNode_TransitionResult_7069DBDA4547F5CEAC016392E73BD13F")  return;
	if (EventName == "Function EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_AnimDynamics_270F7B28448A8D07EE69D4B063D63517Function Staffbot_Security_LINK.Staffbot_Security_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_Security_LINK_AnimGraphNode_BlendListByBool_6BCBB770493CB8D2210BF9B0E868031C")  return;
	if (EventName == "Function EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_LookAt_A05302BF4806E57BF3FAE784A1498827Function Staffbot_Security_LINK.Staffbot_Security_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_Security_LINK_AnimGraphNode_BlendListByBool_6BCBB770493CB8D2210BF9B0E868031C")  return;
	if (EventName == "Function EQ_Flashlight.EQ_Flashlight_C.Timeline_6__UpdateFuncFunction Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_LayeredBoneBlend_40124A0E42CA80CA07A1FF90DBA8AEB8")  return;
	if (EventName == "Function EQ_Flashlight.EQ_Flashlight_C.Timeline_6__UpdateFuncFunction EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_AnimDynamics_84B96FA94215BB4D477D6C9C9E798AD5Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6")  return;
	if (EventName == "Function EQ_Flashlight.EQ_Flashlight_C.Timeline_6__UpdateFuncFunction Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_D3659B3D428301D31EFEC888E50F140A")  return;
	if (EventName == "Function FreddyAIController.FreddyAIController_C.ReceiveUnPossess")  return;
	if (EventName == "Function Gregory_ABP.Gregory_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Gregory_ABP_AnimGraphNode_LayeredBoneBlend_6DC2576044446B5C22273F8F29BFFDB1Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_ModifyBone_3B824F8E48009B840B4521ABEADE8F4F")  return;
	if (EventName == "Function Gregory_ABP.Gregory_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Gregory_ABP_AnimGraphNode_TransitionResult_7069DBDA4547F5CEAC016392E73BD13FFunction EQ_Flashlight.EQ_Flashlight_C.Timeline_3__UpdateFunc")  return;
	if (EventName == "Function Gregory_ABP.Gregory_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Gregory_ABP_AnimGraphNode_TransitionResult_7069DBDA4547F5CEAC016392E73BD13FFunction Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672F")  return;
	if (EventName == "Function MainGamePC.MainGamePC_C.ReceiveUnPossess")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6Function EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_LookAt_A05302BF4806E57BF3FAE784A1498827")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672FFunction EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_LookAt_31DEA7D14B7CD131BA633FBB5EBB05EC")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672FFunction EQ_Flashlight.EQ_Flashlight_C.Timeline_3__UpdateFuncFunction Staffbot_Security_LINK.Staffbot_Security_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_Security_LINK_AnimGraphNode_BlendListByBool_6BCBB770493CB8D2210BF9B0E868031C")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672FFunction StageLift.StageLift_C.RailingTimeline__UpdateFunc")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_D3659B3D428301D31EFEC888E50F140AFunction EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_AnimDynamics_270F7B28448A8D07EE69D4B063D63517")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_D3659B3D428301D31EFEC888E50F140AFunction Gregory_ABP.Gregory_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Gregory_ABP_AnimGraphNode_TransitionResult_7069DBDA4547F5CEAC016392E73BD13F")  return;
	if (EventName == "Function Staffbot_Security_LINK.Staffbot_Security_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_Security_LINK_AnimGraphNode_BlendListByBool_6BCBB770493CB8D2210BF9B0E868031CFunction Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_LayeredBoneBlend_40124A0E42CA80CA07A1FF90DBA8AEB8")  return;
	if (EventName == "Function Staffbot_Security_LINK.Staffbot_Security_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_Security_LINK_AnimGraphNode_BlendListByBool_6BCBB770493CB8D2210BF9B0E868031CFunction EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_LookAt_A05302BF4806E57BF3FAE784A1498827")  return;
	if (EventName == "Function Animatronic_ABP_Freddy.Animatronic_ABP_Freddy_C.PlayWaveAnim")  return;
	if (EventName == "Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_LayeredBoneBlend_40124A0E42CA80CA07A1FF90DBA8AEB8Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672F")  return;
	if (EventName == "Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_LayeredBoneBlend_40124A0E42CA80CA07A1FF90DBA8AEB8Function StageLift.StageLift_C.RailingTimeline__UpdateFunc")  return;
	if (EventName == "Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_ModifyBone_3B824F8E48009B840B4521ABEADE8F4FFunction Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6")  return;
	if (EventName == "Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_ModifyBone_3B824F8E48009B840B4521ABEADE8F4FFunction Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672F")  return;
	if (EventName == "Function Animatrronic_Aim_ABP_LINK.Animatrronic_Aim_ABP_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatrronic_Aim_ABP_LINK_AnimGraphNode_RotationOffsetBlendSpace_44E21F9F4F87B07FD730F495C7BC12D4Function EQ_Flashlight.EQ_Flashlight_C.Timeline_3__UpdateFunc")  return;
	if (EventName == "Function Animatrronic_Aim_ABP_LINK.Animatrronic_Aim_ABP_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatrronic_Aim_ABP_LINK_AnimGraphNode_RotationOffsetBlendSpace_44E21F9F4F87B07FD730F495C7BC12D4Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6Function Gregory_ABP.Gregory_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Gregory_ABP_AnimGraphNode_TransitionResult_7069DBDA4547F5CEAC016392E73BD13F")  return;
	if (EventName == "Function Animatrronic_Aim_ABP_LINK.Animatrronic_Aim_ABP_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatrronic_Aim_ABP_LINK_AnimGraphNode_RotationOffsetBlendSpace_44E21F9F4F87B07FD730F495C7BC12D4Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6")  return;
	if (EventName == "Function Animatrronic_Aim_ABP_LINK.Animatrronic_Aim_ABP_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatrronic_Aim_ABP_LINK_AnimGraphNode_RotationOffsetBlendSpace_44E21F9F4F87B07FD730F495C7BC12D4Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6Function EQ_Flashlight.EQ_Flashlight_C.Timeline_6__UpdateFunc")  return;
	if (EventName == "Function Animatrronic_Aim_ABP_LINK.Animatrronic_Aim_ABP_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatrronic_Aim_ABP_LINK_AnimGraphNode_RotationOffsetBlendSpace_44E21F9F4F87B07FD730F495C7BC12D4Function Staffbot_Security_LINK.Staffbot_Security_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_Security_LINK_AnimGraphNode_BlendListByBool_6BCBB770493CB8D2210BF9B0E868031CFunction EQ_Flashlight.EQ_Flashlight_C.Timeline_6__UpdateFunc")  return;
	if (EventName == "Function BoingyBoxABP.BoingyBoxABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BoingyBoxABP_AnimGraphNode_ModifyBone_F94B1B084B276CB9908A59B3D9DC8C24Function EQ_Flashlight.EQ_Flashlight_C.Timeline_3__UpdateFunc")  return;
	if (EventName == "Function BoingyBoxABP.BoingyBoxABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BoingyBoxABP_AnimGraphNode_ModifyBone_F94B1B084B276CB9908A59B3D9DC8C24Function Gregory_ABP.Gregory_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Gregory_ABP_AnimGraphNode_TransitionResult_7069DBDA4547F5CEAC016392E73BD13FFunction Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6Function Staffbot_Security_LINK.Staffbot_Security_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_Security_LINK_AnimGraphNode_BlendListByBool_6BCBB770493CB8D2210BF9B0E868031C")  return;
	if (EventName == "Function BoingyBoxABP.BoingyBoxABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BoingyBoxABP_AnimGraphNode_ModifyBone_F94B1B084B276CB9908A59B3D9DC8C24Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6Function Gregory_ABP.Gregory_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Gregory_ABP_AnimGraphNode_TransitionResult_7069DBDA4547F5CEAC016392E73BD13F")  return;
	if (EventName == "Function BoingyBoxABP.BoingyBoxABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BoingyBoxABP_AnimGraphNode_ModifyBone_F94B1B084B276CB9908A59B3D9DC8C24Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672F")  return;
	if (EventName == "Function BoingyBoxABP.BoingyBoxABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BoingyBoxABP_AnimGraphNode_ModifyBone_F94B1B084B276CB9908A59B3D9DC8C24Function Staffbot_Security_LINK.Staffbot_Security_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_Security_LINK_AnimGraphNode_BlendListByBool_6BCBB770493CB8D2210BF9B0E868031C")  return;
	if (EventName == "Function BoingyBoxABP.BoingyBoxABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BoingyBoxABP_AnimGraphNode_ModifyBone_F94B1B084B276CB9908A59B3D9DC8C24Function Staffbot_Security_LINK.Staffbot_Security_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_Security_LINK_AnimGraphNode_BlendListByBool_6BCBB770493CB8D2210BF9B0E868031CFunction Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672F")  return;
	if (EventName == "Function EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_AnimDynamics_270F7B28448A8D07EE69D4B063D63517Function EQ_Flashlight.EQ_Flashlight_C.Timeline_3__UpdateFunc")  return;
	if (EventName == "Function EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_AnimDynamics_270F7B28448A8D07EE69D4B063D63517Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_D3659B3D428301D31EFEC888E50F140A")  return;
	if (EventName == "Function EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_AnimDynamics_270F7B28448A8D07EE69D4B063D63517Function StageLift.StageLift_C.RailingTimeline__UpdateFunc")  return;
	if (EventName == "Function EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_AnimDynamics_84B96FA94215BB4D477D6C9C9E798AD5Function EQ_Flashlight.EQ_Flashlight_C.Timeline_6__UpdateFunc")  return;
	if (EventName == "Function EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_AnimDynamics_84B96FA94215BB4D477D6C9C9E798AD5Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672F")  return;
	if (EventName == "Function EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_AnimDynamics_84B96FA94215BB4D477D6C9C9E798AD5Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_D3659B3D428301D31EFEC888E50F140A")  return;
	if (EventName == "Function EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_LookAt_31DEA7D14B7CD131BA633FBB5EBB05ECFunction Gregory_ABP.Gregory_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Gregory_ABP_AnimGraphNode_TransitionResult_7069DBDA4547F5CEAC016392E73BD13F")  return;
	if (EventName == "Function EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_LookAt_31DEA7D14B7CD131BA633FBB5EBB05ECFunction Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672F")  return;
	if (EventName == "Function EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_LookAt_31DEA7D14B7CD131BA633FBB5EBB05ECFunction Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_D3659B3D428301D31EFEC888E50F140A")  return;
	if (EventName == "Function EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_LookAt_31DEA7D14B7CD131BA633FBB5EBB05ECFunction Staffbot_Security_LINK.Staffbot_Security_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_Security_LINK_AnimGraphNode_BlendListByBool_6BCBB770493CB8D2210BF9B0E868031C")  return;
	if (EventName == "Function EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_LookAt_A05302BF4806E57BF3FAE784A1498827Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672FFunction Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672F")  return;
	if (EventName == "Function EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_LookAt_A05302BF4806E57BF3FAE784A1498827Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_D3659B3D428301D31EFEC888E50F140A")  return;
	if (EventName == "Function Engine.ActorComponent.SetActiveFunction HourlyMoonManSequence.HourlyMoonManSequence_C.SpawnPointUnregistered")  return;
	if (EventName == "Function EQ_Flashlight.EQ_Flashlight_C.Timeline_0__FinishedFunc")  return;
	if (EventName == "Function EQ_Flashlight.EQ_Flashlight_C.Timeline_1__FinishedFunc")  return;
	if (EventName == "Function EQ_Flashlight.EQ_Flashlight_C.Timeline_3__UpdateFuncFunction EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_LookAt_31DEA7D14B7CD131BA633FBB5EBB05EC")  return;
	if (EventName == "Function EQ_Flashlight.EQ_Flashlight_C.Timeline_3__UpdateFuncFunction EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_LookAt_A05302BF4806E57BF3FAE784A1498827")  return;
	if (EventName == "Function EQ_Flashlight.EQ_Flashlight_C.Timeline_3__UpdateFuncFunction EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_LookAt_A05302BF4806E57BF3FAE784A1498827Function Staffbot_Security_LINK.Staffbot_Security_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_Security_LINK_AnimGraphNode_BlendListByBool_6BCBB770493CB8D2210BF9B0E868031C")  return;
	if (EventName == "Function EQ_Flashlight.EQ_Flashlight_C.Timeline_3__UpdateFuncFunction Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672FFunction Staffbot_Security_LINK.Staffbot_Security_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_Security_LINK_AnimGraphNode_BlendListByBool_6BCBB770493CB8D2210BF9B0E868031C")  return;
	if (EventName == "Function EQ_Flashlight.EQ_Flashlight_C.Timeline_6__UpdateFuncFunction BoingyBoxABP.BoingyBoxABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BoingyBoxABP_AnimGraphNode_ModifyBone_F94B1B084B276CB9908A59B3D9DC8C24")  return;
	if (EventName == "Function EQ_Flashlight.EQ_Flashlight_C.Timeline_6__UpdateFuncFunction Gregory_ABP.Gregory_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Gregory_ABP_AnimGraphNode_TransitionResult_7069DBDA4547F5CEAC016392E73BD13F")  return;
	if (EventName == "Function EQ_Flashlight.EQ_Flashlight_C.Timeline_6__UpdateFuncFunction Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_D3659B3D428301D31EFEC888E50F140A")  return;
	if (EventName == "Function EQ_Flashlight.EQ_Flashlight_C.Timeline_6__UpdateFuncFunction Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6Function Staffbot_Security_LINK.Staffbot_Security_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_Security_LINK_AnimGraphNode_BlendListByBool_6BCBB770493CB8D2210BF9B0E868031C")  return;
	if (EventName == "Function EQ_Flashlight.EQ_Flashlight_C.Timeline_6__UpdateFuncFunction Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_D3659B3D428301D31EFEC888E50F140AFunction Staffbot_Security_LINK.Staffbot_Security_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_Security_LINK_AnimGraphNode_BlendListByBool_6BCBB770493CB8D2210BF9B0E868031C")  return;
	if (EventName == "Function fnaf9.LevelStreamViewpoint.OnLevelManagerUpdatedFunction Engine.ActorComponent.SetActive")  return;
	if (EventName == "Function FollowSpline.FollowSpline_C.ReceiveAbortAIFunction Engine.ActorComponent.SetActive")  return;
	if (EventName == "Function Gregory_ABP.Gregory_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Gregory_ABP_AnimGraphNode_LayeredBoneBlend_6DC2576044446B5C22273F8F29BFFDB1Function Animatrronic_Aim_ABP_LINK.Animatrronic_Aim_ABP_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatrronic_Aim_ABP_LINK_AnimGraphNode_RotationOffsetBlendSpace_44E21F9F4F87B07FD730F495C7BC12D4Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6")  return;
	if (EventName == "Function Gregory_ABP.Gregory_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Gregory_ABP_AnimGraphNode_LayeredBoneBlend_6DC2576044446B5C22273F8F29BFFDB1Function EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_LookAt_31DEA7D14B7CD131BA633FBB5EBB05EC")  return;
	if (EventName == "Function Gregory_ABP.Gregory_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Gregory_ABP_AnimGraphNode_LayeredBoneBlend_6DC2576044446B5C22273F8F29BFFDB1Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6")  return;
	if (EventName == "Function Gregory_ABP.Gregory_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Gregory_ABP_AnimGraphNode_LayeredBoneBlend_6DC2576044446B5C22273F8F29BFFDB1Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672F")  return;
	if (EventName == "Function Gregory_ABP.Gregory_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Gregory_ABP_AnimGraphNode_LayeredBoneBlend_6DC2576044446B5C22273F8F29BFFDB1Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672F")  return;
	if (EventName == "Function Gregory_ABP.Gregory_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Gregory_ABP_AnimGraphNode_LayeredBoneBlend_6DC2576044446B5C22273F8F29BFFDB1Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672FFunction EQ_Flashlight.EQ_Flashlight_C.Timeline_3__UpdateFunc")  return;
	if (EventName == "Function Gregory_ABP.Gregory_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Gregory_ABP_AnimGraphNode_TransitionResult_7069DBDA4547F5CEAC016392E73BD13FFunction EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_LookAt_31DEA7D14B7CD131BA633FBB5EBB05EC")  return;
	if (EventName == "Function Gregory_ABP.Gregory_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Gregory_ABP_AnimGraphNode_TransitionResult_7069DBDA4547F5CEAC016392E73BD13FFunction EQ_Flashlight.EQ_Flashlight_C.Timeline_6__UpdateFunc")  return;
	if (EventName == "Function Gregory_ABP.Gregory_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Gregory_ABP_AnimGraphNode_TransitionResult_7069DBDA4547F5CEAC016392E73BD13FFunction Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6Function Staffbot_Security_LINK.Staffbot_Security_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_Security_LINK_AnimGraphNode_BlendListByBool_6BCBB770493CB8D2210BF9B0E868031CFunction BoingyBoxABP.BoingyBoxABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BoingyBoxABP_AnimGraphNode_ModifyBone_F94B1B084B276CB9908A59B3D9DC8C24")  return;
	if (EventName == "Function Gregory_ABP.Gregory_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Gregory_ABP_AnimGraphNode_TransitionResult_7069DBDA4547F5CEAC016392E73BD13FFunction Staffbot_Security_LINK.Staffbot_Security_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_Security_LINK_AnimGraphNode_BlendListByBool_6BCBB770493CB8D2210BF9B0E868031C")  return;
	if (EventName == "Function MainGamePC.MainGamePC_C.InpActEvt_PrimaryAction_K2Node_InputActionEvent_4")  return;
	if (EventName == "Function PlayerInteractComponent.PlayerInteractComponent_C.On Owner End Overlap")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_LayeredBoneBlend_40124A0E42CA80CA07A1FF90DBA8AEB8")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_ModifyBone_3B824F8E48009B840B4521ABEADE8F4FFunction Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672F")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6Function EQ_Flashlight.EQ_Flashlight_C.Timeline_6__UpdateFuncFunction EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_AnimDynamics_84B96FA94215BB4D477D6C9C9E798AD5")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6Function EQ_Flashlight.EQ_Flashlight_C.Timeline_6__UpdateFunc")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6Function Gregory_ABP.Gregory_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Gregory_ABP_AnimGraphNode_TransitionResult_7069DBDA4547F5CEAC016392E73BD13F")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672FFunction Gregory_ABP.Gregory_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Gregory_ABP_AnimGraphNode_TransitionResult_7069DBDA4547F5CEAC016392E73BD13F")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_D3659B3D428301D31EFEC888E50F140AFunction EQ_Flashlight.EQ_Flashlight_C.Timeline_6__UpdateFunc")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6Function Staffbot_Security_LINK.Staffbot_Security_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_Security_LINK_AnimGraphNode_BlendListByBool_6BCBB770493CB8D2210BF9B0E868031CFunction EQ_Flashlight.EQ_Flashlight_C.Timeline_3__UpdateFunc")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672FFunction EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_AnimDynamics_270F7B28448A8D07EE69D4B063D63517")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672FFunction EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_LookAt_31DEA7D14B7CD131BA633FBB5EBB05ECFunction Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672F")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672FFunction Gregory_ABP.Gregory_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Gregory_ABP_AnimGraphNode_TransitionResult_AA8FD8554A7A17F6CAC7BABE4794F4A8Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672F")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672FFunction Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672FFunction Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_ModifyBone_3B824F8E48009B840B4521ABEADE8F4F")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672FFunction Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672FFunction EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_LookAt_A05302BF4806E57BF3FAE784A1498827")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672FFunction Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672FFunction EQ_Flashlight.EQ_Flashlight_C.Timeline_3__UpdateFuncFunction Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_D3659B3D428301D31EFEC888E50F140A")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672FFunction Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672FFunction Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672F")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672FFunction Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672FFunction Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_D3659B3D428301D31EFEC888E50F140A")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672FFunction Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_D3659B3D428301D31EFEC888E50F140AFunction Gregory_ABP.Gregory_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Gregory_ABP_AnimGraphNode_TransitionResult_7069DBDA4547F5CEAC016392E73BD13F")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672FFunction Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_D3659B3D428301D31EFEC888E50F140AFunction Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_D3659B3D428301D31EFEC888E50F140A")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672FFunction Staffbot_Security_LINK.Staffbot_Security_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_Security_LINK_AnimGraphNode_BlendListByBool_6BCBB770493CB8D2210BF9B0E868031CFunction EQ_Flashlight.EQ_Flashlight_C.Timeline_3__UpdateFunc")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672FFunction Staffbot_Security_LINK.Staffbot_Security_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_Security_LINK_AnimGraphNode_BlendListByBool_6BCBB770493CB8D2210BF9B0E868031CFunction Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_D3659B3D428301D31EFEC888E50F140A")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672FFunction Staffbot_Security_LINK.Staffbot_Security_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_Security_LINK_AnimGraphNode_BlendListByBool_6BCBB770493CB8D2210BF9B0E868031CFunction Staffbot_Security_LINK.Staffbot_Security_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_Security_LINK_AnimGraphNode_BlendListByBool_6BCBB770493CB8D2210BF9B0E868031C")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_D3659B3D428301D31EFEC888E50F140AFunction Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_LayeredBoneBlend_40124A0E42CA80CA07A1FF90DBA8AEB8")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_D3659B3D428301D31EFEC888E50F140AFunction EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_AnimDynamics_84B96FA94215BB4D477D6C9C9E798AD5Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_D3659B3D428301D31EFEC888E50F140AFunction EQ_Flashlight.EQ_Flashlight_C.Timeline_1__UpdateFunc")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_D3659B3D428301D31EFEC888E50F140AFunction EQ_Flashlight.EQ_Flashlight_C.Timeline_3__UpdateFuncFunction Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672F")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_D3659B3D428301D31EFEC888E50F140AFunction Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6Function EQ_Flashlight.EQ_Flashlight_C.Timeline_6__UpdateFunc")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_D3659B3D428301D31EFEC888E50F140AFunction Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6")  return;
	if (EventName == "Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_D3659B3D428301D31EFEC888E50F140AFunction Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672FFunction EQ_Flashlight.EQ_Flashlight_C.Timeline_3__UpdateFunc")  return;
	if (EventName == "Function Staffbot_Security_LINK.Staffbot_Security_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_Security_LINK_AnimGraphNode_BlendListByBool_6BCBB770493CB8D2210BF9B0E868031CFunction Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_ModifyBone_3B824F8E48009B840B4521ABEADE8F4F")  return;
	if (EventName == "Function Staffbot_Security_LINK.Staffbot_Security_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_Security_LINK_AnimGraphNode_BlendListByBool_6BCBB770493CB8D2210BF9B0E868031CFunction EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_LookAt_31DEA7D14B7CD131BA633FBB5EBB05EC")  return;
	if (EventName == "Function Staffbot_Security_LINK.Staffbot_Security_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_Security_LINK_AnimGraphNode_BlendListByBool_6BCBB770493CB8D2210BF9B0E868031CFunction EQ_Flashlight.EQ_Flashlight_C.Timeline_3__UpdateFuncFunction EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_AnimDynamics_84B96FA94215BB4D477D6C9C9E798AD5")  return;
	if (EventName == "Function Staffbot_Security_LINK.Staffbot_Security_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_Security_LINK_AnimGraphNode_BlendListByBool_6BCBB770493CB8D2210BF9B0E868031CFunction EQ_Flashlight.EQ_Flashlight_C.Timeline_6__UpdateFunc")  return;
	if (EventName == "Function StageLift.StageLift_C.RailingTimeline__FinishedFunc")  return;
	if (EventName == "Function StageLift.StageLift_C.RailingTimeline__UpdateFuncFunction EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_AnimDynamics_84B96FA94215BB4D477D6C9C9E798AD5")  return;
	if (EventName == "Function StageLift.StageLift_C.RailingTimeline__UpdateFuncFunction EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_LookAt_A05302BF4806E57BF3FAE784A1498827")  return;
	if (EventName == "Function TensionControl.TensionControl_C.ExecuteUbergraph_TensionControlFunction EarDynamicsABP.EarDynamicsABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_EarDynamicsABP_AnimGraphNode_AnimDynamics_84B96FA94215BB4D477D6C9C9E798AD5")  return;

#pragma endregion
	if (Cheats::FreddyGregoryCanAlwaysEnter_Enabled)
	{
		if (EventName == "Function fnaf9.WorldStateSystem.SetCanEnterExitFreddy") return;
	}
	if (Cheats::FreddyCanBeAlwaysCalled_Enabled)
	{
		if (EventName == "Function fnaf9.WorldStateSystem.SetCanCallFreddy") return;
	}
	if (Cheats::AllowAlwaysSaving_Enabled)
	{
		if (EventName == "Function fnaf9.FNAFSaveGameSystem.SetIsSavingAllowed")  return;
		if (EventName == "Function SaveGameActor.SaveGameActor_C.CanPlayerInteract")  return;
	}
	ConsoleTools::ConsoleWrite(EventName);
}

void HkProcessEvent(CG::UObject* thiz, CG::UFunction* function, void* parms)
{
	const std::string functname = function->GetFullName();

	if (Cheats::AllowAlwaysSaving_Enabled)
	{
		if (functname == "Function fnaf9.FNAFSaveGameSystem.SetIsSavingAllowed")
		{
			if (parms != nullptr)
			{
				auto param = (CG::UFNAFSaveGameSystem_SetIsSavingAllowed_Params*)parms;
				if (param != nullptr)
				{
					param->IsSavingAllowed = true;
				}
			}
		}
		if (functname == "Function SaveGameActor.SaveGameActor_C.CanPlayerInteract")
		{
			if (parms != nullptr)
			{
				auto param = (CG::ASaveGameActor_C_CanPlayerInteract_Params*)parms;
				if (param != nullptr)
				{
					param->CanInteract = true;
					param->CantReason = CG::fnaf9_EConditionFailReason::EConditionFailReason__None;
				}
			}
		}
	}
	if (Cheats::NoJumpscares_Enabled)
	{
		// These are all Jumpscares (Letal Events!)

		// There must be something else handling it, because it doesn't trigger any of those!
		if (functname == "Function AISeekerController.AISeekerController_C.Jump Scare")
		{
			ConsoleTools::ConsoleWrite("Blocked " + functname + " Event!");
			return;
		}
		if (functname == "Function AISeeker.AISeeker_C.Jumpscare") {
			ConsoleTools::ConsoleWrite("Blocked " + functname + " Event!");
			return;
		}

		if (functname == "Function AISeeker.AISeeker_C.On Jumpscare") {
			ConsoleTools::ConsoleWrite("Blocked " + functname + " Event!");
			return;
		}

		if (functname == "Function Burntrap_Freddy.Burntrap_Freddy_C.Jump Scare") {
			ConsoleTools::ConsoleWrite("Blocked " + functname + " Event!");
			return;
		}

		if (functname == "Function DJMMBPInterface.DJMMBPInterface_C.Jumpscare") {
			ConsoleTools::ConsoleWrite("Blocked " + functname + " Event!");
			return;
		}

		if (functname == "Function DJMusicMan.DJMusicMan_C.Jumpscare") {
			ConsoleTools::ConsoleWrite("Blocked " + functname + " Event!");
			return;
		}

		if (functname == "Function Freddy.Freddy_C.Jumpscare") {
			ConsoleTools::ConsoleWrite("Blocked " + functname + " Event!");
			return;
		}

		if (functname == "Function Gregory.Gregory_C.LethalJumpscare") {
			ConsoleTools::ConsoleWrite("Blocked " + functname + " Event!");
			return;
		}

		if (functname == "Function fnaf9.FNAFBasePlayerController.OnTriggerVannyScare") {
			ConsoleTools::ConsoleWrite("Blocked " + functname + " Event!");
			return;
		}

		if (functname == "Function MainGamePC.MainGamePC_C.OnTriggerVannyScare") {
			ConsoleTools::ConsoleWrite("Blocked " + functname + " Event!");
			return;
		}

		if (functname == "Function MoonMan_Jumpscare.MoonMan_Jumpscare_C.ExecuteUbergraph_MoonMan_Jumpscare") {
			ConsoleTools::ConsoleWrite("Blocked " + functname + " Event!");
			return;
		}

		if (functname == "Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.Jumpscare") {
			ConsoleTools::ConsoleWrite("Blocked " + functname + " Event!");
			return;
		}

		if (functname == "Function Vanessa.Vanessa_C.On Jumpscare") {
			ConsoleTools::ConsoleWrite("Blocked " + functname + " Event!");
			return;
		}

		if (functname == "Function Vanny.Vanny_C.On Jumpscare") {
			ConsoleTools::ConsoleWrite("Blocked " + functname + " Event!");
			return;
		}

		if (functname == "Function Vanny.Vanny_C.Jumpscare") {
			ConsoleTools::ConsoleWrite("Blocked " + functname + " Event!");
			return;
		}

		if (functname == "Function Gregory.Gregory_C.ReceivePossessed") {
			auto instance = (CG::AGregory_C*)thiz;
			if (instance != nullptr)
			{
				if (Cheats::Active_GregoryInstance == nullptr)
				{
					ConsoleTools::ConsoleWrite("Got active Gregory Instance!");
					Cheats::Active_GregoryInstance = instance;
				}
			}
		}
		// TODO : troubleshoot it a bit because is not working.
		//if (functname == "Function JumpscarePawn.JumpscarePawn_C.ReceivePossessed") {
		//	ConsoleTools::ConsoleWrite("Detected Jumpscare ReceivePossessed!");
		//	auto param = (CG::AJumpscarePawn_C_ReceivePossessed_Params*)parms;
		//	if (param != nullptr)
		//	{
		//		if (param->NewController != nullptr)
		//		{
		//			if (Cheats::Active_GregoryInstance != nullptr)
		//			{
		//				ConsoleTools::ConsoleWrite("Redirected JumpscarePawn ReceivePossessed to Gregory ReceivePossessed!");
		//				Cheats::Active_GregoryInstance->ReceivePossessed(param->NewController);
		//				Cheats::Active_GregoryInstance->
		//					// Then Try to Destroy the Pawn.
		//					auto instance = (CG::AJumpscarePawn_C*)thiz;
		//				if (instance != nullptr)
		//				{
		//					instance->K2_DestroyActor();
		//					ConsoleTools::ConsoleWrite("Destroyed Jumpscare Pawn!");
		//				}

		//				return;
		//			}
		//		}
		//	}

		//}

		if (functname == "Function BP_MiniGameManger.BP_MiniGameManger_C.GregoryKilled") {
			ConsoleTools::ConsoleWrite("Blocked " + functname + " Event!");
			return;
		}
	}
	if (Cheats::FreddyGregoryCanAlwaysEnter_Enabled)
	{
		if (functname == "Function fnaf9.WorldStateSystem.SetCanEnterExitFreddy") {

			if (parms != nullptr)
			{
				auto param = (CG::UWorldStateSystem_SetCanEnterExitFreddy_Params*)parms;
				if (param != nullptr)
				{
					if (!param->bCanEnterExit)
					{
						ConsoleTools::ConsoleWrite("Patched SetCanEnterExitFreddy!");
						param->bCanEnterExit = true;
					}
				}
			}

		}

	}
	if (Cheats::FreddyCanBeAlwaysCalled_Enabled)
	{
		if (functname == "Function fnaf9.WorldStateSystem.SetCanCallFreddy") {
			if (parms != nullptr)
			{
				auto param = (CG::UWorldStateSystem_SetCanCallFreddy_Params*)parms;
				if (param != nullptr)
				{
					if (!param->bCanCall)
					{
						ConsoleTools::ConsoleWrite("Patched SetCanCallFreddy!");
						param->bCanCall = true;
					}
				}
			}
		}

	}

	//ReportEvent(functname);
	oProcessEvent(thiz, function, parms);
}

void StartProcessEventHook()
{
	// Init ProcessEvent Hook
	CG::UObject* uObj = CG::UObject::GetGlobalObjects().GetByIndex(50);
	ProcessEvent peFunc = CG::GetVFunction<ProcessEvent>(uObj, 66);
	bool processEventHooked = MH_CreateHook(peFunc, reinterpret_cast<void*>(HkProcessEvent), reinterpret_cast<void**>(&oProcessEvent)) == MH_OK
		&& MH_EnableHook(peFunc) == MH_OK;
	if (processEventHooked)
	{
		ConsoleTools::ConsoleWrite("Hooked Process Event!");
	}
}

DWORD WINAPI MainThread(LPVOID lpReserved)
{
	if (!CG::InitSdk())
	{
		// TODO: Should handle that
		return FALSE;
	}

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

			std::thread ProcessEventHookThread(StartProcessEventHook);
			ProcessEventHookThread.detach();

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