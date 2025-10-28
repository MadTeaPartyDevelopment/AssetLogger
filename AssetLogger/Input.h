#pragma once
#include <string>
#include <vector>
#include "Console.h"

class Input
{

public:
	static std::string GetString(std::string message);
	static int GetInteger(std::string message, int min, int max);

private:
	static void ClearInputBuffer();
	static void SetTextColor();
};