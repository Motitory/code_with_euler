#include <iostream>

using namespace std;

int func(int num)
{
	if (num == 1)		// Base Case
		return 1;
	else
		return num * func(num - 1);
}

int main()
{
	cout << func(4) << '\n';
	return 0;
}