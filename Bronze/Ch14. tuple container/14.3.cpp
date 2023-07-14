#include <iostream>
#include <tuple>
#include <algorithm>
#include <string>

#define N 100

using namespace std;

int n, c, t;
string name;
tuple<int, int, string> a[N + 1];

int main()
{
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> name >> c >> t;
		a[i] = {c, t, name};
	}

	sort(a + 1, a + n + 1, greater<>());

	for (int i = 1; i <= n; i++)
		cout << get<2>(a[i]) << " " << get<0>(a[i]) << " " << get<1>(a[i]) << '\n';

	return 0;
}