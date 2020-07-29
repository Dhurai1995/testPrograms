#include<iostream>

class Enemy
{
public:
	Enemy(int damage = 10);
	virtual ~Enemy();
	void virtual Attack() const;

protected:
	int* mDamage;
};

Enemy::Enemy(int damage)
{
	std::cout << "Enemy constructor called\n";
	mDamage = new int(damage);
}

Enemy::~Enemy()
{
	std::cout << "An enemy destructor, deleting pDAmage\n";
	delete mDamage;
	mDamage = 0;
}

void Enemy::Attack() const
{
	std::cout << " An enmy attachl and inflics" << *mDamage << " damage points\n";
}

// class boss
class Boss : public Enemy
{
public:
	Boss(int multiplier = 3);
	virtual ~Boss();
	void virtual Attack() const;

protected:
	int* mMultiplier;
};

Boss::Boss(int multiplier)
{
	std::cout << "BOss constructor called\n";
	mMultiplier = new int(multiplier);
}

Boss::~Boss()
{
	std::cout<<"The boss destructor is called\n";
	delete mMultiplier;
	mMultiplier = 0;
}

void Boss::Attack() const
{
	std::cout << "The boss attacks\n";
	std::cout << "The attack points is " << (*mMultiplier) * (*mDamage) << std::endl;
}

int main()
{
	Enemy* pBadGuy = new Boss();
	pBadGuy->Attack();
	delete pBadGuy;
	pBadGuy = 0;
	//Boss boss1;
	//boss1.Attack();

}