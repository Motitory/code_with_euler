#include <iostream>
#include <string>

using namespace std;

int n, t;
string str = "0123456789ABCDEF";

void input()
{
	cin >> n >> t;
}

void core(int num)
{
	if (num != 0)
	{
		core(num / t);
		cout << str[num % t];
	}
}

int main()
{
	input();
	core(n);
	cout << '\n';

	return 0;
}