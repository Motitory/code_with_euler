#include <iostream>

using namespace std;

void base(int n)
{
	if (n != 0)
	{
		// base(n / 2);
		base(n >> 1);
		// cout << n % 2;
		cout << (n & 1);
	}
}

int main()
{
	base(6);
	return 0;
}