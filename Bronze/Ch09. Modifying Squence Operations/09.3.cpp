#include <iostream>
#include <algorithm>

using namespace std;

int init()
{
	static int x = 0;
	return ++x;
}

void output(const int& x)
{
	cout << x << ' ';
}

int main()
{
	int a[11], b[11];
	int n = sizeof(a) / sizeof(int) - 1;

	generate(a + 1, a + n + 1, init);
	for_each(a + 1, a + n + 1, output);
	cout << endl;

	generate_n(b + 1, 10, init);
	for_each(b + 1, b + n + 1, output);
	cout << endl;
	return 0;
}