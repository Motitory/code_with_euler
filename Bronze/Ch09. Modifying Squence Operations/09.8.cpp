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
	int b[11];

	reverse(a + 1, a + n + 1);
	for_each(a + 1, a + n + 1, output);
	cout << endl;

	reverse_copy(a + 1, a + n + 1, b + 1);
	for_each(b + 1, b + n + 1, output);
	cout << endl;
	return 0;
}