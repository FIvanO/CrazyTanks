#pragma once
#include "Wall.h"

class Gold : public Wall {
public:
	void generate();
	void draw();
	int getX();
	int getY();
	int getW();
	int getH();
	void shoot(int _qn);
private:
	void move();
	void setSp(int _sp);
	void setPw(int _pw);
	int getD();
	void setD(int _d);
	int x;
	int y;
	int weight;
	int height;
	int type;
};