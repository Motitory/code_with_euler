#include <iostream>
#include <algorithm>

using namespace std;

void output(const int& x)
{
	cout << x << ' ';
}

int main()
{
	int a[] = { 0, 1, 2, 3, 4, 5 };
	int b[] = { 0, 6, 7, 8, 9, 10 };
	int n = sizeof(a) / sizeof(int) - 1;
	int x = 10, y = 20;

	swap(x, y);
	cout << x << " " << y << endl;

	swap_ranges(a + 1, a + n + 1, b + 1);
	for_each(a + 1, a + n + 1, output);
	cout << endl;
	for_each(b + 1, b + n + 1, output);
	cout << endl;
	return 0;
}