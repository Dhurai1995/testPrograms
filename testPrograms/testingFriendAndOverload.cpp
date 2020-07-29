#include<iostream>
#include<string>



class Critter
{
	friend void peek(const Critter& aCritter);
	friend std::ostream& operator<<(std::ostream& os, Critter& aCritter);
public:
	Critter(const std::string& name = "");
	
private:
	std::string mName;
	
};

Critter::Critter(const std::string& name):mName(name)
{ }

void peek(const Critter& aCritter)
{
	std::cout << aCritter.mName;
}

std::ostream& operator<<(std::ostream& os, Critter& aCritter)
{
	os << " Critter name is - ";
	os << "Critter mName is " << aCritter.mName;
	return os;
}
int main()
{
	Critter cric("BatBoy");
	peek(Critter("toy"));
	std::cout << cric;

}