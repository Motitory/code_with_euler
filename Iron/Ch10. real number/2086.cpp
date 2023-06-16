#include <cstdio>

int main(void)
{
	int t, n, m, i, a, b, cnt;
	scanf("%d", &t);

	for (i = 1; i <= t; i++)
	{
		scanf("%d %d", &n, &m);

		cnt = 0;
		for (a = 1; a <= n - 2; a++)
			for (b = a + 1; b <= n - 1; b++)
				if ((a * a + b * b + m) % (a * b) == 0)
					cnt++;

		printf("Case %d: %d\n", i, cnt);
	}
	return 0;
}