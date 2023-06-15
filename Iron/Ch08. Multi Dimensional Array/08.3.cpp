#include <cstdio>

int main(void)
{
	int i, j, h;
	int a[3][3][4] = { {0}, {{0}, {0, 1, 2, 3}, {0, 4, 5, 6}}, {{0}, {0, 7, 8, 9}, {0, 10, 11, 12}} };

	for (h = 1; h <= 2; h++)
	{
		for (i = 1; i <= 2; i++)
		{
			for (j = 1; j <= 3; j++)
				printf("%d ", a[h][i][j]);
			printf("\n");
		}
		printf("\n");
	}

	return 0;
}