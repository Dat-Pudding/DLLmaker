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
			cout << "Insert Path of 'notepad.exe'\n";
			wcin >> wGeneratorPath;
			++inputCounter;

		case 1:
			// taking second file path as wstring
			cout << "Insert Path of the file\n";
			wcin >> wExecutablePath;
			++inputCounter;

		case 2:
			// opportunity to verify the inputs
			wcout << "First Path: " << wGeneratorPath << "\nSecond Path: " << wExecutablePath << endl;
			++inputCounter;
			_getch();

		case 3:
			// assembling the command
			action = L"open";
			holder = wGeneratorPath + L" " + wExecutablePath;
			command = holder.c_str();

			cout << "\n";
			wcout << "Performing the Operation: " << action << "\non Command: " << command << endl;
			// doing the thing in CMD
			ShellExecute(NULL, action, command, NULL, NULL, SW_SHOW);

			// quitting the app
			wcout << "Done with Command: " << command << endl;
			return 0;
	}
}
