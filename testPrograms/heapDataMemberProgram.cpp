// To test the fucntionality of heap data member

#include<iostream>
#include<string>

class Critter
{
	public:
		Critter(std::string name, int age = 0);
		~Critter();
		Critter(const Critter& c);
		Critter& Critter::operator=(const Critter& c);
		void Greet();
private:
	std::string* mName = new std::string;
	int mAge;
};

Critter& Critter::operator=(const Critter& c)
{
	std::cout << "Overloaded assignment operator called\n";
	if (this != &c)
	{
		delete mName;
		mName = new std::string(*(c.mName));
		mAge = c.mAge;
	}
	return *this;
}
Critter::Critter(const Critter& c)
{
	std::cout << "Copy constructor called\n";
	mName = new std::string(*(c.mName));
	mAge = c.mAge;
}

Critter::~Critter()
{
	std::cout << "Destructor called\n";
	delete mName;
}

void Critter::Greet()
{
	std::cout << "The name is : " << *mName << std::endl;
	std::cout << "the age is: " << mAge << std::endl;
	std::cout << "& mName is: " << &mName << std::endl;
}
Critter::Critter(std::string name, int age)
{
	std::cout << "constructor called\n";
	*mName = name;
	mAge = age;
}

void testAssignmentOp();
void testDestructor();
void testCopyConstructor(Critter aCopy);

int main()
{
	testDestructor();
	std::cout << std::endl;

	Critter crit("Poochie", 5);
	crit.Greet();
	testCopyConstructor(crit);
	crit.Greet();
	std::cout << std::endl;
	
	testAssignmentOp();
}

void testDestructor()
{
	Critter toDestroy("Rover", 3);
	toDestroy.Greet();
}

void testCopyConstructor(Critter aName)
{
	std::cout << std::endl;
	aName.Greet();
}

void testAssignmentOp()
{
	Critter crit1("crit1", 7);
	Critter crit2("crit2", 9);
	crit1 = crit2;
	crit1.Greet();
	crit2.Greet();
	std::cout << std::endl;

	Critter crit3("crit", 11);
	crit3 = crit3;
	crit3.Greet();
}