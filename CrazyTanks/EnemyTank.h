#pragma once
#include "Tank.h"

class EnemyTank : public Tank {
public:
	EnemyTank(int _x, int _y, std::pair <int, int> _dir);
	void generate();
	void draw();
	void move();
	void setSp(int _sp);
	int getX();
	int getY();
	std::pair <int, int> getDir();
private:
	void draw_gun();
	void setPw(int _pw);
	int x;
	int y;
	int speed = 1;
	std::pair <int, int> dir; // (-1, 0) - left; (0, 1) - up; (1, 0) - right; (0, -1) - down;  
};