#include <cstdio>

int main(void)
{
	int c, r, a[21][21] = { 0 };
	int i, j;

	scanf("%d %d", &r, &c);

	for (j = 1; j <= c; j++)
		for (i = 1; i <= r; i++)
			scanf("%d", &a[i][j]);

	for (i = 1; i <= r; i++)
		for (j = 1; j <= c; j++)
			printf("%d\n", a[i][j]);

	return 0;
}