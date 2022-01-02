#include "ModMenuGUI.h"

#include "SDK.h"
using namespace ModMenu; // Change this to your project name

ref struct Globals {

    static ModMenuGUI^ maineditor = nullptr;

};

void UpdateFormValues()
{
    do
    {
        if (Globals::maineditor != nullptr)
        {
            if (Globals::maineditor->FreddyCurrentPowerNbx != nullptr)
            {
                Globals::maineditor->FreddyCurrentPowerNbx->Value = Cheats::Get_CurrentFreddyPower();
            }
            if (Globals::maineditor->FreddyMaxPowerNbx != nullptr)
            {
                Globals::maineditor->FreddyMaxPowerNbx->Value = Cheats::Get_MaxFreddyPower();
            }
        }
    } while (true);
}


int Main()
{

    // Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    // Create the main window and run it
    Globals::maineditor = gcnew ModMenuGUI;
    Application::Run(Globals::maineditor); //Form1 is the name of the form created. 
    std::thread thread1(UpdateFormValues);
    //thread1.detach();
    return 0;
}

