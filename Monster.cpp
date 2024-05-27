#include "Monster.h"

#include <iostream>

using namespace std;

FMonster::FMonster() 
{
	cout << "FMonster Constructor" << endl;
	HP = 0;
	Gold = 0;
}

FMonster::~FMonster()
{
	cout << "FMonster Destructor" << endl;
}

void Move()
{
}

void Attack()
{
}

void Pickup()
{
}

int GetGold()
{
	return 0;
}

void SetGold(int NewGold)
{
}
