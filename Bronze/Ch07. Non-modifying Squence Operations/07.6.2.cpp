#include <iostream>
#include <algorithm>

using namespace std;

int f, n = 10;
int a[10 + 1];

int main()
{
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	cin >> f;

	auto p = count(a + 1, a + n + 1, f);
	cout << p << endl;
	return 0;
}