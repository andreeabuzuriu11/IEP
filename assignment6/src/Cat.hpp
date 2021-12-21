#include <string>
#include <iostream>

class Cat{
  
public:
  	Cat();														// empty constructor
  	Cat(unsigned int age, std::string name, bool isLocked)		// constructor
  		: age(age)		
  		, name(name)
  		, isLocked(isLocked)
  		{};
 	Cat(const Cat &a);											// copy constructor
  	Cat &operator=(const Cat &a);								// copy assignment operator

  	~Cat();														// destructor

  	// GETTERS
  	int getAge();
  	std::string getName();
  	bool isObjectLocked();

  	// SETTERS
  	void setAge(int age);
  	void setName(std::string name);
  	void setLocked(bool isLocked);

private:
	unsigned int age = 1;
  	std::string name = "Kitty";
  	bool isLocked = false;
};