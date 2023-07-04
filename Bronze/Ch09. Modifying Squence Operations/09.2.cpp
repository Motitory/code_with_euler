#include <iostream>
#include <algorithm>

using namespace std;

void output(const int& x)
{
	cout << x << ' ';
}

int main()
{
	int a[11];
	int n = sizeof(a) / sizeof(int) - 1;

	fill(a + 1, a + n + 1, 1);
	for_each(a + 1, a + n + 1, output);
	cout << endl;

	fill_n(a + 6, 5, 2);
	for_each(a + 1, a + n + 1, output);
	cout << endl;
	return 0;
}