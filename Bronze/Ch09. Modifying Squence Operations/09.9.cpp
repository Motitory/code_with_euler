#include <iostream>
#include <algorithm>

using namespace std;

void output(const int& x)
{
	if (x != 0)
		cout << x << ' ';
}

int main()
{
	int a[] = { 0, 1, 1, 2, 2, 1, 1, 2, 2, 1, 1 };
	int n = sizeof(a) / sizeof(int) - 1;
	int b[11] = { 0 };

	unique(a + 1, a + n + 1);
	for_each(a + 1, a + n + 1, output);
	cout << endl;

	sort(a + 1, a + n + 1);
	unique_copy(a + 1, a + n + 1, b + 1);
	for_each(b + 1, b + n + 1, output);
	cout << endl;
	return 0;
}