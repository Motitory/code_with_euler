#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(const int& x)
{
	int cnt = 0;
	for (int i = 1; i <= x; i++)
		if (x % i == 0)
			cnt++;
	return cnt % 2 == 1;
}

int main()
{
	int a[] = { 0, 10, 20, 30, 40, 50, 60, 70, 70, 70, 100 };
	int n = sizeof(a) / sizeof(int) - 1;

	auto* p = find_if(a + 1, a + n + 1, cmp);
	cout << p - a << endl;
	cout << *p << endl;
	return 0;
}