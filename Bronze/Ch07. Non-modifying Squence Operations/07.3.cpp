#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int a[] = { 0, 10, 20, 30, 40, 50, 60, 70, 70, 70, 100 };
	int n = sizeof(a) / sizeof(int) - 1;

	auto p = count(a + 1, a + n + 1, 70);
	cout << p << endl;
	cout << count(a + 1, a + n + 1, 80) << endl;
	return 0;
}