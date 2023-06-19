#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int a[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int n = sizeof(a) / sizeof(int) - 1;

	cout << boolalpha << is_sorted(a + 1, a + n + 1) << endl;
	cout << is_sorted(a + 1, a + n + 1, greater<>()) << endl;
	return 0;
}