#include <string>
#include <iostream>

class Dog {
public:
	Dog(int age, std::string name, std::string favouriteFood, int *toys)
		: age(age)
		, name(name)
		, favouriteFood(favouriteFood) 
		, toys(toys)
		{};
	Dog(const Dog &a); 				// copy constructor
	Dog& operator=(const Dog &a); 	// copy assignment operator
	~Dog(); 						// destructor

	void show();
	int getAge();
	std::string getName();
	std::string getfavouriteFood();
	

private:
	int age;
	std::string name;
	std::string favouriteFood;
	int *toys;	
};
