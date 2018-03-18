#include "PlayerTank.h"
#include "Consts.h"
#include <conio.h>
#include <Windows.h>


PlayerTank::PlayerTank(int _x, int _y, int _dir) {
	x = _x;
	y = _y;
	dir = _dir;
}

void PlayerTank::draw() {
	//std::cout << "PlayerTank" << std::endl;
	for (int i = 1; i <= T_size; i++)
	{
		SetPixel(mydc, x - center + i, y - center, Red);
		SetPixel(mydc, x - center + i, y + center, Red);
		SetPixel(mydc, x - center, y - center + i, Red);
		SetPixel(mydc, x + center, y - center + i, Red);
	}

	for (int i = x - center + 1; i < x + center; ++i)
		for (int j = y - center + 1; j < y + center; ++j) {
			SetPixel(mydc, i, j, Green);
		}
	this->draw_gun();
}

void PlayerTank::draw_gun() {
	if (dir == 1 || dir == 3) {
		for (int i = x - Gun_base_size_h; i < x + Gun_base_size_h + 1; ++i)
			for (int j = y - Gun_base_size_w; j < y + Gun_base_size_w + 1; ++j)
				SetPixel(mydc, i, j, Black);
	}
	else {
		for (int i = x - Gun_base_size_w; i < x + Gun_base_size_w + 1; ++i)
			for (int j = y - Gun_base_size_h; j < y + Gun_base_size_h + 1; ++j)
				SetPixel(mydc, i, j, Black);
	}
	if (dir == 1) {
		for (int i = x - Gun_size_h - Gun_base_size_h; i < x; ++i)
			for (int j = y - 1; j <= y + 1; ++j)
				SetPixel(mydc, i, j, Black);
	}
	if (dir == 2 || dir == 0) {
		for (int i = x - 1; i <= x + 1; ++i)
			for (int j = y - Gun_size_h - Gun_base_size_h; j < y; ++j)
				SetPixel(mydc, i, j, Black);
	}
	if (dir == 3) {
		for (int i = x; i < x + Gun_size_h + Gun_base_size_h + 1; ++i)
			for (int j = y - 1; j <= y + 1; ++j)
				SetPixel(mydc, i, j, Black);
	}
	if (dir == 4) {
		for (int i = x - 1; i <= x + 1; ++i)
			for (int j = y; j < y + Gun_size_h + Gun_base_size_h + 1; ++j)
				SetPixel(mydc, i, j, Black);
	}
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