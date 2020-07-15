// Testing pointer reference

#include<iostream>
#include<vector>
std::string* ptrString(std::vector<std::string>* inveT, int i);

int main()
{
	std::vector<std::string> inventory;
	inventory.push_back("Knife");
	inventory.push_back("Gun");
	inventory.push_back("stone");

	std::cout << "the first element in the inventory is: " << std::endl;
	std::cout << (ptrString(&inventory, 1)) << std::endl;


	std::string* pTemp = (ptrString(&inventory, 1));
	std::cout << "\nThe value of string through pointer of pointer is :\n";
	std::cout << *pTemp << std::endl;

	std::cout << "Adding a new item to the inventory\n";
	*pTemp = "Mentos";
	std::cout << "The items are:\n";

	for (std::vector<std::string>::iterator i = inventory.begin(); i != inventory.end(); ++i)
	{
		std::cout << *i << std::endl;
	}

}

std::string* ptrString(std::vector<std::string>* inveT, int i)
{
	return &((*inveT)[i]);  //Get the inventrory and then the subssription
}