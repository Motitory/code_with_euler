#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int a[] = { 0, 1, 2, 3, 4, 5 };
	int b[] = { 0, 1, 2, 3, 4, 5 };
	int c[] = { 0, 1, 2, 3, 4 };
	int n = sizeof(a) / sizeof(int) - 1;

	cout << boolalpha;
	cout << equal(a + 1, a + n + 1, b + 1) << endl;
	cout << equal(a + 1, a + n + 1, c + 1) << endl;
	return 0;
}