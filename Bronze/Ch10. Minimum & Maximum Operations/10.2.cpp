#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int a[] = { 0, 1, 2, 3, 4, 5, 5, 4, 3, 2, 1 };
	int n = sizeof(a) / sizeof(int) - 1;

	cout << max(10, 20)  << endl;
	cout << max_element(a + 1, a + n + 1) - a << endl;
	cout << *max_element(a + 1, a + n + 1) << endl;
	return 0;
}