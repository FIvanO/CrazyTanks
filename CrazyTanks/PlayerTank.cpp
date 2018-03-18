#include "PlayerTank.h"

void PlayerTank::draw() {
	std::cout << "PlayerTank" << std::endl;
}

int PlayerTank::getX() {
	return x;
}

int PlayerTank::getY() {
	return y;
}

int PlayerTank::getDir() {
	return dir;
}