#include <Windows.h>
#include "main.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    practicmain1::main^ form = gcnew practicmain1::main();
    Application::Run(form);
    return 0;
}
