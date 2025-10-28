#include "Input.h"
#include <iostream>

using namespace std;

void Input::SetTextColor()
{
	Console::SetForegroundColor(Cyan);
}

string Input::GetString(string message)
{
	cout << "\n" << message << " ";
	string usersInput;
	getline(cin, usersInput);
	return usersInput;
}

int Input::GetInteger(string message, int min, int max)
{
	int number = 0;
	while (true)
	{
		cout << "\n" << message;
		if (cin >> number && number >= min && number <= max)
		{
			ClearInputBuffer();
			break;
		}
		ClearInputBuffer();
		cout << "\nInvalid number.\n";
	}
	return number;
}

void Input::ClearInputBuffer()
{
	cin.clear();
	cin.ignore(INT_MAX, '\n');
}
