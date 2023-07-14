#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	pair<int, double> p;

	p = { 10, 1.23 };
	cout << p.first << " " << p.second << endl;

	p = make_pair(20, 4.56);
	cout << get<0>(p) << " " << get<1>(p) << endl;
	return 0;
}