#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(const int& x)
{
	int cnt = 0;
	for (int i = 1; i <= x; i++)
		if (x % i == 0)
			cnt++;
	return cnt == 2;
}

int main()
{
	int a[] = { 0, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
	int n = sizeof(a) / sizeof(int) - 1;

	cout << count_if(a + 1, a + n + 1, cmp) << endl;
	return 0;
}