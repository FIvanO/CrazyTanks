#pragma once
#include "Tank.h"

class PlayerTank : public Tank {
public:
	PlayerTank(int _x, int _y, int _dir);
	void draw();
	int getX();
	int getY();
	int getDir();
private:
	void draw_gun();
	int x;
	int y;
	int dir = 0; // 0 - stop, 1 - left, 2 - up, 3 - right, 4 - down 
};