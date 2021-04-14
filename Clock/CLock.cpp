#include "CLock.h"
using namespace System;
using namespace System::Windows::Forms;
[System::STAThread]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Clock::CLock clock;
	Application::Run(% clock);
}

