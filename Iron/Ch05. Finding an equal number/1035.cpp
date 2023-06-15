#include <cstdio>

int main(void)
{
	int n, a[101], grade[101] = { 0 };
	int i, j;

	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		scanf("%d", &a[i]);

	for (i = 1; i <= n; i++)
	{
		grade[i] = 1;
		for (j = 1; j <= n; j++)
			if (a[i] < a[j])
				grade[i]++;
	}

	for (i = 1; i <= n; i++)
		printf("%d ", grade[i]);

	return 0;
}