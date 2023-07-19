#include <iostream>

using namespace std;

void func(int num)
{
	if (num == 1)		// Base Case
		return;

	else
	{
		cout << &num << ' ' << num << '\n';
		func(num - 1);
	} 
}

int main()
{
	func(4);
	return 0;
}