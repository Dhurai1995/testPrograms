#include<iostream>

class Enemy
{
public:
	Enemy(int damage = 10);
	virtual ~Enemy();
	void virtual Attack() const;
protected:
protected:
	int* m_pDamage;
};

Enemy::Enemy(int damage)
{
	m_pDamage = new int(damage);
}

Enemy::~Enemy()
{
	std::cout << "Destructor is called, destropying the m_pdamage\n";
	delete m_pDamage;
	m_pDamage = 0;
}

void Enemy::Attack() const
{
	std::cout << "An attack inflicts " << *m_pDamage << "damage points. ";
}


// boss class

class Boss:public Enemy
{
public:
	Boss(int damage = 3);
	virtual ~Boss();
	void virtual Attack() const;
private:
	int* m_pMultiplier;
};

Boss::Boss(int damage)
{
	m_pMultiplier = new int(damage);
}

Boss::~Boss()
{
	std::cout << "\n Boss destructor, deleting m_pDestructor\n";
	delete m_pMultiplier;
	m_pMultiplier = 0;
}

void Boss::Attack() const
{
	std::cout << "A Boss attacks and inflicts " << (*m_pDamage) * (*m_pMultiplier) << " damage pointes";
}

int main()
{
	std::cout << "Calling attack() on the base object through pointer to the enemy\n";
	Enemy* pBadGuy = new Boss();
	pBadGuy->Attack();

	std::cout << "\n\nDeleting pointer to enemy:\n";
	delete pBadGuy;
	pBadGuy = 0;

}