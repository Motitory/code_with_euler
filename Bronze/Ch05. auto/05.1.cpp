#include <iostream>

using namespace std;

int main()
{
	auto a = 10;
	auto b = a;
	auto c = 10.0;

	cout << a << endl;
	cout << b << endl;

	cout.precision(1);
	cout << fixed << c << endl;
	return 0;
}