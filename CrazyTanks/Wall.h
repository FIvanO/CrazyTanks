#pragma once
#include "Drawer.h"

class Wall : public Drawer {
public:
	Wall(int _w);
	void draw();
private:
	void move();
	void setSp(int _sp);
	void setPw(int _pw);
	int weight;
	int x;
	int y;
	int type; // 1 - vertical, 2 - horizontal
};