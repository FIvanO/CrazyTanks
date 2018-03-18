#include "Wall.h"
#include "Consts.h"
#include <time.h>

Wall::Wall(int _w) {
	weight = _w;
}

void Wall::draw() {
	//std::cout << "Wall" << std::endl;
	if (type == 1) { // vertical
		draw_rect(x - W_size_h / 2 + move_field_r, y - weight / 2, W_size_h, weight, Gray);
		std::swap(height, weight);
	}
	else { // horizontal
		draw_rect(x - weight / 2 + move_field_r, y - W_size_h / 2, weight, W_size_h, Gray);
	}
}

void Wall::generate() {
	type = rand() % 2 + 1;
	x = rand() % GF_size;
	y = rand() % GF_size;
	if (type == 1) { // vertical
		if (x - height / 2 < 0) {
			x = height / 2;
		}
		if (x + height / 2 > GF_size) {
			x = GF_size - height / 2;
		}
		if (y - weight / 2 < 0) {
			y = weight / 2;
		}
		if (y + weight / 2 > GF_size) {
			y = GF_size - weight / 2;
		}
	}
	else { // horizontal
		if (x - weight / 2 < 0) {
			x = weight / 2;
		}
		if (x + weight / 2 > GF_size) {
			x = GF_size - weight / 2;
		}
		if (y - height / 2 < 0) {
			y = height / 2;
		}
		if (y + height / 2 > GF_size) {
			y = GF_size - height / 2;
		}
	}

}

int Wall::getX() {
	return x;
}

int Wall::getY() {
	return y;
}

int Wall::getW() {
	return weight;
}

int Wall::getH() {
	return height;
}

void Wall::move() {}

void Wall::setSp(int _sp) {}

void Wall::setPw(int _pw) {}
