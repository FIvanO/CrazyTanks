#pragma once
#include "Tank.h"

class PlayerTank : public Tank {
public:
	PlayerTank(int _x, int _y, std::pair <int, int> _dir);
	void draw();
	int getX();
	int getY();
	std::pair <int, int> getDir();
private:
	void draw_gun();
	int x;
	int y;
	std::pair <int, int> dir; // (-1, 0) - left; (0, 1) - up; (1, 0) - right; (0, -1) - down;  
};