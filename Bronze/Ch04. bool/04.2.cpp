#include <iostream>

using namespace std;

bool compare(const int& x, const int& y)
{
	if (x < y)
		return true;
	return false;
}

int main()
{
	bool x;
	cin >> x;

	if (x == true)
	{
		cout << boolalpha << compare(1, 1) << endl;
		cout << compare(1, 2) << endl;
		cout << compare(2, 1) << endl;
	}
	return 0;
}