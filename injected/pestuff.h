#ifndef _PESTUFF_H
#define _PESTUFF_H

#include <windows.h>

DWORD GetTextAddress(HMODULE hModule);
DWORD GetTextSize(HMODULE hModule);

DWORD GetRdataSize(HMODULE hModule);
DWORD GetRdataAddress(HMODULE hModule);

#endif