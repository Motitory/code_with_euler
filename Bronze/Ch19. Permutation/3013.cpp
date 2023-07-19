#include <iostream>

#define N 7

using namespace std;

int n, m, a[N + 1], cnt;
bool check[N + 1];

void input()
{
	cin >> n >> m;
}

void output()
{
	cnt++;
}

void core(int depth)
{
	if (depth > m)
		output();
	else
	{
		for (int i = 1; i <= n; i++)
		{
			if (check[i] == false)
			{
				a[depth] = i;
				check[i] = true;
				core(depth + 1);
				check[i] = false;
			}
		}
	}
}

int main()
{
	input();
	core(1);
	cout << cnt << '\n';
	return 0;
}