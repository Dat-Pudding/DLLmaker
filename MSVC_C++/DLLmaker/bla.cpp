/*
#include "Windows.h"
#include <iostream>
#include <conio.h>
using namespace std;

wstring wGeneratorPath;
wstring wExecutablePath;
wstring prefix;
wstring holder;
LPCWSTR action;
LPCWSTR command;

int main()
{
	int inputCounter = 0;

	switch (inputCounter)
	{
	case 0:
		// taking first file path as wstring
		cout << "Insert Path of 'windeployqt.exe'\n";
		wcin >> wGeneratorPath;
		++inputCounter;
		cout << "\ninputCounter: " << inputCounter << "\n" << endl;

	case 1:
		// taking second file path as wstring
		cout << "Insert Path of the executable needing DLLs\n";
		wcin >> wExecutablePath;
		++inputCounter;
		cout << "\ninputCounter: " << inputCounter << endl;

	case 2:
		// opportunity to verify the inputs
		wcout << "First Path: " << wGeneratorPath << "\nSecond Path: " << wExecutablePath << endl;
		++inputCounter;
		_getch();
		cout << "\ninputCounter: " << inputCounter << "\n" << endl;

	case 3:
		// assembling the command
		action = L"open";
		prefix = L"C:\\Windows\\System32\\cmd.exe /c ";
		holder = prefix + wGeneratorPath + L" " + wExecutablePath;
		command = holder.c_str();

		// doing the thing in CMD
		ShellExecute(NULL, action, command, NULL, NULL, SW_SHOWNORMAL);
		
		// checking if any variable got anything wrong - expected "inputCounter" of 3 at the end
		wcout << "holder: " << holder << "\n" << "action: " << action << "\n";
		wcout << "prefix: " << prefix << "\n" << "command: " << command << endl;
		cout << "Done\n" << "inputCounter: " << inputCounter << endl;

		_getch();
		return 0;
	}
}
*/