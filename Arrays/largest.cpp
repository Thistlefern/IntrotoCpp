#include <iostream>
#include "largest.h"

int largestValue(int numbers[], size_t size)
{
	int largest = numbers[0];
	for (int i = 0; i < size; i++)
	{
		if (numbers[i] > largest)
		{
			largest = numbers[i];
		}
	}
	std::cout << "Largest number: " << largest << std::endl;
	return largest;
}