//FIvanO
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <fstream>
#include <sstream>
#include <cmath>
#include <math.h>
#include <algorithm>
#include <cstring>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <deque>
#include "Drawer.h"
#include "Tank.h"
#include "PlayerTank.h"
#include "EnemyTank.h"
#include "Bullet.h"
#include "Wall.h"
#include "BattleField.h"
#include "Game.h"
#include "Consts.h"

using namespace std;

int main()
{

	Drawer* dPT1 = new PlayerTank(50, 50, 1);
	Drawer* dPT2 = new PlayerTank(100, 50, 2);
	Drawer* dPT3 = new PlayerTank(150, 50, 3);
	Drawer* dPT4 = new PlayerTank(200, 50, 4);
	BattleField bf;
	bf.add_object(dPT1);
	bf.add_object(dPT2);
	bf.add_object(dPT3);
	bf.add_object(dPT4);
	bf.draw_all();
	ReleaseDC(myconsole, mydc);
	cin.ignore();


	//COLOR = RGB(60, 150, 40);
	//x += 40;
	//for (int i = 0; i < 20; i++)
	//{
	//	SetPixel(mydc, x, y, COLOR);
	//	x += 1;
	//} //x = 40
	//for (int i = 0; i < 20; i++)
	//{
	//	SetPixel(mydc, x, y, COLOR);
	//	//x += 1;
	//	y++;
	//} // y = 20;

	//for (int i = 0; i < 20; i++)
	//{
	//	SetPixel(mydc, x, y, COLOR);
	//	x -= 1;
	//	//y++;
	//} // x = 20;

	//for (int i = 0; i < 20; i++)
	//{
	//	SetPixel(mydc, x, y, COLOR);
	//	//x += 1;
	//	y--;
	//} //y = 0;

	//COLOR = RGB(255, 0, 0);
	//for (int i = 1; i < 20; ++i)
	//	for (int j = 1; j < 20; ++j) {
	//		SetPixel(mydc, x + i, y + j, COLOR);
	//	}

	//COLOR = RGB(0, 0, 0);
	//for (int i = 0; i < 6; ++i)
	//	for (int j = 0; j < 4; ++j)
	//		SetPixel(mydc, x + 8 + i, y + 10 + j, COLOR);

	//for (int i = 0; i < 2; ++i)
	//	for (int j = -8; j < 0; ++j)
	//		SetPixel(mydc, x + 10 + i, y + 10 + j, COLOR);

	//ReleaseDC(myconsole, mydc);
	//cin.ignore();
	//system("pause");

	return 0;
}

