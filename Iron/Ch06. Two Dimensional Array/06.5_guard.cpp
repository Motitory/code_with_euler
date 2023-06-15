#include <cstdio>

int main(void)
{
	int a[102][102] = { 0 }, n, m;
	int i, j;

	scanf("%d %d", &n, &m);
	for (i = 0; i <= n + 1; i++)
		for (j = 0; j <= m + 1; j++)
			if (i == 0 || j == 0 || i == n + 1 || j == m + 1)
				a[i][j] = -1;

	for (i = 0; i <= n + 1; i++)
	{
		for (j = 0; j <= m + 1; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	return 0;
}