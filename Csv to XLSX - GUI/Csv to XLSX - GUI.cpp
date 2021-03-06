#include "stdafx.h"
#include "MainWindow.h";

using namespace System;
using namespace System::Windows::Forms;

// Used to completely close the application when the last form is closed.
void ExitWhenLastWindowClosed(Object^ sender, FormClosedEventArgs^ e) {
	if (Application::OpenForms->Count == 0) Application::Exit();
	else Application::OpenForms[0]->FormClosed += gcnew FormClosedEventHandler(ExitWhenLastWindowClosed);
}

[STAThreadAttribute()]
int main(cli::array<String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CsvtoXLSXGUI::MainWindow^ first = gcnew CsvtoXLSXGUI::MainWindow;
	first->FormClosed += gcnew FormClosedEventHandler(ExitWhenLastWindowClosed);
	first->Show();
	Application::Run();
	return 0;
}
