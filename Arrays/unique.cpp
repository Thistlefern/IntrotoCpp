#include <iostream>
#include "unique.h"

int allElementsUnique(int numbers[], size_t size)
{
	bool unique = true;

	for (int i = 0; i < size; i++)
	{
		int countTotal = 0;
		int value = numbers[i];

		for (int j = 0; j < size; j++)
		{
			if (numbers[j] == value)
			{
				countTotal++;
			}
		}
		if(countTotal > 1)
		{
			unique = false;
		}
	}

	if (unique == 0)
	{
		std::cout << "All values are unique: false" << std::endl;
	}
	else if(unique == 1)
	{
		std::cout << "All values are unique: true" << std::endl;
	}
	return unique;
}
