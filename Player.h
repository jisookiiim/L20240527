#pragma once
class FPlayer
{
public: 
	FPlayer();
	~FPlayer();

	void Move();
	void Attack();
	void Pickup();
	
	int GetGold();
	void SetGold(int NewGold);


protected:
	int HP;
	int Gold; 
	
	void Die();
	
};

