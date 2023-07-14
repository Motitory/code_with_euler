#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	pair<pair<int, int>, string> a[101];
	string name;
	int n, c, t;

	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> name >> c >> t;
		a[i] = { {c, t}, name };
	}

	sort(a + 1, a + n + 1, greater<>());

	for (int i = 1; i <= n; i++)
	{
		cout << a[i].second << " " << a[i].first.first;
		cout << " " << a[i].first.second << '\n';
	}

	return 0;
}