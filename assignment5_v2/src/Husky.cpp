#include <Husky.hpp>


Husky::Husky(const Husky &rhs) 
	: Dog(rhs)
	, maxNoOfSledges(rhs.maxNoOfSledges)
{
	std::cout << "Copy constructor of Husky: " << name;
}

Husky& operator=(const Husky &a)
{
	std::cout << "Copy assignment operator called for Husky: " << name << "\n";
	if (this == &a)
		return *this;

	int *toysOrig = toys;
	toys = new int(*a.toys);
	delete toysOrig;

	name = a.name;
	age = a.age;
	favouriteFood = a.favouriteFood;
	maxNoOfSledges = a.maxNoOfSledges;

	return *this;
}