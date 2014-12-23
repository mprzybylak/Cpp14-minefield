#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {

	int a,b,c;

	cin >> a;
	cin >> std::hex >> b;
	cin >> std::oct >> c;

	cout << a << " " << b << " " << c << endl;

	return 0;
}