#include <cstdio>

int main(void)
{
	int i, j;
	int a[4][6] = { {0}, {0, 1, 2, 3, 4, 5}, {0, 6, 7, 8, 9, 10}, {0, 11, 12, 13, 14, 15} };

	for (i = 1; i <= 3; i++)
	{
		for (j = 1; j <= 5; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}

	return 0;
}