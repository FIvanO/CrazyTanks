#pragma once
#include <Windows.h>
#include <map>
//#include <utility>
//using namespace std;

#define sqr(x) ((x) * (x))
const int T_size = 31; // minimum 29!!!
const int Gun_base_size_w = T_size / 7; // vertical
const int Gun_base_size_h = T_size / 8; // vertical
const int Gun_size_w = T_size / 14; // vertical
const int Gun_size_h = T_size / 4 - 1; // vertical
const COLORREF Red = RGB(255, 0, 0);
const COLORREF Black = RGB(0, 0, 0);
const COLORREF Green = RGB(60, 150, 40);
const COLORREF Blue = RGB(0, 0, 255);
const COLORREF Gray = RGB(160, 160, 160);
const HWND myconsole = GetConsoleWindow();
const HDC mydc = GetDC(myconsole);
const int center = T_size / 2 + 1;
const int B_size_w = T_size / 28;
const int B_size_h = Gun_size_h / 4;
const std::pair <int, int> left = { -1, 0 };
const std::pair <int, int> up = { 0, 1 };
const std::pair <int, int> right = { 1, 0 };
const std::pair <int, int> down = { 0, -1 };
const int T_ds = T_size / 3;
const std::map <int, int> T_sp_ds = { {1, T_ds}, {2, T_ds * 2}, {3, T_ds * 3} };
const int B_ds = T_ds * 3;
const std::map <int, int> B_pw_ds = { { 1, B_ds},{ 2, B_ds * 2},{ 3, B_ds * 3} };
const int W_size_w[] = { 31, 41, 51 };
const int W_size_h = 10;
const int GF_size = 550;
const int Tank_dist = T_size / 2;
const int move_field_r = 50;
const int ET_size = 6;
const int W_size = 3;
