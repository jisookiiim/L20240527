#pragma once
class FSlime
{
public:
	FSlime();
	~FSlime();

	void Move();
	void Attack();
	void Pickup();
	void Slide();

	//aceesssor
	int GetGold();
	//mutator 
	void SetGold(int NewGold);
	void Die();
};

