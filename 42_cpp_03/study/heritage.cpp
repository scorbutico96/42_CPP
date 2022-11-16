#include <string>

class Quadruped // Can access name, run() and legs
{

private:
	std::string		name; // Only accessible from a Quadruped object

protected:
	Leg				legs[4]; // Accessible from a Quadruped object or derived

public:
	void			run(); // Accessible form wherever

};

class Dog : public Quadruped // Can access run() and legs
{
};

int
main(void) // Can only access run()
{
}

// TO DISCOVER
// how to call parent's constructor
// how to make sure destructors are called for both classes

// public inherits everything
// encapsulation levels of inheritance to get protected and private

// multiple inheritance

// diamond heritage

// LEVELS of INHERITANCE
// public and protected are inherited
// private is never inherited

// PUBLIC
// public becomes public
// protected becomes protected

// PROTECTED
// both become protected

// PRIVATE
// both become private