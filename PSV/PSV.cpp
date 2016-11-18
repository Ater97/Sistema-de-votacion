// PSV.cpp : main project file.

#include "stdafx.h"
#include "MyForm.h"
using namespace System;
using namespace PSV;

[STAThread]
int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(true);
	Application::Run(gcnew MyForm());
    return 0;
}
