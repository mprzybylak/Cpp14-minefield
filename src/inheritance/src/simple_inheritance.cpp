#include <iostream>

class BaseClass {
public:
	void hello();
};

void BaseClass::hello() {
	std::cout << "hello base class" << std::endl;
}

// inheritance. By default class inheritance is "private", so if we dont want that
// we need explicit mark inheritance as public. 
// Structures by default inherits "public"
class ChildClass : public BaseClass { 
public:
	void hello();
};

void ChildClass::hello() {
	std::cout << "hello child class" << std::endl;
}

int main() {


	BaseClass base = BaseClass{};
	base.hello();

	ChildClass child = ChildClass{};
	child.hello();

	BaseClass* b = new ChildClass{};
	b->hello(); // hello method from base class because we have BaseClass reference
	delete b;

	return 0;
} 