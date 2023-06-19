#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int a[] = { 0, 3, 7, 6, 8, 1, 5, 10, 2, 4, 9 };
	int n = sizeof(a) / sizeof(int) - 1;

	for (int i = 1; i <= n; i++)
		cout << a[i] << " ";
	cout << endl;

	sort(a + 1, a + n + 1);

	for (int i = 1; i <= n; i++)
		cout << a[i] << " ";
	return 0;
}