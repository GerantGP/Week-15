#pragma once

#include <iostream>
#include <random>
#include <iomanip> 
#include <string>
#include <cstdlib>


using namespace std;

//Validates that the user is enterting an Int, using Refence to change Int num
void validateInt(string prompt, int& num)
{
	cout << "\n\n" << prompt;

	while (!(cin >> num) || cin.fail())
	{
		cout << "\nnError: ID-10T.. Try again...";
		cin.clear();
		cin.ignore();
		cin.sync();
	}


}

//Overloaded function, that Validates that the user is enterting an Int, within a set range using Refence to change Int num
void validateInt(string prompt, int& num, int min, int max)
{
	cout << "\n\n" << prompt;

	int attempts = 0;
	while (!(cin >> num) || cin.fail() || num<min || num>max)
	{
		attempts++;
		cout << "\nError: ID - 10T..Try again...\n";
		cin.clear();
		cin.ignore();
		cin.sync();

		if (attempts == 5) cout << "\n\nAre you trying to break the program?\n" << prompt;
		else if (attempts > 5) cout << "\nStop it\n" << prompt;
	}
}

//Returns a random Number based on a range sent to the function
int getRandom(int min, int max)
{
	std::random_device rand_dev;
	std::mt19937 generator(rand_dev());
	std::uniform_int_distribution<int> distr(min, max);
	return distr(generator);

}


