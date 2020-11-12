#include <iostream>
#include "find.h"
int findIndex(int numbers[], size_t size, int value, int start)
{
	int index = -1;

	for(int i = start; i < size; i++)
	{
		if (numbers[i] == value && index == -1)
		{
			index = i;
		}
	}

	std::cout << "Number found at index number " << index << std::endl;
	return index;
}