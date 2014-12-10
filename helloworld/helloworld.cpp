#include <iostream>

using namespace std;

int main() {

	constexpr double pi = 3.14;
	const double a = 2;

	cout << "Podaj imie leszczu" << endl;

	string first_name;
	cin >> first_name;

	cout << "Podaj wiek" << endl;

	int age;
	cin >> age;

	switch(age) {
		case 18:
			cout << "Najs..." << endl;
			break;
		default:
			cout << "Slabo..." << endl;
			break;
	}

	double(pi);
	double{pi};

	cout << "Witaj, " << first_name << endl;

	return 0;
}  