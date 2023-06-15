#include <cstdio>

int main(void)
{
	int score[6] = { 0, 75, 90, 100, 90, 85 }, grade[6] = { 0 };
	int i, j;

	for (i = 1; i <= 5; i++)
	{
		grade[i] = 1;
		for (j = 1; j <= 5; j++)
			if (score[i] < score[j])
				grade[i]++;
	}

	for (i = 1; i <= 5; i++)
		printf("%d ", grade[i]);
	return 0;
}