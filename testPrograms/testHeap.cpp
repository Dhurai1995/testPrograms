#include<iostream>

void heapTest();
int main()
{
	int* drip = new int(100);
	std::cout << "*Drip is" << *drip << std::endl;
	*drip = 2000;
	std::cout << "*Drip is" << *drip << std::endl;
	heapTest();
}

void heapTest()
{
	std::cout << "*Drip is" << *drip << std::endl;
}