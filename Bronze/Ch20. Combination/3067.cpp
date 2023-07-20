#include <iostream>

#define N 12

using namespace std;

int n, a[N + 1], b[7];

void input()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
}

void output()
{
	for (int i = 1; i <= 6; i++)
		cout << a[b[i]] << ' ';
	cout << '\n';
}

void core(int depth)
{
	if (depth > 6)
		output();
	else
		for (int i = b[depth - 1] + 1; i <= n; i++)
		{
			b[depth] = i;
			core(depth + 1);
		}
}

int main()
{
	input();
	core(1);
	return 0;
}