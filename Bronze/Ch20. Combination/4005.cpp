#include <iostream>
#include <algorithm>

#define N 7

using namespace std;

int n, b[N + 1];
char a[N + 1];

void input()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
}

void output(int cnt)
{
	cout << " {";
	if (cnt > 0)
	{
		cout << a[b[1]];
		for (int i = 2; i <= cnt; i++)
			cout << ", " << a[b[i]];
	}
	cout << "}";
}

void core(int depth, int cnt)
{
	if (depth > cnt)
		output(cnt);
	else
		for (int i = b[depth - 1] + 1; i <= n; i++)
		{
			b[depth] = i;
			core(depth + 1, cnt);
		}
}

int main()
{
	input();
	for (int i = 0; i <= n; i++)
	{
		cout << i << " :";
		core(1, i);
		cout << '\n';
	}

	return 0;
}