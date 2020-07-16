// A critter farming game
// concept of object aggregation

#include<iostream>
#include<string>
#include<vector>

class Critter
{
public:
	Critter( std::string name="");
	std::string getName() ;

private:
	std::string mName;
};

 std::string Critter::getName() 
{
	return mName;
}

Critter::Critter( std::string name) :mName(name)
{
}

// Class farm

class Farm
{
public:
	Farm( int space = 1);
	void Add( Critter aCritter);
	void RollCall() ;
private:
	std::vector<Critter> mCritName;
};

void Farm::RollCall() 
{
	for (std::vector<Critter>::iterator iter = mCritName.begin(); iter!= mCritName.end(); ++iter)
	{
		std::cout << (*iter).getName() << std::endl;
	}
}
void Farm::Add( Critter aCritter)
{
	mCritName.push_back(aCritter);
}

Farm::Farm(int space)
{
	mCritName.reserve(space);
}

int main()
{
	Critter cric("Poochie");
	std::cout << "\nMy critter name is: " << cric.getName() << std::endl;

	std::cout << "\nCreating a critter farm.\n";
	Farm myFarm(3);

	std::cout << "Adding three critters to the farm:\n";
	myFarm.Add(Critter("Moe"));
	myFarm.Add(Critter("Inoue"));
	myFarm.Add(Critter("Ichigo"));

	std::cout << "\n Calling the critter for roll call.\n";
	myFarm.RollCall();

}