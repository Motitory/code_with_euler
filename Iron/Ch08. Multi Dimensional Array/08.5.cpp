#include <cstdio>

int main(void)
{
	int a[5][3][4] = { {0}, {{0}, {0, 1, 2, 3}, {0, 4, 5, 6}}, {{0}, {0, 7, 8, 9}, {0, 10, 11, 12}}, {{0}, {0, 13, 14, 15}, {0, 16, 17, 18}}, {{0}, {0, 19, 20, 21}, {0, 22, 23, 24}} };
	int sum = 0;

	for (int h = 1; h <= 4; h++)
		for (int i = 1; i <= 2; i++)
			for (int j = 1; j <= 3; j++)
				sum += a[h][i][j];

	printf("%d\n", sum);

	return 0;
}