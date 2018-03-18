#pragma once
#include "Drawer.h"
#include <algorithm>

class Bullet : public Drawer {
public:
	Bullet(int _x, int _y, std::pair <int, int> _dir, int _pw, int _type);
	void move();
	void draw();
	void setX(int _x);
	void setY(int _y);
	void setPw(int _pw);
private:
	int x;
	int y;
	int power = 1;
	std::pair <int, int> dir; // (-1, 0) - left; (0, 1) - up; (1, 0) - right; (0, -1) - down; 
	int type; // 1 - player, 2 - enemy
};