#include "Dog.hpp"

Dog::Dog(const Dog &a) 
{
	name = a.name;
	age = a.age;
	favouriteFood = a.favouriteFood;
	toys = new int(*a.toys);
	std::cout << "Copy constructor called for Dog: " << name << "\n";
}

Dog& Dog::operator=(const Dog &a)
{
	std::cout << "Copy assignment operator called for: " << name << "\n";
	if (this == &a)
		return *this;

	int *toysOrig = toys;
	toys = new int(*a.toys);
	delete toysOrig;

	name = a.name;
	age = a.age;
	favouriteFood = a.favouriteFood;

	return *this;
}

Dog::~Dog()
{
	std::cout << "Destructor called for " << name << std::endl;
}

int Dog::getAge()
{
	return this->age;
}

std::string Dog::getName()
{
	return this->name;
}

std::string Dog::getfavouriteFood()
{
	return this->favouriteFood;
}

void Dog::show()
{
    std::cout << "Age:" << age << " Name:" << name << " favouriteFood:" << favouriteFood << " number of toys:" << *toys << "\n";
}