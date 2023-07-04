#include <iostream>
#include <algorithm>

using namespace std;

bool isEven(const int& x)
{
	return x % 2 == 0;
}

void output(const int& x)
{
	// if (x != 0)
		cout << x << " ";
}

int main()
{
	int a[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int n = sizeof(a) / sizeof(int) - 1;
	int b[11], c[11] = { 0 }, d[11] = { 0 };

	copy(a + 1, a + n + 1, b + 1);

	remove(a + 1, a + n + 1, 1);
	for_each(a + 1, a + n + 1, output);
	cout << endl;

	remove_if(a + 1, a + n + 1, isEven);
	for_each(a + 1, a + n + 1, output);
	cout << endl;

	remove_copy(b + 1, b + n + 1, c + 1, 1);
	for_each(c + 1, c + n + 1, output);
	cout << endl;

	remove_copy_if(b + 1, b + n + 1, d + 1, isEven);
	for_each(d + 1, d + n + 1, output);
	cout << endl;
	return 0;
}
