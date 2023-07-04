#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int a[] = { 0, 5, 4, 3, 2, 1, 1, 2, 3, 4, 5 };
	int n = sizeof(a) / sizeof(int) - 1;

	auto* p = min_element(a + 1, a + n + 1);

	cout << min(10, 20) << endl;
	cout << p - a << endl;
	cout << *p << endl;
	return 0;
}