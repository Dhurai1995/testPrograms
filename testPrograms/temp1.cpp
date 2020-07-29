#include <iostream>

class Enemy
{
public:
	Enemy();
	void attack() const;
	int mDamage;
};

Enemy::Enemy() :mDamage(10)
{}

void Enemy::attack() const
{
	std::cout << "Attack inflicts " << mDamage << " Damage points\n";
}

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
	std::cout << "Special attach inflics " << (mDamageMultiplier * mDamage);
	std::cout << " Damge points\n";
}

int main()
{
	std::cout << "Creatign an enemy\n";
	Enemy enemy1;
	enemy1.attack();

	std::cout << "\n\n Creating the boss\n";
	Boss boss1;
	boss1.SpecialAttack();
}