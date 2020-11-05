#include <cstdlib>
#include <iostream>
#include <ctime>

int main(){	std:srand(std::time(nullptr)); // sets the time as a seed for random numbers	int random1 = std::rand(); // just a random number based on the time	std::cout << "Random number: " << random1 << std::endl;	int max1 = 0; // setting up a maximum for the next random number	std::cout << "Enter a maximum for the next random number." << std::endl;	std::cin >> max1; // getting a new maximum for the second random number	int random2 = std::rand() % (max1 + 1); // }