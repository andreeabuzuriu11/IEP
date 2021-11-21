#include "Animal.hpp"

int Animal::getAge()
{
	return this->age;
}

std::string Animal::getName()
{
	return this->name;
}

std::string Animal::getfavouriteFood()
{
	return this->favouriteFood;
}

Animal::Animal(const Animal &a) 
{
	name = a.name;
	age = a.age;
	favouriteFood = a.favouriteFood;
	std::cout << "Copy constructor called for Animal: " << name << "\n";
}

void Animal::show()
{
    std::cout << "Age:" << age << " Name:" << name << " favouriteFood:" << favouriteFood << "\n";
}

Animal::~Animal()
{
	std::cout << "Destructor called for " << this->name << std::endl;
}

Animal& Animal::operator=(const Animal &a)
{
	std::cout << "Copy assignment operator called for Animal: " << name << "\n";
	if (this == &a)
		return *this;

	name = a.name;
	age = a.age;
	favouriteFood = a.favouriteFood;

	return *this;
}