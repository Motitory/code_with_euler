#include <cstdio>

int main(void)
{
	int a[101][101] = { 0 };
	int n, m, i, j;

	scanf("%d %d", &n, &m);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
			scanf("%d", &a[i][j]);

	for (j = 1; j <= m; j++)
	{
		for (i = 1; i <= n; i++)
			printf("%d ", a[i][j]);
		printf("\n");
	}

	return 0;
}