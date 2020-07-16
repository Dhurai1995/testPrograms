// A simple critter program to test the class concept

#include<iostream>

class critter
{
public:
	int mHunger = 0;
	critter(int hunger = 0); //constructor
	void getStatus();
};

critter::critter(int hunger): mHunger(hunger)
{
	std::cout << "Critter has been created:" << std::endl;

}
void critter::getStatus()
{
	std::cout << "\nMy hunger level is: " << mHunger<<std::endl;
}

int main()
{
	critter cric1;
	critter cric2(10);

	//cric1.mHunger = 10;
	//cric2.mHunger = 50;

	cric1.getStatus();
	cric2.getStatus();
}

