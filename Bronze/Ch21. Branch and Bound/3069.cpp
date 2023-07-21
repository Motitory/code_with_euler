#include <iostream>

#define N 7

using namespace std;

int s, n, a[N + 1];

void input()
{
	cin >> s >> n;
}

void output(int sum)
{
	if (sum == s)
	{
		for (int i = 1; i <= n; i++)
			cout << a[i] << " ";
		cout << '\n';
	}
}

void core(int depth, int sum)
{
	if (depth > n)
		output(sum);
	else
		for (int i = a[depth - 1] + 1; i <= s; i++)
		{
			if (sum + i > s)
				return;
			a[depth] = i;
			core(depth + 1, sum + i);
		}
}

int main()
{
	input();
	core(1, 0);
	return 0;
}