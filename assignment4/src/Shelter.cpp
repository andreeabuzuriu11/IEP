#include "Shelter.hpp"

void Shelter::show()
{
	std::cout << "Name:" << name << " Location:" << location << "\nDogs into this shelter: \n";
	for( auto i : dogs)
	{
		std::cout << i.getName() << " ";
	}
	std::cout << "\n";
}