#include <cstdio>

int main(void)
{
	int i, a, b;

	scanf("%d %d", &a, &b);
	for (i = (a % 2 ? a + 1 : a); i <= b; i += 2)
		printf("%d\n", i);

	return 0;
}