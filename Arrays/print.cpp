#include <iostream>
#include "print.h"

void printNumbers(int nums[], size_t size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << nums[i] << std::endl;
    }
}