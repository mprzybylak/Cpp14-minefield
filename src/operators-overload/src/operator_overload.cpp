#include <iostream>

using std::ostream;

enum class Week {
	mon=1, tue, wed, thu, fri, sat, sun
};

Week operator++(Week& w) {
	w = (w == Week::sun) ? Week::mon : Week(int(w)+1);
	return w; 
}

ostream& operator<<(ostream& o, Week w) {
	return o << int(w);
}

int main(void) {

	Week w = Week::tue;
	++w;

	std::cout << w << std::endl;

	return 0;	
}