#include <iostream>

// Prints the contents of an array of floats to the terminal
void printFloats(float *arr, int size)
{
	for(int i = 0; i < size; i++)
	{
		std::cout << arr[i] << std::endl;
	}
}

// Returns the sum of an integer array
int arraySum(int *arr, int size)
{
	int sum = 0;
	for(int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	std::cout << sum << std::endl;
	return 0;
}

// Initializes all of the values of a boolean array to the given default value
void initBools(bool *arr, int size, bool defaultValue)
{
	for(int i = 0; i < size; i++)
	{
		arr[i] = defaultValue;
	}
}

// Returns a pointer to a dynamic integer array with the given number of zeros
//  - size defines the length of the array
int *zeroArray(size_t size)
{
	int *dynArr = new int[size];
	
	for (int i = 0; i < size; i++)
	{
		dynArr[i] = 0;
	}

	return dynArr;
}

int iLoveNumbers()
{
	int input = 0;
	int numberInput = 0;
	std::cout << "How many numbers should be in our array?" << std::endl;
	std::cin >> input;
	int *dynArr = new int[input];
	for (size_t i = 0; i < input; i++)
	{
		std::cout << "What should number " << i + 1 << " be?" << std::endl;
		std::cin >> numberInput;
		dynArr[i] = numberInput;
	}
	std::cout << "Okay, your numbers are as follows: " << std::endl;
	for (size_t i = 0; i < input; i++)
	{
		std::cout << "Number " << i+1 << ": " << dynArr[i] << std::endl;
	}

	return 0;
}

int main()
{
	float printArr[] = { 5.6f, 6.7f, 7.f };
	printFloats(printArr, 3); 

	int sumArr[] = { 12, 8, 13 };
	arraySum(sumArr, 3);

	bool initArr[5] = {};
	initBools(initArr, 5, true);

	int* zArray = zeroArray(15);
	for(int i = 0; i < 15; i++)
	{
		std::cout << zArray[i] << std::endl;
	}
	delete[] zArray;

	iLoveNumbers();

	return 0;
	//int numberA = 5;
	//int * pointerToNumberA = &numberA;

	//std::cout << *pointerToNumberA << std::endl; // prints 5

	//// deference and assign the value pointed to with 22
	//*pointerToNumberA = 22;

	//std::cout << *pointerToNumberA << std::endl; // prints 22
	//std::cout << numberA << std::endl; // prints 22

	////assign 74 to numberA, whose value is also pointed to by pointerToNumberA
	//numberA = 74;

	//std::cout << *pointerToNumberA << std::endl; // prints 74
	//std::cout << numberA << std::endl; // prints 74
}