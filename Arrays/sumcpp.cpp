#include <iostream>
#include "sum.h"

int sumNumbers(int numbers[], size_t size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += numbers[i];
	}
	std::cout << "Sum: " << sum << std::endl;
	return sum;
}