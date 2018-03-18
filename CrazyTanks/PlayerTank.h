#pragma once
#include "Tank.h"

class PlayerTank : public Tank {
public:
	void draw();
	int getX();
	int getY();
	int getDir();
private:
	int x;
	int y;
	int dir = 0; // 0 - stop, 1 - left, 2 - up, 3 - right, 4 - down 
};