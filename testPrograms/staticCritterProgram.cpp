// A program to test static in classes

#include<iostream>

class Critter
{
public:
	static int noCritter;
	static int getNumberCritter();
	Critter(int hunger = 0);

public:
	int mHunger;
};

int Critter::noCritter=0;

Critter::Critter(int hunger)
{
	std::cout << "\nA critter has been created \n" << std::endl;
	++noCritter;
}

int Critter::getNumberCritter()
{
	return noCritter;
}

int main()
{
	std::cout << "\nInital list of critter: " << std::endl;
	std::cout << Critter::noCritter << std::endl;  
	// The only way to get the inital list from the class is through the static keyword
	// You can call member funtion without the object instance as the static data member and member fucntion() exists for the entire class
	//But still its possibel to call the static member/function with the object name
	Critter cric1, cric2;
	std::cout << "\nThe total number of critter: " << std::endl;
	std::cout << Critter::getNumberCritter();
}