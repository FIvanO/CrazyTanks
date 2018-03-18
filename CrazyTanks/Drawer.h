#pragma once
#include <iostream>
#include <Windows.h>

class Drawer {
public:
	virtual void draw() = 0;
	virtual void move() = 0;
	virtual void setSp(int _sp) = 0;
	virtual void setPw(int _pw) = 0;
	void draw_rect(int x, int y, int a, int b, COLORREF col);
	void draw_all_black();
};