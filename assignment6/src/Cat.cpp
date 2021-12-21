#include "Cat.hpp"


// CONSTRUCTORS

Cat::Cat()
{
	std::cout << "Empty constructor called\n";
}

Cat::Cat(const Cat &a)					// COPY CONSTRUCTOR
{
   	std::cout << "Copy constructor called for Cat: " << name << "\n";
   	age = a.age;
   	name = a.name;
   	isLocked = a.isLocked;
}

Cat &Cat::operator=(const Cat &a)		// COPY ASSIGNMENT OPERATOR
{
	std::cout << "Copy assignment operator called for Cat: " << name << "\n";
   	if(this==&a)
    {
       	return *this;
    }
   	age = a.age;
   	name = a.name;
   	isLocked = a.isLocked;
   	return *this;
}

// GETTERS

int Cat::getAge()
{
	std::cout << "age: "<< age << std::endl;
	return this->age;
}
  
std::string Cat::getName()
{
	std::cout << "name: "<< name <<std::endl;
    return this->name;
}
  
bool Cat::isObjectLocked()
{
	if(isLocked)
		std::cout << "Object is LOCKED\n";
	else
		std::cout << "Object is UNLOCKED\n";
   	return this->isLocked;
}

// SETTERS

void Cat::setAge(int age)
{
    this->age = age;
}  
  
void Cat::setName(std::string name)
{
	this->name = name;
}
  
void Cat::setLocked(bool isLocked)
{
	this->isLocked = isLocked;
}

Cat::~Cat() 
{
	std::cout << "Destructor called \n";
}