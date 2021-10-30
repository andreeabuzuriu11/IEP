#include <string>
#include <iostream>

class Animal {
public:
	Animal(int age, std::string name, std::string owner)
		:age(age)
		,name(name)
		,owner(owner) 
		{};
	Animal(const Animal &a); // copy constructor
	friend std::ostream& operator<<(std::ostream& os, const Animal& a);
	~Animal(); // destructor
	
private:
	Animal(); // defined as private so it cannot be called
	Animal& operator=(const Animal &a); // copy assignment operator

private:
	int age;
	std::string name;
	std::string owner;

public:
	int getAge();
	std::string getName();
	std::string getOwner();
};
