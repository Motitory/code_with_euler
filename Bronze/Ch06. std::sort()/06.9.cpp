#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int a[] = { 0, 9, 8, 7, 6, 5, 4, 1, 2, 3, 10 };
	int n = sizeof(a) / sizeof(int) - 1;

	partial_sort(a + 1, a + 6, a + n + 1);
	for (int i = 1; i <= 10; i++)
		cout << a[i] << " ";
	cout << endl;

	partial_sort(a + 1, a + 6, a + n + 1, greater<>());
	for (int i = 1; i <= 10; i++)
		cout << a[i] << " ";
	return 0;
}