#include <iostream>
#include <algorithm>

#define N 8

using namespace std;

pair<int, int> a[N + 1];
int sum;

void input()
{
	for (int i = 1; i <= N; i++)
	{
		int score;
		cin >> score;
		a[i] = { score, i };
	}
}

bool cmp(const pair<int, int>& x, const pair<int, int>& y)
{
	return x.second < y.second;
}

void core()
{
	partial_sort(a + 1, a + 6, a + N + 1, greater<>());
	sort(a + 1, a + 6, cmp);

	for (int i = 1; i <= 5; i++)
		sum += a[i].first;
}

void output()
{
	cout << sum << '\n';
	for (int i = 1; i <= 5; i++)
		cout << a[i].second << " ";
	cout << '\n';
}

int main()
{
	input();
	core();
	output();

	return 0;
}