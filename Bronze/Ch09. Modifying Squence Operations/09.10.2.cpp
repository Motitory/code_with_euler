#include <iostream>
#include <algorithm>

using namespace std;

void output(const int& x)
{
	cout << x << ' ';
}

int a[11], k;

int main()
{
	for (int i = 1; i <= 10; i++)
		cin >> a[i];

	cin >> k;

	if (k >= 0)
		rotate(a + 1, a + k + 1, a + 11);
	else
		rotate(a + 1, a + 11 + k, a + 11);

	for_each(a + 1, a + 11, output);
	cout << endl;
	return 0;
}