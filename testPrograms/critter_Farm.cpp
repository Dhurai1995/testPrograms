#include<iostream>
#include<string>
#include<vector>


class Critter
{
public:
	Critter(const std::string& name = "");
	void getName() ;

private:
	std::string mName;
};

Critter::Critter(const std::string& name) :mName(name)
{
	std::cout << mName << std::endl;
}

void Critter::getName() 
{
	std::cout << "The critter name is " << mName << std::endl;
}

// Farm class
class Farm
{
public:
	Farm(const int& nFarm = 1);
	void Add(const Critter& nCritter);
	void rollCall();

private:
	std::vector<Critter> mCritter;
};

Farm::Farm(const int& nFarm)
{
	mCritter.reserve(nFarm);
}

void Farm::Add(const Critter& nCritter)
{
	mCritter.push_back(nCritter);
}

void Farm::rollCall()
{
	for (std::vector<Critter>::iterator iter = mCritter.begin(); iter != mCritter.end(); iter++)
	{
		iter->getName();
    }
}

int main()
{
	Critter cric("Batboy");
	cric.getName();

	std::cout << "\n Creating the critter farm\n";
	Farm myFarm(3);

	//Critter temp1("Joker");
	//Critter temp2("Quinn");
	//Critter temp3("Bane");

	myFarm.Add(Critter("Joker"));
	myFarm.Add(Critter("Quinn"));
	myFarm.Add(Critter("Bane"));

	myFarm.rollCall();
}