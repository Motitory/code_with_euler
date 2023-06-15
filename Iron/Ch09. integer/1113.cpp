#include <cstdio>

int main(void)
{
	int n, m, a;
	long long r, c;

	scanf("%d %d %d", &n, &m, &a);

	r = (n - 1) / a + 1;
	c = (m - 1) / a + 1;
	printf("%lld\n", r * c);

	return 0;
}