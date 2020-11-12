#include <iostream>
#include "reverse.h"

int reverseElementsOrder(int numbers[], size_t size)
{
	for(int i = 0; i < size; i++)
	{
		int reverseCount = size - 1 - i;
		std::cout << numbers[reverseCount] << std::endl;
	}
	return 0;
}