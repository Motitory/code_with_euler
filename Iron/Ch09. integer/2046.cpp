#include <cstdio>

int main(void)
{
	int n, a[10001];
	int i, x, y;

	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%d %d", &x, &y);
		a[i] = x + y;
	}

	for (i = n; i >= 1; i--)
	{
		a[i - 1] += a[i] / 10;
		a[i] %= 10;
	}

	for (i = 1; i <= n; i++)
	{
		printf("%d", a[i]);
		if (i % 100 == 0)
			printf("\n");
	}

	return 0;
}
