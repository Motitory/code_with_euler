#include <iostream>

using namespace std;

int n, a[11], cnt;

void core(int depth, int sum)
{
	if (depth > n)
		if (sum == 100)
			cnt++;
	else
		for (int i = a[depth - 1] + 1; i <= 100; i++)
		{
			if (sum + i > 100)
				return;
			a[depth] = i;
			core(depth + 1, sum + i);
		}
}

int main()
{
	cin >> n;
	core(1, 0);
	cout << cnt << '\n';
	return 0;
}