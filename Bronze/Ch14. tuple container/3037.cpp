#include <iostream>
#include <algorithm>
#include <tuple>

#define N 50'000

using namespace std;

int n, h, m, s;
tuple<int, int, int> a[N + 1];

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> h >> m >> s;
		a[i] = { h, m, s };
	}	

	sort(a + 1, a + n + 1);

	for (int i = 1; i <= n; i++)
		cout << get<0>(a[i]) << " " << get<1>(a[i]) << " " << get<2>(a[i]) << '\n';

	return 0;
}