#pragma once
#include <Windows.h>

const int T_size = 21;
const int Gun_base_size_w = 3; // vertical
const int Gun_base_size_h = 2; // vertical
const int Gun_size_w = 3; // vertical
const int Gun_size_h = 8; // vertical
const COLORREF Red = RGB(255, 0, 0);
const COLORREF Black = RGB(0, 0, 0);
const COLORREF Green = RGB(60, 150, 40);
const HWND myconsole = GetConsoleWindow();
const HDC mydc = GetDC(myconsole);
const int center = 11;
