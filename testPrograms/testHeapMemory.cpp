// A program to access and learn about the dynamic memory

#include<iostream>

int* intOnHeap();

int main()
{
	int* pHeap = new int;
	*pHeap = 10;
	std::cout << "The heap value is: " << *pHeap << std::endl;

	int* pHeap2 = intOnHeap();
	std::cout << "The heap 2 value is : " << *pHeap2 << std::endl;
	
	std::cout << "To free the memory: \n";
	delete pHeap;
	delete pHeap2;

	pHeap = 0;
	pHeap2 = 0;

}

int* intOnHeap()
{
	int* pHeapFun = new int(20);
	return pHeapFun;
}