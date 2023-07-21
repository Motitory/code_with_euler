#include <iostream>

#define N 9

using namespace std;

int a[N + 1], b[8];

void input()
{
	for (int i = 1; i <= N; i++)
		cin >> a[i];
}

void output(int sum)
{
	if (sum == 100)
		for (int i = 1; i <= 7; i++)
			cout << a[b[i]] << '\n';
}

void core(int depth, int sum)
{
	if (depth > 7)
		output(sum);
	else
		for (int i = b[depth - 1] + 1; i <= N; i++)
		{
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