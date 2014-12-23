#include <iostream>

class BaseClass {
public:
	virtual void hello(); // virtual method
};

void BaseClass::hello() {
	std::cout << "Hello virtual BaseClass" << std::endl;
}

class ChildClass : public BaseClass {
public:
	virtual void hello(); // virtual method
};

void ChildClass::hello() {
	std::cout << "Hello virtual child class" << std::endl;
}

int main() {


	BaseClass base = BaseClass{};
	base.hello();

	ChildClass child = ChildClass{};
	child.hello();

	BaseClass* b = new ChildClass{};

	// hello method from child class
	// we have base reference but we know in runtime that this is child class
	// because method hello is "virtual"
	b->hello(); 
	delete b;


	return 0;
}