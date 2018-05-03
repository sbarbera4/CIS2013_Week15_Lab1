#include <string>

using namespace std;

class Animal
{
private:
	int legs;
	bool living;
	string species;

public:

	Animal();
	Animal(int legs, bool alive, string species)
	~Animal();

	void set_legs(int);
	int get_legs();
	
	void set_alive(bool);
	bool get_alive();

	void set_species(string);
	string get_species();
	string describe();
};