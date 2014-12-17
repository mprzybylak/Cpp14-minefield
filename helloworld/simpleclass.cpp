#include <iostream>

using namespace std;

class Test {
public:
	char character;
	int value;
	void print(void);
};

void Test::print(void) {
	cout << "character=" << character << " value=" << value << endl;
}

int main() {
	Test t;
	t.character = 'a';
	t.value = 2;
	cout << t.character << " " << t.value << endl;

	Test t2 {'c', 'c'};
	cout << t2.character << " " << t2.value << endl;

	Test t3 {};
	cout << t3.character << " " << t3.value << endl;

	t2.print();

	int a{};

	cout << a << endl;

}