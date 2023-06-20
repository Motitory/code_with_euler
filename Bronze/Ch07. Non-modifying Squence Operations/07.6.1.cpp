#include <iostream>
#include <algorithm>

using namespace std;

int a[11], f;

int main()
{
	for (int i = 1; i <= 10; i++)
		cin >> a[i];
	cin >> f;

	auto *p = find(a + 1, a + 10 + 1, f);
	if (p == a + 10 + 1)
		cout << 0 << endl;
	else
		cout << p - a << endl;

	return 0;
}