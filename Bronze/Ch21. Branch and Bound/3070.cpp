#include <iostream>
#include <algorithm>

#define N 20

using namespace std;

int n, m, a[N + 1], b[N + 1];

void input()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	sort(a + 1, a + n + 1);
}

void output(int len)
{
	for (int i = 1; i <= len; i++)
		cout << a[b[i]] << " ";
	cout << '\n';
}

void core(int depth, int sum)
{
	if (sum == m)
		output(depth - 1);
	else
		for (int i = b[depth - 1] + 1; i <= n; i++)
		{
			if (sum + a[i] > m)
				return;
			b[depth] = i;
			core(depth + 1, sum + a[i]);
		}
}

int main()
{
	input();
	core(1, 0);
	return 0;
}
