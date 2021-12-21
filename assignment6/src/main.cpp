// Item 13: Use objects to manage resources.
// Item 14: Think carefully about copying behavior in resource-managing classes.


#include<iostream>
#include<memory>

#include "Lock.hpp"

using namespace std;


Cat* createNewCat()
{
	return(new Cat);
}

int main(){

	// OLD WAY: auto_ptr

	auto_ptr<Cat> cat1_a(createNewCat());
	cat1_a->getAge();
	cat1_a->getName();
	std::cout << "\n";


    // NEW WAY: unique_ptr
    unique_ptr<Cat> cat1_u(createNewCat());
   	cat1_u->getAge();
    cat1_u->getName();
    std::cout << "\n";

	// UNIQUE_PTR  
	{ 
    	unique_ptr<Cat> cat6(createNewCat());
    	cat6->setAge(2);
    	cat6->getAge();
    	cat6->setName("Fluffy");
    
    	unique_ptr<Cat> moved_cat6 = move(cat6);
    	moved_cat6->getName();
    	moved_cat6->getAge();
    
    	std::cout << "\n";

    	//unique_ptr<Cat> copied_cat6(cat6); ERROR!!!
  	}


  	// SHARED PTR
  	{
    	shared_ptr<Cat> cat2(createNewCat());
	    std::cout << "Count: " << cat2.use_count() << std::endl;
	    
	    shared_ptr<Cat> cat3 = move(cat2);
	    std::cout << "Count: " << cat2.use_count() << std::endl;
	    std::cout << "Count: " << cat3.use_count() << std::endl;
	    cat3->getName();
	    
	    shared_ptr<Cat> cat4(cat3);
	    cat4->setName("Ra");
	    cat3->getName();
	    std::cout << "Count: " << cat4.use_count() << std::endl;
	    std::cout << "\n";
	}
  
	Cat cat5(7, "Anne", false);
	Lock *lockedCat = new Lock(cat5);
	delete lockedCat;
}
