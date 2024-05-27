#pragma once
class FWildBoar
{
public:
	FWildBoar();
	~FWildBoar();

	void Move();
	void Attack();
	void Pickup();
	void Run();


	//aceesssor
	int GetGold();
	//mutator 
	void SetGold(int NewGold);
	void Die();
};

