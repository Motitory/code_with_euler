#include <iostream>

#define N 10

using namespace std;

int n, k, a[N + 1], b[N + 1], cnt;
bool check[N + 1];

void input()
{
	cin >> n >> k;

	for (int i = 1; i <= n; i++)
		cin >> a[i];
}

void core(int depth)
{
	if (depth > n)
	{
		if (abs(b[depth - 1] - a[1]) <= k)
			cnt++;
	}
	else
		for (int i = 2; i <= n; i++)
			if (check[i] == false && abs(b[depth - 1] - a[i]) <= k)
			{
				b[depth] = a[i];
				check[i] = true;
				core(depth + 1);
				check[i] = false;
			}
}

int main()
{
	input();
	b[1] = a[1];
	check[1] = true;
	core(2);
	cout << cnt << '\n';
	return 0;
}