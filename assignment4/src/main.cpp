#include "Shelter.hpp"
#include <vector>

int main()
{
	Dog dog = Dog(1, "Rex", "Chicken bones");

	// copy constructor
	Dog dog3 = dog;

	Dog dog5 = Dog(3, "Miki", "Scooby snacks");
	// copy assignment operator
	// Dog dog2(2, "Droll", "Brian");
	// dog2 = dog5;

	// show dog info
	dog.show();
	dog3.show();
	dog5.show();


	std::cout << "----------- Dog objects were created successfully -----------\n";


	// adding the shelter
	std::vector<Dog> dogs = {dog, dog5};

	Shelter shelter1 = Shelter("Happy Pets", "Bucharest", dogs);

	shelter1.show();
}
