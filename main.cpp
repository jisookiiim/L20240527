#include <iostream>

using namespace std;


class World
{
	int X;
	int Y;
};

class Wall
{
	int X;
	int Y;

	char Shape;
};

class Floor
{
	int X;
	int Y;

	char Shape;

};


class Player
{
	int X;
	int Y;

	char Shape;

	void Move();
};

class Monster
{
public: 
	int X;
	int Y;

	char Shape;

	int Goblin;
	int Slime; 
	int Boar;

	void Move();
	void Attack();

};

class Gold
{
	int X;
	int Y;
	int Shape;
};

void Move();
void Attack();
void Jump();
void Run();
void Slide();


int main()
{
	World* Myworld = new World;
	Player* MyPlayer = new Player;

	
	
	return 0;
}