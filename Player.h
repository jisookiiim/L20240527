#pragma once
class FPlayer
{
public: 
	FPlayer();
	~FPlayer();

	int HP;
	int Gold; 

	//interface 
	void Move();
	void Attack();
	void Pickup();

	//aceesssor
	int GetGold();
	//mutator 
	void SetGold(int NewGold);


private:
	int HP;
	int Gold; 
	
	void Die;
	
};

