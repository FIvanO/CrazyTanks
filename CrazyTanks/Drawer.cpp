#include "Drawer.h"
#include "Consts.h"

void Drawer::draw_rect(int x, int y, int a, int b, COLORREF col) {
	for (int i = x; i <= x + a; ++i)
		for (int j = y; j < y + b; ++j)
			SetPixel(mydc, i, j, col);
}

void Drawer::draw_all_black() {
	for (int i = move_field_r; i <= move_field_r + GF_size + W_size_h; ++i)
		for (int j = 0; j <= GF_size; ++j)
			SetPixel(mydc, i, j, Black);
}