#include <string>
#include <iostream>

class Animal {
public:
	Animal(int age, std::string name, std::string favouriteFood)
		:age(age)
		,name(name)
		,favouriteFood(favouriteFood) 
		{};
	Animal(const Animal &a); // copy constructor
	Animal& operator=(const Animal &a); // copy assignment operator
	void show();
	~Animal(); // destructor
	
private:
	int age;
	std::string name;
	std::string favouriteFood;

public:
	int getAge();
	std::string getName();
	std::string getfavouriteFood();
};
