#pragma once
#include "Drawer.h"
#include <vector>

class BattleField {
public:
	void draw_all();
	void add_object(Drawer* ob);
private:
	std::vector <Drawer*> dr;
};