#include <iostream>

struct S_test{
	int a;
};

class Test {
public:
	int foo;
	void printFoo(void) {
		realPrint();
	}
private:
	void realPrint(void) {
		std::cout << foo << std::endl;
	}
};

class Test_Constructor {
public:
	int a;
	int b;
	Test_Constructor(int a, int b) {
		this->a = a;
		this->b = b;
	}
	void print(void) {
		std::cout << a << "!" << b << std::endl;
	}
};

class Test_constructor_with_init {
public:
	int a, b, c;
	Test_constructor_with_init();
	Test_constructor_with_init(int a, int b, int c);
	void print(void);
};


// initialization line
Test_constructor_with_init::Test_constructor_with_init():a{}, b{},c{} {
}

Test_constructor_with_init::Test_constructor_with_init(int _a, int _b, int _c): a{_a}, b{_b}, c{_c}{
}

void Test_constructor_with_init::print(void) {
	std::cout << a << "." << b << "." << c << std::endl;
}

// scoped enum
enum class Week_enum {
	mon=1, tue, wed, thu, fri, sat, sun
};

// plain enum
enum Week_e {
	mon=1, tue, wed, thu, fri, sat, sun
};

int main() {
	Test t1{};
	t1.printFoo();

	Test t2;
	t2.printFoo();

	Test t3{10};
	t3.printFoo();

	Test_Constructor tc1{1,2};
	tc1.print(); 

	Test_constructor_with_init tci1{1,2,3};
	tci1.print();

	Test_constructor_with_init tci2{};
	tci2.print();
	Test_constructor_with_init tci3;
	tci3.print();

//	Week_enum Tuesday = Week_enum::tue;
	Week_e e = tue;
	std::cout << e << std::endl;

	return 0;
}