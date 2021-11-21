#include "Animal.hpp"

int main()
{
	Animal animal1 = Animal(1, "Rex", "Bones");
	Animal animal2 = Animal(2, "Sharky", "Chicken meat");
	animal1.show();
	animal2.show();

	// copy constructor
	Animal animal3 = animal2;

	Animal animal4 = Animal(4, "Miki", "Scooby snacks");
	// copy assignment operator
	Animal animal5(5, "Droll", "Brian");
	animal5 = animal4;

	// assignment to self handled for operator=
	animal5 = animal5;
	animal5.show();
}
