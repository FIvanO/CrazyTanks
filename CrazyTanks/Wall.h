#pragma once
#include "Drawer.h"
#include "Consts.h"

class Wall : public Drawer {
public:
	Wall(int _w);
	int getX();
	int getY();
	int getW();
	int getH();
	void draw();
	void generate();
private:
	void move();
	void setSp(int _sp);
	void setPw(int _pw);
	int weight;
	int height = W_size_h;
	int x;
	int y;
	int type; // 1 - vertical, 2 - horizontal
};