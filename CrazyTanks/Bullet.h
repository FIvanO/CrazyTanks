#pragma once
#include "Drawer.h"

class Bullet : public Drawer {
public:
	void draw() {
		std::cout << "Bullet" << std::endl;
	}
};