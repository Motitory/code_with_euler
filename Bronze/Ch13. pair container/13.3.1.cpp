#include <iostream>
#include <string>
#include <algorithm>

#define N 100

using namespace std;

int n, score, c, t;
string name;
pair<int, string> a[N + 1];

int main()
{
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> name >> c >> t;
		a[i] = {c + t, name};
	}

	sort(a + 1, a + n + 1, greater<>());

	for (int i = 1; i <= n; i++)
		cout << a[i].second << ' ' << a[i].first << '\n';

	return 0;
}