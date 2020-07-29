#include<iostream>

class Critter 
{
public:
	Critter(const std::string& name = "", int age = 0);
	~Critter();
	void Greet();
	Critter(const Critter& c);
	Critter& Critter::operator=(const Critter& c);
private:
	std::string* mName;
	int mAge;
};

Critter& Critter::operator=(const Critter& c)
{
	std::cout << "Overloaded operator caller \n";
	if (this != c)
	{
		delete mName;
		mName = new std::string(*(c.mName));
		mAge = c.mAge;
	}
	return *this;
}
Critter::Critter(const Critter& c)
{
	std::cout << "Copy constructor is caller" << std::endl;
	mName = new std::string(*(c.mName));
	mAge = c.mAge;
}


void Critter::Greet()
{
	std::cout << "Hi my name is " << *mName << " and my age is " << mAge << std::endl;
}

Critter::Critter(const std::string& name, int age)
{
	mName = new std::string(name);
	mAge = age;
}

Critter::~Critter()
{
	std::cout << "Destructor caller" << std::endl;
	delete mName;
}

void testDestructor();
void testCopyConstructor(Critter);
void testAssignmentOp();

int main()
{
	//testDestructor();
	//Critter crit("Bane", 25);
	//testCopyConstructor(crit);
	testAssignmentOp();
}

void testDestructor()
{
	Critter toDestroy("Robin", 10);
	toDestroy.Greet();
}

void testCopyConstructor(Critter aCopy)
{
	aCopy.Greet();
}

void testAssignmentOp()
{
	Critter cric1("cric1", 7);
	Critter cric2("cric2", 9);
	cric1 = cric2;
	cric1.Greet();
	cric2.Greet();
}