// Just a bunch of line to understand the functionality of pointer

#include<iostream>

void pointerTest();
void pointerConstantTest();
void pointerConstantTest2();

int temp()
{

	//pointerTest();
	//pointerConstantTest();
	//pointerConstantTest2();
	return 0;
}


void pointerConstantTest2()
{
	int money = 500;
	int debt = 200;
	const int* const pMoney = &money;

	// *pMoney = 1000;  Doesnt work
	// pMoney = &debt;  Doesnt work either

}
void pointerConstantTest()
{
	int health = 10;
	int* const pHealth = &health;
	std::cout << "\nYour current Health is :" << *pHealth << std::endl;

	// Now can I assign a new address?

/*int numberOfWeapon = 5;
	pHealth = &numberOfWeapon; 

    int numberOfWeapon = 5;
	int* pHealth = &numberOfWeapon;*/   //Doesnt word

	//can I change the value?
	* pHealth = 5;
	std::cout << "\nNow Your current Health is :" << *pHealth << std::endl;

	
	// Another const
	std::string name = "The Batman";
	std::string name2 = "The Joker";

	const std::string* pName = &name;
	std::cout << "The name of the hero is : " << *pName << std::endl;

	//*pName = name2; Doesnt work

	// Two constant

}
void pointerTest()
{
	int score = 500;
	int* pScore = &score;   //pointer declaration
	int getScore = 0;

	std::cout << "\nThe score is: " << score << std::endl;
	std::cout << "\nThe score through pointer is " << *pScore << std::endl; //*Pointer name to get the value to which the pointer points to
	std::cout << "\nThe address of the score is " << &score << std::endl;
	std::cout << "\nThe address of the pointer is " << pScore << std::endl;

	std::cout << "\nType the value of new score : ";
	std::cin >> getScore;
	*pScore = getScore;
	std::cout << "\nAfter change the value of score through pointer\n";
	std::cout << "The score now becomes: " << *pScore << std::endl;

	std::cout << "\nLets see the pointer in action in case of string" << std::endl;

	std::string str = "Blah blah";
	std::string* pString = &str;

	std::cout << "\nThe string is: " << str << std::endl;
	std::cout << "The string in the pointer is :" << *pString << std::endl;

	std::cout << "\nThe size of the string is: " << pString->size() << std::endl;

	// can I change the address?Lets try
//pScore = 15323;  NOPE!!

}