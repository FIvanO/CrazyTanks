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

//using namespace std;

int main()
{

	Drawer* dPT1 = new PlayerTank(100, 100, down);
	Drawer* dPT2 = new PlayerTank(200, 100, right);
	Drawer* dPT3 = new PlayerTank(300, 100, up);
	Drawer* dPT4 = new PlayerTank(400, 100, left);
	Drawer* dET1 = new EnemyTank(500, 100, left);
	Drawer* dET2 = new EnemyTank(600, 100, up);
	Drawer* dET3 = new EnemyTank(700, 100, right);
	Drawer* dET4 = new EnemyTank(800, 100, down);
	Drawer* dB1 = new Bullet(50, 10, up, 1, 1);
	Drawer* dB2 = new Bullet(100, 10, right, 1, 1);
	BattleField bf;
	bf.add_object(dPT1);
	bf.add_object(dPT2);
	bf.add_object(dPT3);
	bf.add_object(dPT4);
	bf.add_object(dET1);
	bf.add_object(dET2);
	bf.add_object(dET3);
	bf.add_object(dET4);
	bf.add_object(dB1);
	bf.add_object(dB2);
	bf.draw_all();
	ReleaseDC(myconsole, mydc);
	std::cin.ignore();


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

