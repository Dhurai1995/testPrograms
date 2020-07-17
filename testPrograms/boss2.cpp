#include<iostream>

class Enemy
{
public:
	Enemy(int damage = 10);
	void virtual Taunt();
	void virtual attack();

private:
	int mDamage;
};

Enemy::Enemy(int damage) :mDamage(damage)
{}

void Enemy::Taunt()
{
	std::cout << "The enemy says he will fight you \n";
}

void Enemy::attack()
{
	std::cout << "Attack! Inflicts " << mDamage << " damage points \n";
}


class Boss : public Enemy
{
public:
	Boss(int damage =30);
	void virtual Taunt();
	void virtual attack();

};

Boss::Boss(int damage) :Enemy(damage)
{}

void Boss::Taunt()
{
	std::cout << "\nThe boss says he will end your putuful existence\n";
}

void Boss::attack()
{
	Enemy::attack();
		std::cout << "And laugs heartilty at you \n";
}


int main()
{
	std::cout << "\nEnemy object: \n";
	Enemy anEnemy;
	anEnemy.Taunt();
	anEnemy.attack();

	std::cout << "\n\nBoss object:\n";
	Boss aBoss(100);
	aBoss.Taunt();
	aBoss.attack();
}