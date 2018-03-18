#include "EnemyTank.h"

void EnemyTank::draw() {
	std::cout << "EnemyTank" << std::endl;
}

void EnemyTank::draw_gun() {

}

int EnemyTank::getX() {
	return x;
}

int EnemyTank::getY() {
	return y;
}

int EnemyTank::getDir() {
	return dir;
}