#include <cstdio>

int main(void)
{
	int a[6][6] = { {0}, {0, 1, 2, 3, 4, 5}, {0, 6, 7, 8, 9, 10}, {0, 11, 12, 13, 14, 15}, {0, 16, 17, 18, 19, 20}, {0, 21, 22, 23, 24, 25} };
	int i, j, sum = 0;

	for (i = 1; i <= 5; i++)
		for (j = 1; j <= 5; j += 2)
			sum += a[i][j];

	printf("%d\n", sum);

	return 0;
}