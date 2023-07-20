#include <iostream>

#define N 7

using namespace std;

int n, m, a[N + 1], cnt;

void input()
{
	cin >> n >> m;
}

void output()
{
	cnt++;
	for (int i = 1; i <= m; i++)
		cout << a[i] << " ";
	cout << '\n';
}

void core(int depth)
{
	if (depth > m)
		output();
	else
		for (int i = a[depth - 1]; i <= n; i++)
		{
			a[depth] = i;
			core(depth + 1);
		}
}

int main()
{
	a[0] = 1;
	input();
	core(1);
	cout << cnt << '\n';
	return 0;
}