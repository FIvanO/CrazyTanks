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
#include <time.h>
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
	std::srand(int(time(0)));
	Drawer* dPT = new PlayerTank(100, 100, up);
	/*Drawer* dET1 = new EnemyTank(500, 100, left);
	Drawer* dET2 = new EnemyTank(600, 100, up);
	Drawer* dET3 = new EnemyTank(700, 100, right);
	Drawer* dET4 = new EnemyTank(800, 100, down);
	Drawer* dB1 = new Bullet(50, 10, up, 1, 1);
	Drawer* dB2 = new Bullet(100, 10, right, 1, 1);*/
	Drawer* W1 = new Wall(25);
	Drawer* W2 = new Wall(23);
	Drawer* W3 = new Wall(21);
	Drawer* W4 = new Wall(27);
	Drawer* W5 = new Wall(29);
	BattleField bf;
	bf.add_object(dPT1);
	bf.add_object(dPT2);
	bf.add_object(dPT3);
	bf.add_object(dPT4);
	bf.add_object(W1);
	bf.add_object(W2);
	bf.add_object(W3);
	bf.add_object(W4);
	bf.add_object(W5);
	//bf.add_object(dET1);
	//bf.add_object(dET2);
	//bf.add_object(dET3);
	//bf.add_object(dET4);
	//bf.add_object(dB1);
	//bf.add_object(dB2);

	bf.draw_all();
	ReleaseDC(myconsole, mydc);
	std::cin.ignore();


	return 0;
}

