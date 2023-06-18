#include <iostream>

using namespace std;

int main(void)
{
	int a, b;
	cin >> a >> b;

	cout.width(6);
	cout << a << '\n';

	cout.width(6);
	cout << b << '\n';

	cout << "------" << '\n';

	cout.width(6);
	cout << a * (b % 10) << '\n';

	cout.width(5);
	cout << a * (b / 10 % 10) << '\n';

	cout.width(4);
	cout << a * (b / 100) << '\n';

	cout << "------" << '\n';

	cout.width(6);
	cout << a * b << '\n';

	return 0;
}