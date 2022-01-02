#pragma once
#include <thread>

#include "CheatsCode.h"
#include "ConsoleUtils.h"

namespace ModMenu {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Summary for ModMenuGUI
	/// </summary>
	public ref class ModMenuGUI : public System::Windows::Forms::Form
	{
	public:
		ModMenuGUI(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ModMenuGUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ InvokeDebugUIButton;
	private: System::Windows::Forms::GroupBox^ DevBox;
	private: System::Windows::Forms::Label^ DEVUiLabel;
	private: System::Windows::Forms::GroupBox^ FreddyPowerBox;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::CheckBox^ FreezeFreddyCurrentPowerChbx;



	private: System::Windows::Forms::Label^ FreddyPowerInstructions;
	private: System::Windows::Forms::GroupBox^ GregoryCheatsGroupbox;
	private: System::Windows::Forms::GroupBox^ HealthCheatsGpbx;
	private: System::Windows::Forms::CheckBox^ FazBlasterGodModeChbx;
	private: System::Windows::Forms::GroupBox^ WeaponsCheatsGroupbox;
	private: System::Windows::Forms::GroupBox^ FlashLightGrpbx;
	private: System::Windows::Forms::CheckBox^ UnlimitedFlashLightPowerChbx;
	private: System::Windows::Forms::GroupBox^ FazCamGroupbox;
	private: System::Windows::Forms::CheckBox^ FazCamUnlimitedUsageChbx;

	private: System::Windows::Forms::GroupBox^ FazerBlasterGpbx;
	private: System::Windows::Forms::CheckBox^ UnlimitedFazBlasterAmmoChbx;
	private: System::Windows::Forms::CheckBox^ NoBlasterCooldownChbx;
	private: System::Windows::Forms::GroupBox^ GameMechanicsBox;
	private: System::Windows::Forms::CheckBox^ FreezeDoorPowerChbx;
	private: System::Windows::Forms::CheckBox^ NoCollectionTimerChbx;
	private: System::Windows::Forms::CheckBox^ UnlimitedJumpChbx;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ FreddyUpgradesCooldownBox;
	private: System::Windows::Forms::CheckBox^ NoChicaBeakCooldownChbx;
	public: System::Windows::Forms::NumericUpDown^ FreddyMaxPowerNbx;
	public: System::Windows::Forms::NumericUpDown^ FreddyCurrentPowerNbx;
	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->InvokeDebugUIButton = (gcnew System::Windows::Forms::Button());
			this->DevBox = (gcnew System::Windows::Forms::GroupBox());
			this->DEVUiLabel = (gcnew System::Windows::Forms::Label());
			this->FreddyPowerBox = (gcnew System::Windows::Forms::GroupBox());
			this->FreddyMaxPowerNbx = (gcnew System::Windows::Forms::NumericUpDown());
			this->FreddyCurrentPowerNbx = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->FreezeFreddyCurrentPowerChbx = (gcnew System::Windows::Forms::CheckBox());
			this->FreddyPowerInstructions = (gcnew System::Windows::Forms::Label());
			this->GregoryCheatsGroupbox = (gcnew System::Windows::Forms::GroupBox());
			this->UnlimitedJumpChbx = (gcnew System::Windows::Forms::CheckBox());
			this->HealthCheatsGpbx = (gcnew System::Windows::Forms::GroupBox());
			this->FazBlasterGodModeChbx = (gcnew System::Windows::Forms::CheckBox());
			this->WeaponsCheatsGroupbox = (gcnew System::Windows::Forms::GroupBox());
			this->FlashLightGrpbx = (gcnew System::Windows::Forms::GroupBox());
			this->UnlimitedFlashLightPowerChbx = (gcnew System::Windows::Forms::CheckBox());
			this->FazCamGroupbox = (gcnew System::Windows::Forms::GroupBox());
			this->FazCamUnlimitedUsageChbx = (gcnew System::Windows::Forms::CheckBox());
			this->FazerBlasterGpbx = (gcnew System::Windows::Forms::GroupBox());
			this->UnlimitedFazBlasterAmmoChbx = (gcnew System::Windows::Forms::CheckBox());
			this->NoBlasterCooldownChbx = (gcnew System::Windows::Forms::CheckBox());
			this->GameMechanicsBox = (gcnew System::Windows::Forms::GroupBox());
			this->FreezeDoorPowerChbx = (gcnew System::Windows::Forms::CheckBox());
			this->NoCollectionTimerChbx = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->FreddyUpgradesCooldownBox = (gcnew System::Windows::Forms::GroupBox());
			this->NoChicaBeakCooldownChbx = (gcnew System::Windows::Forms::CheckBox());
			this->DevBox->SuspendLayout();
			this->FreddyPowerBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FreddyMaxPowerNbx))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FreddyCurrentPowerNbx))->BeginInit();
			this->GregoryCheatsGroupbox->SuspendLayout();
			this->HealthCheatsGpbx->SuspendLayout();
			this->WeaponsCheatsGroupbox->SuspendLayout();
			this->FlashLightGrpbx->SuspendLayout();
			this->FazCamGroupbox->SuspendLayout();
			this->FazerBlasterGpbx->SuspendLayout();
			this->GameMechanicsBox->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->FreddyUpgradesCooldownBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// InvokeDebugUIButton
			// 
			this->InvokeDebugUIButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->InvokeDebugUIButton->Location = System::Drawing::Point(28, 243);
			this->InvokeDebugUIButton->Name = L"InvokeDebugUIButton";
			this->InvokeDebugUIButton->Size = System::Drawing::Size(412, 91);
			this->InvokeDebugUIButton->TabIndex = 0;
			this->InvokeDebugUIButton->Text = L"Toggle Debug UI";
			this->InvokeDebugUIButton->UseVisualStyleBackColor = true;
			this->InvokeDebugUIButton->Click += gcnew System::EventHandler(this, &ModMenuGUI::InvokeDevUI_Click);
			// 
			// DevBox
			// 
			this->DevBox->Controls->Add(this->DEVUiLabel);
			this->DevBox->Controls->Add(this->InvokeDebugUIButton);
			this->DevBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DevBox->Location = System::Drawing::Point(922, 57);
			this->DevBox->Name = L"DevBox";
			this->DevBox->Size = System::Drawing::Size(465, 618);
			this->DevBox->TabIndex = 1;
			this->DevBox->TabStop = false;
			this->DevBox->Text = L"Dev Tools (Invoke Hidden Dev UI)";
			// 
			// DEVUiLabel
			// 
			this->DEVUiLabel->AutoSize = true;
			this->DEVUiLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DEVUiLabel->Location = System::Drawing::Point(41, 47);
			this->DEVUiLabel->Name = L"DEVUiLabel";
			this->DEVUiLabel->Size = System::Drawing::Size(305, 160);
			this->DEVUiLabel->TabIndex = 1;
			this->DEVUiLabel->Text = L"Invoke Dev UI \r\n\r\nThis invokes the game \r\nbuilt-in Dev Tools.\r\n\r\n";
			// 
			// FreddyPowerBox
			// 
			this->FreddyPowerBox->Controls->Add(this->FreddyMaxPowerNbx);
			this->FreddyPowerBox->Controls->Add(this->FreddyCurrentPowerNbx);
			this->FreddyPowerBox->Controls->Add(this->label2);
			this->FreddyPowerBox->Controls->Add(this->label1);
			this->FreddyPowerBox->Controls->Add(this->FreezeFreddyCurrentPowerChbx);
			this->FreddyPowerBox->Controls->Add(this->FreddyPowerInstructions);
			this->FreddyPowerBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FreddyPowerBox->Location = System::Drawing::Point(551, 43);
			this->FreddyPowerBox->Name = L"FreddyPowerBox";
			this->FreddyPowerBox->Size = System::Drawing::Size(465, 324);
			this->FreddyPowerBox->TabIndex = 2;
			this->FreddyPowerBox->TabStop = false;
			this->FreddyPowerBox->Text = L"Freddy Power";
			// 
			// FreddyMaxPowerNbx
			// 
			this->FreddyMaxPowerNbx->Location = System::Drawing::Point(17, 277);
			this->FreddyMaxPowerNbx->Name = L"FreddyMaxPowerNbx";
			this->FreddyMaxPowerNbx->Size = System::Drawing::Size(267, 30);
			this->FreddyMaxPowerNbx->TabIndex = 7;
			this->FreddyMaxPowerNbx->Maximum = System::Decimal::MaxValue;
			// 
			// FreddyCurrentPowerNbx
			// 
			this->FreddyCurrentPowerNbx->Location = System::Drawing::Point(17, 171);
			this->FreddyCurrentPowerNbx->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999999999, 0, 0, 0 });
			this->FreddyCurrentPowerNbx->Name = L"FreddyCurrentPowerNbx";
			this->FreddyCurrentPowerNbx->Size = System::Drawing::Size(267, 30);
			this->FreddyCurrentPowerNbx->TabIndex = 6;
			this->FreddyCurrentPowerNbx->Maximum = System::Decimal::MaxValue;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 141);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(137, 25);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Current Power";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 238);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 25);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Max Power";
			// 
			// FreezeFreddyCurrentPowerChbx
			// 
			this->FreezeFreddyCurrentPowerChbx->AutoSize = true;
			this->FreezeFreddyCurrentPowerChbx->Location = System::Drawing::Point(323, 172);
			this->FreezeFreddyCurrentPowerChbx->Name = L"FreezeFreddyCurrentPowerChbx";
			this->FreezeFreddyCurrentPowerChbx->Size = System::Drawing::Size(99, 29);
			this->FreezeFreddyCurrentPowerChbx->TabIndex = 3;
			this->FreezeFreddyCurrentPowerChbx->Text = L"Freeze";
			this->FreezeFreddyCurrentPowerChbx->UseVisualStyleBackColor = true;
			this->FreezeFreddyCurrentPowerChbx->CheckedChanged += gcnew System::EventHandler(this, &ModMenuGUI::FreezeFreddyCurrentPowerChbx_CheckedChanged);
			// 
			// FreddyPowerInstructions
			// 
			this->FreddyPowerInstructions->AutoSize = true;
			this->FreddyPowerInstructions->Location = System::Drawing::Point(12, 40);
			this->FreddyPowerInstructions->Name = L"FreddyPowerInstructions";
			this->FreddyPowerInstructions->Size = System::Drawing::Size(449, 50);
			this->FreddyPowerInstructions->TabIndex = 0;
			this->FreddyPowerInstructions->Text = L"Before Modifying, Please Recharge freddy to max, \r\nto get the Max Value, or else "
				L"you get jumpscared!";
			// 
			// GregoryCheatsGroupbox
			// 
			this->GregoryCheatsGroupbox->Controls->Add(this->UnlimitedJumpChbx);
			this->GregoryCheatsGroupbox->Controls->Add(this->HealthCheatsGpbx);
			this->GregoryCheatsGroupbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->GregoryCheatsGroupbox->Location = System::Drawing::Point(10, 19);
			this->GregoryCheatsGroupbox->Name = L"GregoryCheatsGroupbox";
			this->GregoryCheatsGroupbox->Size = System::Drawing::Size(454, 647);
			this->GregoryCheatsGroupbox->TabIndex = 3;
			this->GregoryCheatsGroupbox->TabStop = false;
			this->GregoryCheatsGroupbox->Text = L"Gregory Cheats";
			// 
			// UnlimitedJumpChbx
			// 
			this->UnlimitedJumpChbx->AutoSize = true;
			this->UnlimitedJumpChbx->Location = System::Drawing::Point(12, 60);
			this->UnlimitedJumpChbx->Name = L"UnlimitedJumpChbx";
			this->UnlimitedJumpChbx->Size = System::Drawing::Size(172, 29);
			this->UnlimitedJumpChbx->TabIndex = 9;
			this->UnlimitedJumpChbx->Text = L"Unlimited Jump";
			this->UnlimitedJumpChbx->UseVisualStyleBackColor = true;
			this->UnlimitedJumpChbx->CheckedChanged += gcnew System::EventHandler(this, &ModMenuGUI::UnlimitedJumpChbx_CheckedChanged);
			// 
			// HealthCheatsGpbx
			// 
			this->HealthCheatsGpbx->Controls->Add(this->FazBlasterGodModeChbx);
			this->HealthCheatsGpbx->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HealthCheatsGpbx->Location = System::Drawing::Point(12, 362);
			this->HealthCheatsGpbx->Name = L"HealthCheatsGpbx";
			this->HealthCheatsGpbx->Size = System::Drawing::Size(420, 279);
			this->HealthCheatsGpbx->TabIndex = 8;
			this->HealthCheatsGpbx->TabStop = false;
			this->HealthCheatsGpbx->Text = L"Game Healths Cheats";
			// 
			// FazBlasterGodModeChbx
			// 
			this->FazBlasterGodModeChbx->AutoSize = true;
			this->FazBlasterGodModeChbx->Location = System::Drawing::Point(32, 49);
			this->FazBlasterGodModeChbx->Name = L"FazBlasterGodModeChbx";
			this->FazBlasterGodModeChbx->Size = System::Drawing::Size(233, 29);
			this->FazBlasterGodModeChbx->TabIndex = 0;
			this->FazBlasterGodModeChbx->Text = L"Faz Blaster God Mode";
			this->FazBlasterGodModeChbx->UseVisualStyleBackColor = true;
			this->FazBlasterGodModeChbx->CheckedChanged += gcnew System::EventHandler(this, &ModMenuGUI::FazBlasterGodModeChbx_CheckedChanged);
			// 
			// WeaponsCheatsGroupbox
			// 
			this->WeaponsCheatsGroupbox->Controls->Add(this->FlashLightGrpbx);
			this->WeaponsCheatsGroupbox->Controls->Add(this->FazCamGroupbox);
			this->WeaponsCheatsGroupbox->Controls->Add(this->FazerBlasterGpbx);
			this->WeaponsCheatsGroupbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->WeaponsCheatsGroupbox->Location = System::Drawing::Point(470, 40);
			this->WeaponsCheatsGroupbox->Name = L"WeaponsCheatsGroupbox";
			this->WeaponsCheatsGroupbox->Size = System::Drawing::Size(416, 635);
			this->WeaponsCheatsGroupbox->TabIndex = 4;
			this->WeaponsCheatsGroupbox->TabStop = false;
			this->WeaponsCheatsGroupbox->Text = L"Inventory Cheats";
			// 
			// FlashLightGrpbx
			// 
			this->FlashLightGrpbx->Controls->Add(this->UnlimitedFlashLightPowerChbx);
			this->FlashLightGrpbx->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FlashLightGrpbx->Location = System::Drawing::Point(25, 293);
			this->FlashLightGrpbx->Name = L"FlashLightGrpbx";
			this->FlashLightGrpbx->Size = System::Drawing::Size(355, 96);
			this->FlashLightGrpbx->TabIndex = 7;
			this->FlashLightGrpbx->TabStop = false;
			this->FlashLightGrpbx->Text = L"FlashLight Cheats";
			// 
			// UnlimitedFlashLightPowerChbx
			// 
			this->UnlimitedFlashLightPowerChbx->AutoSize = true;
			this->UnlimitedFlashLightPowerChbx->Location = System::Drawing::Point(32, 49);
			this->UnlimitedFlashLightPowerChbx->Name = L"UnlimitedFlashLightPowerChbx";
			this->UnlimitedFlashLightPowerChbx->Size = System::Drawing::Size(273, 29);
			this->UnlimitedFlashLightPowerChbx->TabIndex = 0;
			this->UnlimitedFlashLightPowerChbx->Text = L"Unlimited FlashLight Power";
			this->UnlimitedFlashLightPowerChbx->UseVisualStyleBackColor = true;
			this->UnlimitedFlashLightPowerChbx->CheckedChanged += gcnew System::EventHandler(this, &ModMenuGUI::UnlimitedFlashLightPowerChbx_CheckedChanged);
			// 
			// FazCamGroupbox
			// 
			this->FazCamGroupbox->Controls->Add(this->FazCamUnlimitedUsageChbx);
			this->FazCamGroupbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FazCamGroupbox->Location = System::Drawing::Point(25, 185);
			this->FazCamGroupbox->Name = L"FazCamGroupbox";
			this->FazCamGroupbox->Size = System::Drawing::Size(355, 98);
			this->FazCamGroupbox->TabIndex = 6;
			this->FazCamGroupbox->TabStop = false;
			this->FazCamGroupbox->Text = L"Faz Cam Cheats";
			// 
			// FazCamUnlimitedUsageChbx
			// 
			this->FazCamUnlimitedUsageChbx->AutoSize = true;
			this->FazCamUnlimitedUsageChbx->Location = System::Drawing::Point(23, 46);
			this->FazCamUnlimitedUsageChbx->Name = L"FazCamUnlimitedUsageChbx";
			this->FazCamUnlimitedUsageChbx->Size = System::Drawing::Size(260, 29);
			this->FazCamUnlimitedUsageChbx->TabIndex = 2;
			this->FazCamUnlimitedUsageChbx->Text = L"FazCam Unlimited Usage";
			this->FazCamUnlimitedUsageChbx->UseVisualStyleBackColor = true;
			this->FazCamUnlimitedUsageChbx->CheckedChanged += gcnew System::EventHandler(this, &ModMenuGUI::FazCamUnlimitedUsageChbx_CheckedChanged);
			// 
			// FazerBlasterGpbx
			// 
			this->FazerBlasterGpbx->Controls->Add(this->UnlimitedFazBlasterAmmoChbx);
			this->FazerBlasterGpbx->Controls->Add(this->NoBlasterCooldownChbx);
			this->FazerBlasterGpbx->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FazerBlasterGpbx->Location = System::Drawing::Point(25, 39);
			this->FazerBlasterGpbx->Name = L"FazerBlasterGpbx";
			this->FazerBlasterGpbx->Size = System::Drawing::Size(355, 126);
			this->FazerBlasterGpbx->TabIndex = 5;
			this->FazerBlasterGpbx->TabStop = false;
			this->FazerBlasterGpbx->Text = L"Fazer Blaster Cheats";
			// 
			// UnlimitedFazBlasterAmmoChbx
			// 
			this->UnlimitedFazBlasterAmmoChbx->AutoSize = true;
			this->UnlimitedFazBlasterAmmoChbx->Location = System::Drawing::Point(23, 46);
			this->UnlimitedFazBlasterAmmoChbx->Name = L"UnlimitedFazBlasterAmmoChbx";
			this->UnlimitedFazBlasterAmmoChbx->Size = System::Drawing::Size(305, 29);
			this->UnlimitedFazBlasterAmmoChbx->TabIndex = 2;
			this->UnlimitedFazBlasterAmmoChbx->Text = L"FazerBlaster Unlimited Ammos";
			this->UnlimitedFazBlasterAmmoChbx->UseVisualStyleBackColor = true;
			this->UnlimitedFazBlasterAmmoChbx->CheckedChanged += gcnew System::EventHandler(this, &ModMenuGUI::UnlimitedFazBlasterAmmoChbx_CheckedChanged);
			// 
			// NoBlasterCooldownChbx
			// 
			this->NoBlasterCooldownChbx->AutoSize = true;
			this->NoBlasterCooldownChbx->Location = System::Drawing::Point(21, 81);
			this->NoBlasterCooldownChbx->Name = L"NoBlasterCooldownChbx";
			this->NoBlasterCooldownChbx->Size = System::Drawing::Size(311, 29);
			this->NoBlasterCooldownChbx->TabIndex = 1;
			this->NoBlasterCooldownChbx->Text = L"Disable FazerBlaster Cooldown";
			this->NoBlasterCooldownChbx->UseVisualStyleBackColor = true;
			this->NoBlasterCooldownChbx->CheckedChanged += gcnew System::EventHandler(this, &ModMenuGUI::NoBlasterCooldownChbx_CheckedChanged);
			// 
			// GameMechanicsBox
			// 
			this->GameMechanicsBox->Controls->Add(this->FreezeDoorPowerChbx);
			this->GameMechanicsBox->Controls->Add(this->NoCollectionTimerChbx);
			this->GameMechanicsBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GameMechanicsBox->Location = System::Drawing::Point(16, 688);
			this->GameMechanicsBox->Name = L"GameMechanicsBox";
			this->GameMechanicsBox->Size = System::Drawing::Size(265, 465);
			this->GameMechanicsBox->TabIndex = 9;
			this->GameMechanicsBox->TabStop = false;
			this->GameMechanicsBox->Text = L"Game Mechanics";
			// 
			// FreezeDoorPowerChbx
			// 
			this->FreezeDoorPowerChbx->AutoSize = true;
			this->FreezeDoorPowerChbx->Location = System::Drawing::Point(6, 89);
			this->FreezeDoorPowerChbx->Name = L"FreezeDoorPowerChbx";
			this->FreezeDoorPowerChbx->Size = System::Drawing::Size(216, 29);
			this->FreezeDoorPowerChbx->TabIndex = 1;
			this->FreezeDoorPowerChbx->Text = L"Freeze Doors Power";
			this->FreezeDoorPowerChbx->UseVisualStyleBackColor = true;
			this->FreezeDoorPowerChbx->CheckedChanged += gcnew System::EventHandler(this, &ModMenuGUI::FreezeDoorPowerChbx_CheckedChanged);
			// 
			// NoCollectionTimerChbx
			// 
			this->NoCollectionTimerChbx->AutoSize = true;
			this->NoCollectionTimerChbx->Location = System::Drawing::Point(6, 43);
			this->NoCollectionTimerChbx->Name = L"NoCollectionTimerChbx";
			this->NoCollectionTimerChbx->Size = System::Drawing::Size(249, 29);
			this->NoCollectionTimerChbx->TabIndex = 0;
			this->NoCollectionTimerChbx->Text = L"Disable Collection Timer";
			this->NoCollectionTimerChbx->UseVisualStyleBackColor = true;
			this->NoCollectionTimerChbx->CheckedChanged += gcnew System::EventHandler(this, &ModMenuGUI::NoCollectionTimerChbx_CheckedChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->FreddyUpgradesCooldownBox);
			this->groupBox1->Controls->Add(this->FreddyPowerBox);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(346, 688);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1041, 465);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Freddy";
			// 
			// FreddyUpgradesCooldownBox
			// 
			this->FreddyUpgradesCooldownBox->Controls->Add(this->NoChicaBeakCooldownChbx);
			this->FreddyUpgradesCooldownBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->FreddyUpgradesCooldownBox->Location = System::Drawing::Point(49, 43);
			this->FreddyUpgradesCooldownBox->Name = L"FreddyUpgradesCooldownBox";
			this->FreddyUpgradesCooldownBox->Size = System::Drawing::Size(448, 113);
			this->FreddyUpgradesCooldownBox->TabIndex = 10;
			this->FreddyUpgradesCooldownBox->TabStop = false;
			this->FreddyUpgradesCooldownBox->Text = L"Freddy Upgrades";
			// 
			// NoChicaBeakCooldownChbx
			// 
			this->NoChicaBeakCooldownChbx->AutoSize = true;
			this->NoChicaBeakCooldownChbx->Location = System::Drawing::Point(6, 43);
			this->NoChicaBeakCooldownChbx->Name = L"NoChicaBeakCooldownChbx";
			this->NoChicaBeakCooldownChbx->Size = System::Drawing::Size(307, 29);
			this->NoChicaBeakCooldownChbx->TabIndex = 0;
			this->NoChicaBeakCooldownChbx->Text = L"Disable Chica Voice Cooldown";
			this->NoChicaBeakCooldownChbx->UseVisualStyleBackColor = true;
			this->NoChicaBeakCooldownChbx->CheckedChanged += gcnew System::EventHandler(this, &ModMenuGUI::NoChicaBeakCooldownChbx_CheckedChanged);
			// 
			// ModMenuGUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1447, 1180);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->GameMechanicsBox);
			this->Controls->Add(this->WeaponsCheatsGroupbox);
			this->Controls->Add(this->GregoryCheatsGroupbox);
			this->Controls->Add(this->DevBox);
			this->Name = L"ModMenuGUI";
			this->Text = L"FNAF Security Breach Cheats By xAstroBoy#1337";
			this->DevBox->ResumeLayout(false);
			this->DevBox->PerformLayout();
			this->FreddyPowerBox->ResumeLayout(false);
			this->FreddyPowerBox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FreddyMaxPowerNbx))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FreddyCurrentPowerNbx))->EndInit();
			this->GregoryCheatsGroupbox->ResumeLayout(false);
			this->GregoryCheatsGroupbox->PerformLayout();
			this->HealthCheatsGpbx->ResumeLayout(false);
			this->HealthCheatsGpbx->PerformLayout();
			this->WeaponsCheatsGroupbox->ResumeLayout(false);
			this->FlashLightGrpbx->ResumeLayout(false);
			this->FlashLightGrpbx->PerformLayout();
			this->FazCamGroupbox->ResumeLayout(false);
			this->FazCamGroupbox->PerformLayout();
			this->FazerBlasterGpbx->ResumeLayout(false);
			this->FazerBlasterGpbx->PerformLayout();
			this->GameMechanicsBox->ResumeLayout(false);
			this->GameMechanicsBox->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->FreddyUpgradesCooldownBox->ResumeLayout(false);
			this->FreddyUpgradesCooldownBox->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void InvokeDevUI_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Cheats::ToggleDevUI();
	}
	private: System::Void UnlimitedJumpChbx_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (UnlimitedJumpChbx != nullptr)
		{
		}
	}
	private: System::Void FazBlasterGodModeChbx_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (FazBlasterGodModeChbx != nullptr)
		{
			Cheats::UnlimitedFazerBlasterLifesThread = FazBlasterGodModeChbx->Checked;
			if (Cheats::UnlimitedFazerBlasterLifesThread)
			{
				std::thread GeneratedThread(Cheats::UnlimitedFazerBlasterLifes);
				// GeneratedThread.detach();
				ConsoleTools::ConsoleWrite("Fazer Blaster Health has been Frozen.");
			}
			else
			{
				ConsoleTools::ConsoleWrite("Fazer Blaster Health has been Unfrozen.");
			}
		}
	}
	private: System::Void NoCollectionTimerChbx_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (NoCollectionTimerChbx != nullptr)
		{
			Cheats::RemoveCollectionTimeThread = NoCollectionTimerChbx->Checked;
			if (Cheats::RemoveCollectionTimeThread)
			{
				std::thread GeneratedThread(Cheats::RemoveCollectionTime);
				// GeneratedThread.detach();
				ConsoleTools::ConsoleWrite("Killed Collection Timer");
				ConsoleTools::ConsoleWrite("Collection Time Remover Activated.");
			}
			else
			{
				ConsoleTools::ConsoleWrite("Collection Time Remover Deactivated.");
			}
		}
	}
	private: System::Void FreezeDoorPowerChbx_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (FreezeDoorPowerChbx != nullptr)
		{
			Cheats::NoPowerDrainingDoorsThread = FreezeDoorPowerChbx->Checked;
			if (Cheats::NoPowerDrainingDoorsThread)
			{
				std::thread GeneratedThread(Cheats::NoPowerDrainingDoors);
				// GeneratedThread.detach();
				ConsoleTools::ConsoleWrite("Door Power Draining has been Frozen.");
			}
			else
			{
				ConsoleTools::ConsoleWrite("Door Power Draining has been Unfrozen.");
			}
		}
	}
	private: System::Void NoChicaBeakCooldownChbx_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (NoChicaBeakCooldownChbx != nullptr)
		{
			Cheats::NoChicaBeakCooldownThread = NoChicaBeakCooldownChbx->Checked;
			if (Cheats::NoChicaBeakCooldownThread)
			{
				std::thread GeneratedThread(Cheats::NoChicaBeakCooldown);
				// GeneratedThread.detach();
				ConsoleTools::ConsoleWrite("Disabled Chica Beak Cooldown.");
			}
			else
			{
				ConsoleTools::ConsoleWrite("Enabled Chica Beak Cooldown.");
			}
		}
	}
	private: System::Void UnlimitedFazBlasterAmmoChbx_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (UnlimitedFazBlasterAmmoChbx != nullptr)
		{
			Cheats::UnlimitedFazBlasterAmmoThread = UnlimitedFazBlasterAmmoChbx->Checked;
			if (Cheats::UnlimitedFazBlasterAmmoThread)
			{
				std::thread GeneratedThread(Cheats::UnlimitedFazBlasterAmmo);
				// GeneratedThread.detach();
				ConsoleTools::ConsoleWrite("FazBlaster Unlimited Ammo Activated.");
			}
			else
			{
				ConsoleTools::ConsoleWrite("FazBlaster Unlimited Ammo Deactivated.");
			}
		}
	}
	private: System::Void NoBlasterCooldownChbx_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (NoBlasterCooldownChbx != nullptr)
		{
			Cheats::RemoveBlasterCooldownThread = NoBlasterCooldownChbx->Checked;
			if (Cheats::RemoveBlasterCooldownThread)
			{
				std::thread GeneratedThread(Cheats::RemoveBlasterCooldown);
				// GeneratedThread.detach();
				ConsoleTools::ConsoleWrite("Killed FazBlaster Cooldown");
				ConsoleTools::ConsoleWrite("FazBlaster cooldown Remover Activated.");
			}
			else
			{
				ConsoleTools::ConsoleWrite("FazBlaster cooldown Remover Deactivated.");
			}
		}
	}
	private: System::Void FazCamUnlimitedUsageChbx_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (FazCamUnlimitedUsageChbx != nullptr)
		{
			Cheats::RemoveRemoveFazCamCooldownTimeThread = FazCamUnlimitedUsageChbx->Checked;
			if (Cheats::RemoveRemoveFazCamCooldownTimeThread)
			{
				std::thread GeneratedThread(Cheats::RemoveFazCamCooldownTime);
				// GeneratedThread.detach();
				ConsoleTools::ConsoleWrite("Killed FazCam Cooldown");
				ConsoleTools::ConsoleWrite("FazCam Remover cooldown Activated.");
			}
			else
			{
				ConsoleTools::ConsoleWrite("FazCam Remover cooldown Deactivated.");
			}
		}
	}
	private: System::Void UnlimitedFlashLightPowerChbx_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (UnlimitedFlashLightPowerChbx != nullptr)
		{
			Cheats::UnlimitedFlashLightThread = UnlimitedFlashLightPowerChbx->Checked;
			if (Cheats::UnlimitedFlashLightThread)
			{
				std::thread GeneratedThread(Cheats::UnlimitedFlashLight);
				// GeneratedThread.detach();
				ConsoleTools::ConsoleWrite("Unlimited Flashlight Enabled.");
			}
			else
			{
				ConsoleTools::ConsoleWrite("Unlimited Flashlight Disabled.");
			}
		}
	}



	private: System::Void FreezeFreddyCurrentPowerChbx_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (FreezeFreddyCurrentPowerChbx != nullptr)
		{
			Cheats::MaxPowerLevelFreddyThread = FreezeFreddyCurrentPowerChbx->Checked;
			if (Cheats::MaxPowerLevelFreddyThread)
			{
				Cheats::HasBackuppedFreddyPower = false;
				std::thread GeneratedThread(Cheats::UnlimitedFlashLight);
				// GeneratedThread.detach();
				ConsoleTools::ConsoleWrite("Freddy Power has been Frozen.");
			}
			else
			{
				Cheats::HasBackuppedFreddyPower = false;
				ConsoleTools::ConsoleWrite("Freddy Power has been Unfrozen.");
			}
		}

	}
};
}
