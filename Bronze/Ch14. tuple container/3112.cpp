#include <iostream>
#include <algorithm>
#include <tuple>

#define N 25'000

using namespace std;

int n;
double j, p;
tuple<double, int, int> a[N + 1];

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> j >> p;
		a[i] = { j / p, i, p };
	}

	partial_sort(a + 1, a + 4, a + n + 1, greater<>());

	cout << get<2>(a[1]) + get<2>(a[2]) + get<2>(a[3]) << '\n';
	for (int i = 1; i <= 3; i++)
	{
		cout << get<1>(a[i]) << '\n';
	}

	return 0;
}