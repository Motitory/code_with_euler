#include <cstdio>

int main(void)
{
	int a[10][10] = {0};
	int i, j, x, y, max = -1;

	for (i = 1; i <= 9; i++)
		for (j = 1; j <= 9; j++)
			scanf("%d", &a[i][j]);

	for (i = 1; i <= 9; i++)
		for (j = 1; j <= 9; j++)
			if (max < a[i][j])
			{
				max = a[i][j];
				y = i;
				x = j;
			}
	printf("%d\n", max);
	printf("%d %d\n", y, x);

	return 0;
}