#include <iostream>
#include <algorithm>

#define N 100'000

using namespace std;

int n, m;
pair<int, int> a[N + 1];

void input()
{
	int woman, man;

	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> woman >> man;
		a[i] = { woman + man, i };
	}
}

bool cmp(const pair<int, int>& x, const pair<int, int>& y)
{
	return (x.first > y.first) || (x.first == y.first && x.second < y.second);
}

void core()
{
	sort(a + 1, a + n + 1, cmp);
}

void output()
{
	for (int i = 1; i <= m; i++)
		cout << a[i].second << '\n';
}

int main()
{
	input();
	core();
	output();
	return 0;	
}