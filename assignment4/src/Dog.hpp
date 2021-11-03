#include <string>
#include <iostream>

class Dog {
public:
	Dog(int age, std::string name, std::string favouriteFood)
		:age(age)
		,name(name)
		,favouriteFood(favouriteFood) 
		{};
	Dog(const Dog &a); // copy constructor
	void show();
	~Dog(); // destructor

private:
	Dog(); // defined as private so it cannot be called
	Dog& operator=(const Dog &a); // copy assignment operator

private:
	int age;
	std::string name;
	std::string favouriteFood;

public:
	int getAge();
	std::string getName();
	std::string getfavouriteFood();
};
