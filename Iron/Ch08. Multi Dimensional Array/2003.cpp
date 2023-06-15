#include <cstdio>

int main(void)
{
	int a[11][11][11] = { 0 };
	int sum[11] = { 0 };
	int i, j, h, m, r, c;

	scanf("%d %d %d", &m, &r, &c);

	for (h = 1; h <= m; h++)
		for (i = 1; i <= r; i++)
			for (j = 1; j <= c; j++)
			{
				scanf("%d", &a[h][i][j]);
				sum[i] += a[h][i][j];
			}

	for (i = 1; i <= r; i++)
		printf("%d ", sum[i]);

	return 0;
}