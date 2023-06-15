#include <cstdio>

int main(void)
{
	int n, s, i, j;
	scanf("%d %d", &n, &s);

	int a[21][21] = { 0 };

	for (j = 1; j <= n; j++)
		for (i = 1; i <= j; i++)
		{
			a[i][j] = s;
			s = s % 9 + 1;
		}
	

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
			if (j < i)
				printf("  ");
			else
				printf("%d ", a[i][j]);
		printf("\n");
	}

	return 0;
}