#include "MyForm.h"
using namespace System::Windows::Forms;
using namespace System;
[STAThreadAttribute]
int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project4::MyForm form;
	Application::Run(% form);

	return 0;
}
