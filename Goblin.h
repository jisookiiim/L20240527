#pragma once
class FGoblin
{
public:
	FGoblin();
	~FGoblin();

	void Move();
	void Attack();
	void Pickup();
	void Jump();

	//aceesssor
	int GetGold();
	//mutator 
	void SetGold(int NewGold);
	void Die();


private:
	int HP;
	int Gold;

	void Die;
};

