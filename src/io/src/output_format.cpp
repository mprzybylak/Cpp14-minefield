#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;

int main() {

	/*
	Integer output
	*/

	cout << "INTS";

	// different number systems
	cout << 123 << " decimal" << endl;

	// with std::showbase number system prefix will be shown
	cout << std::showbase << std::hex << 123 << " hexadecimal" << endl;

	// withot std::oct, it will still be hex
	cout << std::oct << 123 << " octal" << endl; 

	cout << std::dec;

	/*
	Float output
	*/

	cout << "FLOATS";
	cout << 123.4567789 << " default" << endl;
	cout << std::fixed << 123.4567789 << " fixed" << endl;
	cout << std::scientific << 123.4567789 << " scientific" << endl;

	cout  << std::setprecision(8) << 123.4567789 << " default precision 8" << endl;


	/*
	Width
	*/

	cout << "WIDTH" << endl;
	cout << "|" << std::setw(8) << 123.0 << "|" << endl;
	cout << "|" << std::setw(8) << "aa" << "|" << endl;

	return 0;
}