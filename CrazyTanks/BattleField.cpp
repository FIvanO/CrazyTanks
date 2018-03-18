#include "BattleField.h"

void BattleField::draw_all() {
	for (auto ob : dr)
		ob->draw();
	dr[1]->draw_rect(move_field_r, 0, GF_size, W_size_h, Gray);
	dr[1]->draw_rect(move_field_r, 0, W_size_h, GF_size, Gray);
	dr[1]->draw_rect(GF_size + move_field_r, 0, W_size_h, GF_size, Gray);
	dr[1]->draw_rect(move_field_r, GF_size, GF_size + W_size_h, W_size_h, Gray);
}

void BattleField::add_object(Drawer* ob) {
	dr.push_back(ob);
}

void BattleField::add_wall(Wall* w) {
	walls.push_back(w);
}

void BattleField::add_EnemyTank(EnemyTank* EnTn) {
	enemy_tanks.push_back(EnTn);
}

void BattleField::check_cross_ET() {
	for (auto t1 : enemy_tanks) {
		for (auto t2 : enemy_tanks) {
			if (t1 == t2) continue;
			while (abs(t1->getX() - t2->getX()) <= Tank_dist + T_size ||
				abs(t1->getY() - t2->getY()) <= Tank_dist + T_size) {
				t2->generate();
				//std::cout << "1" << std::endl;
				//t2--;
			}
			/*int k = sqr(t2->getX() - t1->getX()) + sqr(t2->getY() - t1->getY());
			int k1 = sqr(dr[0]->getX() - dr[0]->getX()) + sqr(dr[0]->getY() - dr[0]->getY());
			if (((int)(sqrt(k)) < (2 * center + Tank_dist)) || ((int)(sqrt(k1)) < (2 * center + Tank_dist)))*/
		}
	}
	
	for (auto t1 : enemy_tanks)
		for (auto w1 : walls) {
			int x1, x2;
			int y1, y2;
			int x = w1->getX();
			int y = w1->getY();
			x1 = x - w1->getW() / 2;
			x2 = x + w1->getW() / 2;
			y1 = y - w1->getH() / 2;
			y2 = y + w1->getH() / 2;
			int Tx1, Tx2;
			int Ty1, Ty2;
			Tx1 = t1->getX() - center;
			Tx2 = t1->getX() + center;
			Ty1 = t1->getY() - center;
			Ty2 = t1->getY() + center;
			while (((Tx1 <= x1 && x1 <= Tx2) || (x1 <= Tx1 && Tx1 <= x2)) &&
				((Ty2 <= y2 && y2 <= Ty1) || (y2 <= Ty2 && Ty2 <= y1))) {
				w1->generate();
				std::cout << "2" << std::endl;
				//w1--;
			}
		}
}
			//std::cout << "x1 = " << x1 << "; x2 = " << x2 << std::endl;
			//std::cout << "y1 = " << y1 << "; y2 = " << y2 << std::endl;
			//std::cout << "Tx1 = " << Tx1 << "; Tx2 = " << Tx2 << std::endl;
			////std::cout << "Ty1 = " << Ty1 << "; Ty2 = " << Ty2 << std::endl;
			//if ((y2 < Ty1 && Ty1 < y1) && (x1 < Tx1 && Tx1 < x2)) {
			//	w1->generate(); 
			//	std::cout << "2" << std::endl;
			//	w1--;
			//}
			//if ((y2 < Ty1 && Ty1 < y1) && (x1 < Tx2 && Tx2 < x2)) 
			//{ 
			//	w1->generate(); 
			//	std::cout << "3" << std::endl;
			//	w1--;
			//}
			//if ((y2 < Ty2 && Ty2 < y1) && (x1 < Tx1 && Tx1 < x2))
			//{
			//	w1->generate();
			//	std::cout << "4" << std::endl;
			//	w1--;
			//}
			//if ((y2 < Ty2 && Ty2 < y1) && (x1 < Tx2 && Tx2 < x2))
			//{
			//	w1->generate();
			//	std::cout << "5" << std::endl;
			//	w1--;
			//}

void BattleField::generate() {
	for (auto ob : dr)
		ob->generate();
}

void BattleField::move() {
	for (auto ob : dr)
		ob->move();
}