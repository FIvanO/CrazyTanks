#include "Wall.h"
#include "Consts.h"
#include <time.h>

Wall::Wall(int _w) {
	weight = _w;
}

void Wall::draw() {
	//std::cout << "Wall" << std::endl;
	type = rand() % 2 + 1;
	x = rand() % GF_size;
	y = rand() % GF_size;
	if (type == 1) { // vertical
		if (x - W_size_h / 2 < 0) {
			x = W_size_h / 2;
		}
		if (x + W_size_h / 2 > GF_size) {
			x = GF_size - W_size_h / 2;
		}
		if (y - weight / 2 < 0) {
			y = weight / 2;
		}
		if (y + weight / 2 > GF_size) {
			y = GF_size - weight / 2;
		}
		draw_rect(x - W_size_h / 2, y - weight / 2, W_size_h, weight, Gray);
	}
	else { // horizontal
		if (x - weight / 2 < 0) {
			x = weight / 2;
		}
		if (x + weight / 2 > GF_size) {
			x = GF_size - weight / 2;
		}
		if (y - W_size_h / 2 < 0) {
			y = W_size_h / 2;
		}
		if (y + W_size_h / 2 > GF_size) {
			y = GF_size - W_size_h / 2;
		}
		draw_rect(x - weight / 2, y - W_size_h / 2, weight, W_size_h, Gray);
	}
}

void Wall::move() {}

void Wall::setSp(int _sp) {}

void Wall::setPw(int _pw) {}
