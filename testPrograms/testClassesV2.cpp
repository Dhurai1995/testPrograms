// Evaluating the scope access

#include<iostream>

class critter
{
private:
    int	mHunger = 0;

public:
    critter(int hunger = 0);
    void getHunger();
    void changeHunger(int hunger);
};

critter::critter(int hunger) :mHunger(hunger)
{
    std::cout << "\nA new critter has been created\nand its hunger level has been initialized with " << hunger;
}
void critter::changeHunger(int hunger)
{
    mHunger = hunger;
}

void critter::getHunger()
{
    std::cout << "\nThe hunger level is:" << mHunger << std::endl;
}

int main()
{
    critter cric1;
    cric1.changeHunger();
    cric1.getHunger();
}