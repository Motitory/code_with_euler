#include <cstdio>

int main(void)
{
	int n, m, t, a[261][261] = { 0 }, sum = 0;
	int x1, y1, x2, y2, i, j, k;

	scanf("%d %d %d", &n, &m, &t);
	for (k = 1; k <= t; k++)
	{
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		for (i = x1; i <= x2; i++)
			for (j = y1; j <= y2; j++)
				a[i][j] = 1;
	}

	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
			sum += a[i][j];

	printf("%d\n", sum);

	return 0;
}