#pragma once
#include "Drawer.h"
#include "Wall.h"
#include "EnemyTank.h"
#include <vector>

class BattleField {
public:
	void draw_all();
	void shoot();
	void add_object(Drawer* ob);
	void add_wall(Wall* w);
	void add_EnemyTank(EnemyTank* EnTn);
	void check_cross_ET();
	void move();
	void generate();
private:
	std::vector <Drawer*> dr;
	std::vector <Wall*> walls;
	std::vector <EnemyTank*> enemy_tanks;
};