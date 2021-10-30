#include "Animal.hpp"

int main()
{
	Animal dog = Animal(1, "Rex", "Andrew");

	// copy constructor
	Animal dog3 = dog;

	Animal dog5 = Animal(3, "Miki", "Chris");
	// copy assignment operator
	// Animal dog2(2, "Droll", "Brian");
	// dog2 = dog5;

	// show dog info
	std::cout << dog;
	std::cout << dog3;

	// copy assignment operator
	// Animal dog2(2, "Droll", "Brian");
	// dog2 = dog;

}
