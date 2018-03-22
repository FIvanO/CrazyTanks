#pragma once
#include "Wall.h"

class Castle : public Wall {
public:
	void generate();
	void draw();
	int getX();
	int getY();
	int getW();
	int getH();
	int getD();
	void setD(int _d);
	void shoot(int _qn);
private:
	void move();
	void setSp(int _sp);
	void setPw(int _pw);
	int x[3];
	int y[3];
	int weight[3];
	int height[3];
	int type[3];
	int damage[3];
};