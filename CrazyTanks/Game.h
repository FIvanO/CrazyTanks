#pragma once
#include "Drawer.h"
#include "Tank.h"
#include "PlayerTank.h"
#include "EnemyTank.h"
#include "Bullet.h"
#include "Wall.h"
#include "BattleField.h"
#include "Consts.h"


class Game {
public:
	void start();
private:
	void win();
	void lose();
	int lifes = 3;
	int kills = 0;
};