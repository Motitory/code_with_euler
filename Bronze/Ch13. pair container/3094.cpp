#include <iostream>
#include <algorithm>

#define N 50'000

using namespace std;

int t, n;
pair<int, int> a[N + 1];

int main()
{
	cin >> t >> n;
	for (int i = 1; i <= n; i++)
	{
		int x;
		cin >> x;
		a[i] = { abs(x), x };
	}

	sort(a + 1, a + n + 1);

	int sum = 0, i = 1;

	for (i = 1; i <= n; i++)
	{
		int dist = abs(a[i].second - a[i - 1].second);
		if (t < sum + dist)
			break;
		sum += dist;
	}

	cout << i - 1 << '\n';

	return 0;
}