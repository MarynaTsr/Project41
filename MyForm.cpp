#include <Windows.h>
#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms; // Простір імен для Application
using namespace Project41; // Простір імен для вашого проекту, якщо такий існує

[STAThreadAttribute]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MyForm());
    return 0;
}