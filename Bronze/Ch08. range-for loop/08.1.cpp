#include <iostream>

using namespace std;

int main()
{
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int n = sizeof(a) / sizeof(int);
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;

	for (const auto &num : a)
		cout << num << " ";
	cout << endl;
	return 0;
}