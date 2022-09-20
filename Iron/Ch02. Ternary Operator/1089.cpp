#include <cstdio>

int main(void)
{
	int D, H, M, i;
	scanf("%d %d %d", &D, &H, &M);

	int m1 = 11 * 24 * 60 + 11 * 60 + 11;
	int m2 = D * 24 * 60 + H * 60 + M;
	
	printf("%d\n", m2 - m1 < 0 ? -1 : m2 - m1);
	return 0;
}
