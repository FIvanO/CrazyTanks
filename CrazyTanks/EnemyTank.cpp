#include "EnemyTank.h"
#include "Consts.h"

EnemyTank::EnemyTank(int _x, int _y, std::pair <int, int> _dir) {
	x = _x;
	y = _y;
	dir = _dir;
}

void EnemyTank::draw() {
	//std::cout << "EnemyTank" << std::endl;
	for (int i = 1; i <= T_size; i++)
	{
		SetPixel(mydc, x - center + i, y - center, Green);
		SetPixel(mydc, x - center + i, y + center, Green);
		SetPixel(mydc, x - center, y - center + i, Green);
		SetPixel(mydc, x + center, y - center + i, Green);
	}

	for (int i = x - center + 1; i < x + center; ++i)
		for (int j = y - center + 1; j < y + center; ++j) {
			SetPixel(mydc, i, j, Red);
		}
	this->draw_gun();
}

void EnemyTank::draw_gun() {
	if (dir == left || dir == right) {
		for (int i = x - Gun_base_size_h; i < x + Gun_base_size_h + 1; ++i)
			for (int j = y - Gun_base_size_w; j < y + Gun_base_size_w + 1; ++j)
				SetPixel(mydc, i, j, Black);
	}
	else {
		for (int i = x - Gun_base_size_w; i < x + Gun_base_size_w + 1; ++i)
			for (int j = y - Gun_base_size_h; j < y + Gun_base_size_h + 1; ++j)
				SetPixel(mydc, i, j, Black);
	}
	if (dir == left) {
		for (int i = x - 2 * (Gun_size_h + 1); i < x; ++i)
			for (int j = y - Gun_size_w; j <= y + Gun_size_w; ++j)
				SetPixel(mydc, i, j, Black);
	}
	if (dir == up) {
		for (int i = x - Gun_size_w; i <= x + Gun_size_w; ++i)
			for (int j = y - 2 * (Gun_size_h + 1); j < y; ++j)
				SetPixel(mydc, i, j, Black);
	}
	if (dir == right) {
		for (int i = x; i < x + 2 * (Gun_size_h + 1) + 1; ++i)
			for (int j = y - Gun_size_w; j <= y + Gun_size_w; ++j)
				SetPixel(mydc, i, j, Black);
	}
	if (dir == down) {
		for (int i = x - Gun_size_w; i <= x + Gun_size_w; ++i)
			for (int j = y; j < y + 2 * (Gun_size_h + 1) + 1; ++j)
				SetPixel(mydc, i, j, Black);
	}
}

int EnemyTank::getX() {
	return x;
}

int EnemyTank::getY() {
	return y;
}

std::pair <int, int> EnemyTank::getDir() {
	return dir;
}

void EnemyTank::move() {
	int d = rand() % 4 + 1;
	if (d == 1) dir = left;
	if (d == 2) dir = up;
	if (d == 3) dir = right;
	if (d == 4) dir = down;
	x -= T_sp_ds.find(speed)->second * dir.first;
	y -= T_sp_ds.find(speed)->second * dir.second;
}

void EnemyTank::setSp(int _sp) {
	speed = _sp;
}

void EnemyTank::setPw(int _pw) {}

void EnemyTank::generate() {
	x = rand() % GF_size + move_field_r;
	y = rand() % GF_size;
	int d = rand() % 4 + 1;
	if (d == 1) dir = left;
	if (d == 2) dir = up;
	if (d == 3) dir = right;
	if (d == 4) dir = down;
	if (x - center < move_field_r + W_size_h) x = center + move_field_r + W_size_h;
	if (x + center > GF_size - W_size_h) x = GF_size - center + move_field_r - W_size_h;
	if (y - center < W_size_h) y = center + W_size_h;
	if (y + center > GF_size - W_size_h) y = GF_size - center - W_size_h;
}