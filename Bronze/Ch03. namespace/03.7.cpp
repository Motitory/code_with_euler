#include <iostream>

using namespace std;

namespace mystd
{
	int count(int* first, int* last, const int &val)
	{
		int cnt = 0;
		while (first != last)
		{
			if (*first == val)
				cnt++;
			first++;
		}
		return cnt;
	}
}

int main()
{
	int a[101];
	int n, s, e, k;

	cin >> n >> s >> e >> k;
	for (int i = 1; i <= n; i++)
		cin >> a[i];

	cout << mystd::count(a + s, a + e + 1, k) << endl;
	return 0;
}