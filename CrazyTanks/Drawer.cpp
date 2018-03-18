#include "Drawer.h"
#include "Consts.h"

void Drawer::draw_rect(int x, int y, int a, int b, COLORREF col) {
	for (int i = x; i <= x + a; ++i)
		for (int j = y; j < y + b; ++j)
			SetPixel(mydc, i, j, col);
}

void Drawer::draw_all_black() {
	for (int i = 0; i <= GF_size + 100; ++i)
		for (int j = 0; j <= GF_size + 100; ++j)
			SetPixel(mydc, i, j, Black);
}