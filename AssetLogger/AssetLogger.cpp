//Copyright © Mad Tea Party Development 2025
//This software is proprietary and may not be 
//copied, modified, distributed, or used for commercial purposes 
//without explicit permission from the author.
//Demo version provided for evaluation only. Full version available at [Link To Be Added].
#pragma once
#include <iostream>
#include <map>
#include <windows.h>
#include <cwchar>
#include <fstream>
#include <cstdlib>
#include <sstream>

#include "Console.h"
#include "Input.h"
#include "AssetLogging.h"


using namespace std;




int main()
{
	AssetLogging AssetLogger;
	AssetLogger.ShowLicense();
	AssetLogger.Prompt();
	int switchVal = Input::GetInteger("Answer: ", 1, 2, White);

	if (switchVal == 1)
	{
		AssetLogger.HandleAssetAdding();
	}
	else {}
}

