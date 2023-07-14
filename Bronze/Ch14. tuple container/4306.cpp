#include <iostream>
#include <algorithm>
#include <tuple>

#define N 50'000

using namespace std;

int n, k;
tuple<int, int, int> a[N + 1];

bool cmp(const tuple<int, int, int>& x, const tuple<int, int, int>& y)
{
	return (get<1>(x) > get<1>(y));
}

int main()
{
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
	{
		int s1, s2;
		cin >> s1 >> s2;
		a[i] = { s1, s2, i };
	}

	sort(a + 1, a + n + 1, greater<>());

	sort(a + 1, a + k + 1, cmp);

	cout << get<2>(a[1]) << '\n';

	return 0;
}