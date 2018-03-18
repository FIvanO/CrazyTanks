#include "BattleField.h"

void BattleField::draw_all() {
	for (auto ob : dr)
		ob->draw();
}

void BattleField::add_object(Drawer* ob) {
	dr.push_back(ob);
}