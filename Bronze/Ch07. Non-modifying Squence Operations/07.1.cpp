#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int a[] = { 0, 10, 20, 30, 40, 50, 60, 70, 70, 70, 100 };
	int n = sizeof(a) / sizeof(int) - 1;

	auto* p = find(a + 1, a + n + 1, 70);
	cout << p - a << endl;
	cout << *p << endl;

	p = find(a + 1, a + n + 1, 80);
	if (p == a + n + 1)
		cout << "Not found" << endl;
	return 0;
}