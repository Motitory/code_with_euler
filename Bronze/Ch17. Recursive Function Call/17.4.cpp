#include <iostream>

using namespace std;

int gcd(int x, int y)
{
	if (y == 0)
		return x;
	else
		return gcd(y, x % y);
}

int main()
{
	cout << gcd(12, 18) << '\n';
	return 0;
}