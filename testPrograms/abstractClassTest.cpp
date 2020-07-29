#include<iostream>

class Creature
{
public:
	Creature(int Health = 100);
	virtual void greet() = 0;
	virtual void DisplayHealth();

protected:
	int mHealth;
};

Creature::Creature(int Health) :mHealth(Health)
{
	std::cout << "The creature constructor is caller\n";
}

void Creature::DisplayHealth()
{
	std::cout << "The health is " << mHealth << std::endl;
}

// Orc class

class Orc:public Creature
{
public:
	Orc(int health = 200);
	virtual void greet();
};

Orc::Orc(int Health):Creature(Health)
{
	std::cout << "The Orc constructor is caller\n";
}

void Orc::greet()
{
	std::cout << "The Orc grunts... Helllo \n";
}

int main()
{
	Creature* pTemp = new Orc();
	pTemp->DisplayHealth();
}