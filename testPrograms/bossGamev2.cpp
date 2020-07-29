#include<iostream>

class Enemy
{
public:
	Enemy();
	void attack() const;
	int mDamage;
};

Enemy::Enemy() :mDamage(10)
{}

class Boss :public Enemy
{
public:
	Boss();
	void SpecialAttack() const;
	int mDamageMultiplier;
};

Boss::Boss() :mDamageMultiplier(3)
{}

void Boss::SpecialAttack() const
{
	std::cout << "Special attach inflicts" << (mDamageMultiplier * mDamage);
	std::cout << "Damge points\n";
}

int main()
{
	std::cout << "Creatign an enemy\n";
	Enemy enemy1;
	enemy1.attack();
}