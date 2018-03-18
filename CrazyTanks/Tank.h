#pragma once
#include "Drawer.h"

class Tank : public Drawer {
public:
	virtual void draw() = 0;
	virtual void move() = 0;
	virtual int getX() = 0;
	virtual int getY() = 0;
	virtual void setSp(int _sp) = 0;
	virtual void setPw(int _pw) = 0;
	virtual std::pair <int, int> getDir() = 0;
};