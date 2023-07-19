#include <iostream>

#define N 15

using namespace std;

int n, a[N + 1], cnt;

void input()
{
	cin >> n;
}

void output()
{
	cnt++;
	for (int i = 1; i <= n; i++)
		cout << a[i];
	cout << '\n';
}

void core(int depth)
{
	if (depth > n)
		output();
	else
		for (int i = 0; i <= 1; i++)
		{
			a[depth] = i;
			core(depth + 1);
		}
}

int main()
{
	input();
	core(1);
	cout << cnt << '\n';
	return 0;	
}