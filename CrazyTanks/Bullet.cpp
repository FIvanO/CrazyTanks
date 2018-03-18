#include "Bullet.h"
#include "Consts.h"

Bullet::Bullet(int _x, int _y, std::pair <int, int> _dir, int _pw, int _type) {
	x = _x;
	y = _y;
	dir = _dir;
	power = _pw;
	type = _type;
}

void Bullet::draw() {
	//std::cout << "Bullet" << std::endl;
	if (dir == up || dir == down) draw_rect(x - B_size_w, y - B_size_h, B_size_w * 2, B_size_h * 2, Blue);
	if (dir == left || dir == right) draw_rect(x - B_size_h, y - B_size_w, B_size_h * 2, B_size_w * 2, Blue);
}

void Bullet::move() {
	x -= B_pw_ds.find(power)->second * dir.first;
	y -= B_pw_ds.find(power)->second * dir.second;
}

void Bullet::setX(int _x) {
	x = _x;
}
void Bullet::setY(int _y) {
	y = _y;
}

void Bullet::setPw(int _pw) {
	power = _pw;
}

int Bullet::getX() {
	return x;
}

int Bullet::getY() {
	return y;
}

void Bullet::setSp(int _sp) {

}

void Bullet::generate() {}