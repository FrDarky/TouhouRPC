#pragma once

#include <string>
#include <Windows.h>
#include <memoryapi.h>
#include <TlHelp32.h>
#include <handleapi.h>

// Games includes
#include "games/TouhouBase.h"

#include "games/Touhou06.h"
#include "games/Touhou11.h"
#include "games/Touhou15.h"
#include "games/Touhou17.h"

// Executables name list
const int PROCESS_NAME_LIST_SIZE = 5;

static const wchar_t* processNameList[PROCESS_NAME_LIST_SIZE] = {
	// Touhou 06
	L"eosd.exe",
	L"th06e.exe",

	// Touhou 11
	L"th11.exe",

	// Touhou 15
	L"th15.exe",

	// Touhou 17
	L"th17.exe"
};

bool findRunningTouhouProcess(const wchar_t* processList[], PROCESSENTRY32W* processEntry);

TouhouBase* initializeTouhouGame();