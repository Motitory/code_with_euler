#include <iostream>

using namespace std;

int main()
{
	bool a = true, b = false;

	cout << a << endl;
	cout << b << endl;
	cout << sizeof(bool) << endl;

	cout << boolalpha << a << endl;
	cout << b << endl;

	cout << noboolalpha << a << endl;
	cout << b << endl;

	return 0;
}