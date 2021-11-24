#include <string>
#include <iostream>
#include <vector>

#include "Dog.hpp"

class Shelter {
public:
	Shelter(std::string name, std::string location, std::vector<Dog> dogs)
		:name(name)
		,location(location)
		,dogs(dogs)
		{};

	void show();

private: 
	Shelter(); // defined as private so it cannot be called
	Shelter(const Dog &a); // copy constructor
	Shelter& operator=(const Dog &a); // copy assignment operator

private:
	std::string name;
	std::string location;
	std::vector<Dog> dogs;
};
