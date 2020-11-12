#include <iostream>
#include "count.h"

int countElement(int numbers[], size_t size, int value)
{
	int countTotal = 0;

	for (int i = 0; i < size; i++)
	{
		if(numbers[i] == value)
		{
			countTotal++;
		}
	}

	std::cout << "Number of times that " << value << " appears: " << countTotal << std::endl;
	return countTotal;
}