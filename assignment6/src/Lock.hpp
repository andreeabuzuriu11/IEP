#include "Cat.hpp"


void lock(Cat &a)
{
	std::cout << "LOCK is called\n";
	a.setLocked(true);
}

void unlock(Cat &a)
{
  	std::cout<<"UNLOCK is called \n";
  	a.setLocked(false);
}

class Lock {
private:
	Cat &cat;
  
public:
	Lock(Cat &catArg)
		:cat(catArg)
	{
    	lock(cat);
  	}
  
	~Lock()
	{
		unlock(cat);
	}
};


