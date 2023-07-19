#include <iostream>

using namespace std;

int func(int num)
{
	if (num == 1)
		return 1;
	else
		return num + func(num - 1);
}

int main()
{
	int n;
	cin >> n;	

	cout << func(n) << '\n';

	return 0;
}