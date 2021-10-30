#include "Animal.hpp"

int Animal::getAge()
{
	return this->age;
}

std::string Animal::getName()
{
	return this->name;
}

std::string Animal::getOwner()
{
	return this->owner;
}

Animal::Animal(const Animal &a) 
{
	std::cout << "Copy constructor called\n";
	name = a.name;
	age = a.age;
	owner = a.owner;
}

// Animal& Animal::operator=(const Animal &a)
// {
// 	std::cout << "Copy assignment operator\n";
// 	name = a.name;
// 	age = a.age;
// 	owner = a.owner;

// 	return *this;
// }

std::ostream& operator<<(std::ostream& os, const Animal& a)
{
    os << "Age:" << a.age << " Name:" << a.name << " Owner:" << a.owner << "\n";
    return os;
}

Animal::~Animal()
{
	std::cout << "Destructor called for " << this->name << std::endl;
}
