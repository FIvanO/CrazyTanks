#pragma once
#include "Drawer.h"

class Wall : public Drawer {
public:
	void draw() {
		std::cout << "Wall" << std::endl;
	}
};