#include <iostream>
#include <algorithm>

using namespace std;

void output(const int& x)
{
	cout << x << ' ';
}

int main()
{
	int a[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int n = sizeof(a) / sizeof(int) - 1;
	int b[11], c[11];

	rotate(a + 1, a + 1 + 2, a + n + 1);
	for_each(a + 1, a + n + 1, output);
	cout << endl;

	rotate(a + 1, a + n + 1 - 2, a + n + 1);
	for_each(a + 1, a + n + 1, output);
	cout << endl;

	rotate_copy(a + 1, a + 1 + 2, a + n + 1, b + 1);
	for_each(b + 1, b + n + 1, output);
	cout << endl;

	rotate_copy(a + 1, a + n + 1 - 2, a + n + 1, c + 1);
	for_each(c + 1, c + n + 1, output);
	cout << endl;
	return 0;
}