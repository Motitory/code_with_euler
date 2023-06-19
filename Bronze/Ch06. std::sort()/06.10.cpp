#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int a[] = { 0, 9, 8, 7, 6, 5, 4, 1, 2, 3, 10 };
	int n = sizeof(a) / sizeof(int) - 1;

	nth_element(a + 1, a + 1, a + n + 1);
	cout << a[1] << endl;

	nth_element(a + 1, a + 1, a + n + 1, greater<>());
	cout << a[1] << endl;
	return 0;
}