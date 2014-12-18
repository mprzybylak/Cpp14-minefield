#include <iostream>
#include <stdexcept>

using namespace std;

class BadArea{};

int area(int a, int b) {
	if(a <= 0 || b <= 0) {
		throw BadArea{};
	}
	return a* b;
}

int just_throw(string text) {
	throw runtime_error(text);
	return -1;
}

int main() {


	// our exception
	int a = 0;
	try{
		a = area(0,0);
		cout << a;
	}
	catch(BadArea) {
		cout << ":(" << endl;
	}

	// catch exepction to read data from it
	int b = 0;
	try {
		b = just_throw("error messsage");
		cout << b;
	}
	catch(runtime_error &e) {
		cerr << e.what() << endl;
	}
}