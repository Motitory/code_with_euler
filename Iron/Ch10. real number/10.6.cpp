#include <cstdio>

int main(void)
{
	int n, a[101], b[101];
	int i, j, temp;

	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		scanf("%d %d", &a[i], &b[i]);

	for (i = 1; i <= n - 1; i++)
		for (j = i + 1; j <= n; j++)
			if (a[i] * b[j] > a[j] * b[i])
			{
				temp = a[i], a[i] = a[j], a[j] = temp;
				temp = b[i], b[i] = b[j], b[j] = temp;
			}

	for (i = 1; i <= n; i++)
		printf("%d/%d\n", a[i], b[i]);

	return 0;
}