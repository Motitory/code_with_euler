#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int a[] = { 0, 1, 2, 4, 3, 1, 5, 5, 2, 4, 3 };
	int n = sizeof(a) / sizeof(int) - 1;

	for (int i = 1; i <= n; i++)
		cout << a[i] << " ";
	cout << endl;

	stable_sort(a + 1, a + n + 1);

	for (int i = 1; i <= n; i++)
		cout << a[i] << " ";
	return 0;
}