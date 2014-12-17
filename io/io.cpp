#include <iostream>
#include <fstream>
#include <ostream>

using std::ostream;
using std::ifstream;
using std::ofstream;
using std::cout;
using std::endl;
using std::string;

class Test {
public:
	int a, b;
	Test();
	Test(int _a, int _b);
};

Test::Test(): a{0}, b{1}{}
Test::Test(int _a, int _b): a{_a}, b{_b}{}

// user defined output operator
ostream& operator<<(ostream& os, const Test& t) {
	return os << "(a=" << t.a << ", b=" << t.b << ')' << endl;
}

int main() {

	Test t{12,3};
	cout << t;

	// reading
	ifstream ifs{"lorem.txt"};
	if(!ifs) { // = !ifs.good()

		// error handling
		if(ifs.bad()) {
			cout << "stream is 'bad'";
		}
		else if(ifs.eof()) {
			cout << "end of stream";
		}
		else if(ifs.fail()) {
			cout << "failed stream";
		}

 		cout << "Cannot open file!" << endl;
	}

	string word;
	while(ifs >> word) {
		cout << word << endl;
	}

	// writing
	ofstream ofs{"output.txt"};
	if(!ofs) {
		cout << "Cannot open file!" << endl;
	}

	return 0;
}

