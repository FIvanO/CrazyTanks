//FIvanO
#include <iostream>
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

using namespace std;

int main()
{
	Drawer *dB = new Bullet();
	Drawer *dW = new Wall();
	BattleField bf;
	Tank *t1 = new PlayerTank();
	Tank *t2 = new EnemyTank();
	Drawer *dPT = t1;
	Drawer *dET = t2;
	
	bf.add_object(t1);
	bf.add_object(dPT);
	bf.add_object(dET);
	bf.add_object(dB);
	bf.add_object(dW);
	bf.draw_all();

	system("pause");

	return 0;
}

