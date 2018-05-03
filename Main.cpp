#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;

int main()
{
	string species;
	int legs;
	char alive;
	bool is_alive;
	Animal cat;

	cout << "You make some animals..." << endl;
	cout << "What species of animal do you want to make first? ";
	cin >> species;

	cout << "hhow many legs does your animal have? ";
	cin >> legs;

	cout << "is it alive (y/n)? ";
	cin >> alive;

	if alive == 'y' || alive == 'Y')
	{
	is_alive = true;
	}
	else if (alive == 'n' || alive == 'N')
	{
		is_alive = false;
	}
	else
	{
		cout << "That was not an option..." << endl;
	}

	Animal users(legs, is_alive, species);

	cout << "Also, i am going to make you a cat" << endl;
}