#include<iostream>

class Creature
{
public:
	Creature(int Health = 100);
	virtual void Greet() = 0;
	virtual void DisplayHealth();

protected:
	int mHealth;
};

Creature::Creature(int health):mHealth(health)
{}

void Creature::DisplayHealth()
{
	std::cout << "Health: " << mHealth << std::endl;
}

class Orc:public Creature
{
public:
	Orc(int Health = 120);
	virtual void Greet();
};

Orc::Orc(int health):Creature(health)
{}

void Orc::Greet()
{
	std::cout << "the orc grunts heallo \n";
}

int main()
{
	Creature* pCreature = new Orc();
	pCreature->Greet();
	pCreature->DisplayHealth();

}