#include <cstdio>

int main(void)
{
	int n, b = 1, d = 0;
	scanf("%d", &n);

	while (n)
	{
		d += (n % 10) * b;
		b *= 2;
		n /= 10;
	}

	printf("%d\n", d);

	return 0;
}