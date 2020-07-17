// The boss game , inheritance, class

#include<iostream>

class Enemy
{
public:
	Enemy();
	void attack();
	int mDamage;
};

void Enemy::attack()
{
	std::cout << "attack inflicted " << mDamage << " damage points\n";
}
Enemy::Enemy():mDamage(10)
{
	std::cout << "Enemy created" << std::endl;
}

// Boss inherited from enemy (duh!!..)

class Boss : public Enemy
{
public:
	int mDamageMultipier;
	Boss();
	void specialAttack();
};

Boss::Boss():mDamageMultipier(3)
{

}
void Boss::specialAttack()
{
	std::cout << "Special attack inflicts" << (mDamage * mDamageMultipier) << " damage points\n";
}

int main()
{
	std::cout << "creating an enemy\n" << std::endl;
	Enemy enemy1;
	enemy1.attack();

	std::cout << "\n Creating the boss\n";
	Boss boss1;
	boss1.attack();
	boss1.specialAttack();
}