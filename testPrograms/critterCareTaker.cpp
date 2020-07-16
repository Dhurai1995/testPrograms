// A creitter caretaker game

#include<iostream>

class Critter
{
private:
	int mHunger = 0;
	int mBoredom = 0;
	int getMood() const;
	void passTime(int time =1);

public:
	void talk();
	void eat(int food= 4);
	void play(int fun = 4);
	Critter(int Hunger = 0, int Boredom = 0);
};

Critter::Critter(int Hunger, int Boredom) : mHunger(Hunger), mBoredom(Boredom)
{
	//std::cout << "A critter a been created: " << std::endl;
}

inline int Critter::getMood() const
{
	return (mHunger + mBoredom);
}

void Critter::passTime(int time)
{
	mHunger += time;
	mBoredom += time;
}

void Critter::talk()
{
	std::cout << "Im a critter and I feel:";
	int mood = getMood();
	if (mood > 15)
	{
		std::cout << "Mad.\n";
	}
	else if (mood > 10)
	{
		std::cout << "Frustrated.\n";
	}
	else if (mood > 5)
	{
		std::cout << "Okay.\n";
	}
	else
	{
		std::cout << "happy.\n";
	}
	passTime();
}

void Critter::eat(int food)
{
	std::cout << "Bruuppp.\n";
	mHunger -= food;

	if (mHunger < 0)
	{
		mHunger = 0;
	}
	passTime();
}

void Critter::play(int fun)
{
	std::cout << "Wheeeee.\n";
	mBoredom -= fun;
	if (mBoredom < 0)
	{
		mBoredom = 0;
	}
	passTime();
}

int main()
{
	Critter crit;
	crit.talk();

	int choice;
	do
	{
		std::cout << "\nCritter caretake.\n\n";
		std::cout << "0 - Quit\n";
		std::cout << "1 - Listen to your critter\n";
		std::cout << "2 - Feed your critter\n";
		std::cout << "3 - PLay with your critter\n";

		std::cout << "Choice: ";
		std::cin >> choice;

		switch (choice)
		{
		case 0:
			std::cout << "Good bye\n";
			break;
		case 1:
			crit.talk();
			break;
		case 2:
			crit.eat();
			break;
		case 3:
			crit.play();
			break;
		default:
			std::cout << "\nSorry, but" << choice << "Isnt a valid choice.\n";
		}
	} while (choice != 0);
	return 0;
}