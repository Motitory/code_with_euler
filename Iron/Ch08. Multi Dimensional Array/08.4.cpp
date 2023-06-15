#include <cstdio>

int main(void)
{
	int d, n, m, a[101][101][101];
	int i, j, h;

	scanf("%d %d %d", &d, &n, &m);
	for (h = 1; h <= d; h++)
		for (i = 1; i <= n; i++)
			for (j = 1; j <= m; j++)
				scanf("%d", &a[h][i][j]);

	for (h = 1; h <= d; h++)
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= m; j++)
				printf("%d ", a[h][i][j]);
			printf("\n");
		}

	return 0;
}