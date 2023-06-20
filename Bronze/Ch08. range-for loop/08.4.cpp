#include <iostream>
#include <algorithm>

using namespace std;

int square(const int& x)
{
	return x * x;
}

int add(const int& x, const int& y)
{
	return x + y;
}

void output(const int& x)
{
	cout << x << " ";
}

int main()
{
	int a[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int b[11], c[11];
	int n = sizeof(a) / sizeof(int) - 1;

	transform(a + 1, a + n + 1, b + 1, square);
	for_each(a + 1, a + n + 1, output);
	cout << endl;
	for_each(b + 1, b + n + 1, output);
	cout << endl;

	transform(a + 1, a + n + 1, b + 1, c + 1, add);
	for_each(c + 1, c + n + 1, output);
	cout << endl;
	return 0;
}
