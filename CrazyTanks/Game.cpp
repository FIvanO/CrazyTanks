#include "Game.h"
#include <conio.h>

void Game::start() {
	PlayerTank* PT = new PlayerTank(0, 0, up);
	EnemyTank* ET[ET_size + 1];
	Wall* W[W_size * 3 + 1];
	BattleField bf;
	bf.add_object((Drawer*)PT);
	for (int i = 0; i < ET_size; ++i) {
		ET[i] = new EnemyTank(0, 0, up);
		bf.add_object((Drawer*)ET[i]);
		bf.add_EnemyTank(ET[i]);
	}
	for (int i = 0; i < W_size * 3; ++i) {
		W[i] = new Wall(W_size_w[i / 3]);
		bf.add_wall(W[i]);
		bf.add_object((Drawer*)W[i]);
	}
	bf.generate();
	bf.check_cross_ET();
	while (1) {
		bf.draw_all();
		int c = _getch();
		if (c == 0 || c == 224) {
			c = _getch();
			if (c == 75) {
				PT->setDir(left);
				bf.move();
			}
			if (c == 72) {
				PT->setDir(up);
				bf.move();
			}
			if (c == 77) {
				PT->setDir(right);
				bf.move();
			}
			if (c == 80) {
				PT->setDir(down);
				bf.move();
			}
		}
		if (c == 32) {
			Drawer* bl = new Bullet(PT->getX() - PT->getDir().first * center, PT->getY() - PT->getDir().second * center,
				PT->getDir(), 1, 1);
			bf.add_object(bl);
			bf.move();
		}
		PT->draw_all_black();
	}
}

void Game::win() {

}

void Game::lose() {

}
