#pragma once
#include "Drawer.h"

class Tank : public Drawer {
public:
	virtual void draw() = 0;
	virtual int getX() = 0;
	virtual int getY() = 0;
	virtual int getDir() = 0;
private:
	virtual void draw_gun() = 0;
	int x;
	int y;
	int dir = 0; // 0 - stop, 1 - left, 2 - up, 3 - right, 4 - down 
};