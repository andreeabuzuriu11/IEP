#include "Dog.hpp"

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

Dog::Dog(const Dog &a) 
{
	name = a.name;
	age = a.age;
	favouriteFood = a.favouriteFood;
	std::cout << "Copy constructor called for Dog: " << name << "\n";
}

void Dog::show()
{
    std::cout << "Age:" << age << " Name:" << name << " favouriteFood:" << favouriteFood << "\n";
}

Dog::~Dog()
{
	std::cout << "Destructor called for " << this->name << std::endl;
}

// Dog& Dog::operator=(const Dog &a)
// {
// 	std::cout << "Copy assignment operator\n";
// 	name = a.name;
// 	age = a.age;
// 	favouriteFood = a.favouriteFood;

// 	return *this;
// }