#pragma once
#include "Drawer.h"

class Tank : public Drawer {
public:
	virtual void draw() = 0;
	virtual int getX() = 0;
	virtual int getY() = 0;
	virtual std::pair <int, int> getDir() = 0;
};