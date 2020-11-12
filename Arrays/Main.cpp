#include <iostream>
#include "print.h"
#include "sum.h"
#include "largest.h"
#include "find.h"
#include "count.h"
#include "unique.h"
#include "reverse.h"

int main()
{
	int numbers[] = {7, 10, 25, 6, 2};
	int size = 5;

	printNumbers(numbers, size);
	sumNumbers(numbers, size);
	largestValue(numbers, size);
	findIndex(numbers, size, 8, 0);
	countElement(numbers, size, 10);
	allElementsUnique(numbers, size);
	reverseElementsOrder(numbers, size);
}