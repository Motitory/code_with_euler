#include <cstdio>

int main(void)
{
	int n;
	scanf("%d", &n);

	long long a[91] = { 0, 1 };

	for (int i = 2; i <= n; i++)
		a[i] = a[i - 1] + a[i - 2];

	printf("%lld\n", a[n]);

	return 0;
}