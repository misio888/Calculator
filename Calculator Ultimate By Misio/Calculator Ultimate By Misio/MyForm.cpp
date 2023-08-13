#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CalculatorUltimateByMisio::MyForm myForm;//Nasza nazwa projektu::oraz nazwa form
	Application::Run(% myForm);
}
