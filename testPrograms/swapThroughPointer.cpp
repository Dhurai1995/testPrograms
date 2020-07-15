// Swap two values through pointer

#include<iostream>

void swap(int* const p1, int* const p2);

int main()
{
	int myScore = 500;
	int yourScore = 1500;

	std::cout << "My score is : " << myScore << std::endl;
	std::cout << "Your score is : " << yourScore << std::endl;

    swap(&myScore, &yourScore); // send the address rather than the pointer

	std::cout << " \n  Now My score is : " << myScore << std::endl;
	std::cout << "\n   Your score is : " << yourScore << std::endl;
}

void swap(int* const p1, int* const p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}