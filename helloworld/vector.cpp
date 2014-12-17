#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<int> v = {1,2,3};
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << endl;
	}

	v.push_back(4);
	for(auto x : v) 
	{
		cout << x << endl;
	}

	return 0;
}