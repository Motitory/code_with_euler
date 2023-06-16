#include <cstdio>

int main(void)
{
	int a, b, c, d, turn;
	double maxv;

	scanf("%d %d %d %d", &a, &b, &c, &d);

	maxv = (double)a / c + (double)b / d, turn = 0;
	if (maxv < (double)c / d + (double)a / b)
		maxv = (double)c / d + (double)a / b, turn = 1;
	if (maxv < (double)d / b + (double)c / a)
		maxv = (double)d / b + (double)c / a, turn = 2;
	if (maxv < (double)b / a + (double)d / c)
		maxv = (double)b / a + (double)d / c, turn = 3;
	printf("%d\n", turn);

	return 0;
}