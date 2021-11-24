#include <string>
#include <iostream>

// #include "Dog.hpp"

class Husky : public Dog{
public:
	Husky(int age, std::string name, std::string favouriteFood, int *toys, int maxNoOfSledges) 
		: Dog(age,name,favouriteFood,toys)
		, maxNoOfSledges(maxNoOfSledges)
	{}

	Husky(const Dog &rhs);
	Husky& operator=(const Husky &a);

private:
	int maxNoOfSledges;
};
