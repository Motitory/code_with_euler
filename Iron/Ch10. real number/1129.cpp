#include <cstdio>

int main(void)
{
	int n;
	double a[21], temp;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
		scanf("%lf", &a[i]);

	for (int k = 1; k <= n- - 1; k++)
	{
		for (int i = k; i <= n - 1; i++)
			for (int j = i + 1; j <= n; j++)
				if (a[i] > a[j])
					temp = a[i], a[i] = a[j], a[j] = temp;
		a[k + 1] = (a[k] + a[k + 1]) / 2;
	}		

	printf("%lf\n", a[n]);

	return 0;
}