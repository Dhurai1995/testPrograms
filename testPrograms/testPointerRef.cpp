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
	std::cout << *pTemp;
}

std::string* ptrString(std::vector<std::string>* inveT, int i)
{
	return &((*inveT)[i]);  //Get the inventrory and then the subssription
}