#include <cstdio>

int main(void)
{
	int A, B, C, max;

	scanf("%d %d %d", &A, &B, &C);
	max = A > B ? A : B;
	max = C > max ? C : max;
	printf("%d\n", max);

	return 0;
}